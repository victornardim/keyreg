#include "virtualKeyboard.h"

char* virtualKeyboard_translate() {
    if (PRESSED_0) {
        return "0";
    } else if (PRESSED_1) {
        return "1";
    } else if (PRESSED_2) {
        return "2";
    } else if (PRESSED_3) {
        return "3";
    } else if (PRESSED_4) {
        return "4";
    } else if (PRESSED_5) {
        return "5";
    } else if (PRESSED_6) {
        return "6";
    } else if (PRESSED_7) {
        return "7";
    } else if (PRESSED_8) {
        return "8";
    } else if (PRESSED_9) {
        return "9";
    } else if (PRESSED_A) {
        return "a";
    } else if (PRESSED_B) {
        return "b";
    } else if (PRESSED_C) {
        return "c";
    } else if (PRESSED_D) {
        return "d";
    } else if (PRESSED_E) {
        return "e";
    } else if (PRESSED_F) {
        return "f";
    } else if (PRESSED_G) {
        return "g";
    } else if (PRESSED_H) {
        return "h";
    } else if (PRESSED_I) {
        return "i";
    } else if (PRESSED_J) {
        return "j";
    } else if (PRESSED_K) {
        return "k";
    } else if (PRESSED_L) {
        return "l";
    } else if (PRESSED_M) {
        return "m";
    } else if (PRESSED_N) {
        return "n";
    } else if (PRESSED_O) {
        return "o";
    } else if (PRESSED_P) {
        return "p";
    } else if (PRESSED_Q) {
        return "q";
    } else if (PRESSED_R) {
        return "r";
    } else if (PRESSED_S) {
        return "s";
    } else if (PRESSED_T) {
        return "t";
    } else if (PRESSED_U) {
        return "u";
    } else if (PRESSED_V) {
        return "v";
    } else if (PRESSED_W) {
        return "w";
    } else if (PRESSED_X) {
        return "x";
    } else if (PRESSED_Y) {
        return "y";
    } else if (PRESSED_Z) {
        return "z";
    } else if (PRESSED_SHIFT) {
        return "<SHIFT>";
    } else if (PRESSED_BACKSPACE) {
        return "<BKSP>";
    } else if (PRESSED_CAPS) {
        return "<CAPS>";
    } else if (PRESSED_CONTROL) {
        return "<CTRL>";
    } else if (PRESSED_SPACE) {
        return "<SPACE>";
    } else if (PRESSED_ESCAPE) {
        return "<ESC>";
    } else if (PRESSED_ALT) {
        return "<ALT>";
    } else if (PRESSED_SUBTRACT) {
        return "-";
    } else if (PRESSED_ADD) {
        return "+";
    } else if (PRESSED_MULTIPLY) {
        return "*";
    } else if (PRESSED_SLASH) {
        return "/";
    } else if (PRESSED_COMMA) {
        return ",";
    } else if (PRESSED_PERIOD) {
        return ".";
    } else if (PRESSED_SEMICOLON) {
        return ";";
    } else if (PRESSED_OPEN_BRACKET) {
        return "[";
    } else if (PRESSED_BACKSLASH) {
        return "\\";
    } else if (PRESSED_CLOSE_BRACKET) {
        return "]";
    }
    
    return "";
}