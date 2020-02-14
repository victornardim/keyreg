#include <time.h>
#include <stdlib.h>

#if defined(_WIN32)
    #include <windows.h>
#elif defined(__unix__)
    #include <unistd.h>
#endif

#include "timer.h"

void timer_start(int interval, void (*callback)()){
    clock_t targetTime;
    
    targetTime = clock() + (interval * CLOCKS_PER_SEC);
    
    while(clock() < targetTime) {
        //Sleep a millisecond to break the excessive processor use
        #if defined(_WIN32)
            Sleep(1);
        #elif defined(__unix__)
            usleep(1000);
        #endif
        
        (*callback)();
    }
}
