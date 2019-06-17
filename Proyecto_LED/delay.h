//
// Created by cindyortega416 on 17/06/19.
//
#include "main.c"
#include "menu.h"
#include "login.h"
#ifndef PROYECTO_LED_DELAY_H
#define PROYECTO_LED_DELAY_H

#endif //PROYECTO_LED_DELAY_H

void delay(int a) {
    for (int j = 0; j < a; j++) {
        unsigned int i = 0x4fffff; //raspberry 0x3fffff
        while (i)i--;
    }
}