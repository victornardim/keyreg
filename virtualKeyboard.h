#include <windows.h>

#ifndef VIRTUALKEYBOARD_H
#define VIRTUALKEYBOARD_H

#ifdef __cplusplus
extern "C" {
#endif

#define virtualKeyboard_pressKey(key) (GetAsyncKeyState(key) & (0x8000 != 0))

#define PRESSED_0 (virtualKeyboard_pressKey(0x30) || virtualKeyboard_pressKey(VK_NUMPAD0))
#define PRESSED_1 (virtualKeyboard_pressKey(0x31) || virtualKeyboard_pressKey(VK_NUMPAD1))
#define PRESSED_2 (virtualKeyboard_pressKey(0x32) || virtualKeyboard_pressKey(VK_NUMPAD2))
#define PRESSED_3 (virtualKeyboard_pressKey(0x33) || virtualKeyboard_pressKey(VK_NUMPAD3))
#define PRESSED_4 (virtualKeyboard_pressKey(0x34) || virtualKeyboard_pressKey(VK_NUMPAD4))
#define PRESSED_5 (virtualKeyboard_pressKey(0x35) || virtualKeyboard_pressKey(VK_NUMPAD5))
#define PRESSED_6 (virtualKeyboard_pressKey(0x36) || virtualKeyboard_pressKey(VK_NUMPAD6))
#define PRESSED_7 (virtualKeyboard_pressKey(0x37) || virtualKeyboard_pressKey(VK_NUMPAD7))
#define PRESSED_8 (virtualKeyboard_pressKey(0x38) || virtualKeyboard_pressKey(VK_NUMPAD8))
#define PRESSED_9 (virtualKeyboard_pressKey(0x39) || virtualKeyboard_pressKey(VK_NUMPAD9))

#define PRESSED_A virtualKeyboard_pressKey(0x41)
#define PRESSED_B virtualKeyboard_pressKey(0x42)
#define PRESSED_C virtualKeyboard_pressKey(0x43)
#define PRESSED_D virtualKeyboard_pressKey(0x44)
#define PRESSED_E virtualKeyboard_pressKey(0x45)
#define PRESSED_F virtualKeyboard_pressKey(0x46)
#define PRESSED_G virtualKeyboard_pressKey(0x47)
#define PRESSED_H virtualKeyboard_pressKey(0x48)
#define PRESSED_I virtualKeyboard_pressKey(0x49)
#define PRESSED_J virtualKeyboard_pressKey(0x4A)
#define PRESSED_K virtualKeyboard_pressKey(0x4B)
#define PRESSED_L virtualKeyboard_pressKey(0x4C)
#define PRESSED_M virtualKeyboard_pressKey(0x4D)
#define PRESSED_N virtualKeyboard_pressKey(0x4E)
#define PRESSED_O virtualKeyboard_pressKey(0x4F)
#define PRESSED_P virtualKeyboard_pressKey(0x50)
#define PRESSED_Q virtualKeyboard_pressKey(0x51)
#define PRESSED_R virtualKeyboard_pressKey(0x52)
#define PRESSED_S virtualKeyboard_pressKey(0x53)
#define PRESSED_T virtualKeyboard_pressKey(0x54)
#define PRESSED_U virtualKeyboard_pressKey(0x55)
#define PRESSED_V virtualKeyboard_pressKey(0x56)
#define PRESSED_W virtualKeyboard_pressKey(0x57)
#define PRESSED_X virtualKeyboard_pressKey(0x58)
#define PRESSED_Y virtualKeyboard_pressKey(0x59)
#define PRESSED_Z virtualKeyboard_pressKey(0x5A)

#define PRESSED_SUBTRACT virtualKeyboard_pressKey(VK_SUBTRACT) || virtualKeyboard_pressKey(VK_OEM_MINUS)
#define PRESSED_ADD virtualKeyboard_pressKey(VK_ADD) || virtualKeyboard_pressKey(VK_OEM_PLUS)
#define PRESSED_MULTIPLY virtualKeyboard_pressKey(VK_MULTIPLY)
#define PRESSED_SLASH virtualKeyboard_pressKey(VK_DIVIDE) || virtualKeyboard_pressKey(VK_OEM_2)
#define PRESSED_COMMA virtualKeyboard_pressKey(VK_OEM_COMMA)
#define PRESSED_PERIOD virtualKeyboard_pressKey(VK_OEM_PERIOD)
#define PRESSED_SEMICOLON virtualKeyboard_pressKey(VK_OEM_1)
#define PRESSED_OPEN_BRACKET virtualKeyboard_pressKey(VK_OEM_4)
#define PRESSED_BACKSLASH virtualKeyboard_pressKey(VK_OEM_5)
#define PRESSED_CLOSE_BRACKET virtualKeyboard_pressKey(VK_OEM_6)
    
#define PRESSED_BACKSPACE virtualKeyboard_pressKey(VK_BACK)
#define PRESSED_SHIFT (virtualKeyboard_pressKey(VK_RSHIFT) || virtualKeyboard_pressKey(VK_LSHIFT))
#define PRESSED_CAPS virtualKeyboard_pressKey(VK_CAPITAL)
#define PRESSED_CONTROL virtualKeyboard_pressKey(VK_LCONTROL) || virtualKeyboard_pressKey(VK_RCONTROL)
#define PRESSED_SPACE virtualKeyboard_pressKey(VK_SPACE)
#define PRESSED_ESCAPE virtualKeyboard_pressKey(VK_ESCAPE)
#define PRESSED_ALT virtualKeyboard_pressKey(VK_MENU)

char* virtualKeyboard_translate();

#ifdef __cplusplus
}
#endif

#endif /* VIRTUALKEYBOARD_H */
