//
// Created by cindyortega416 on 17/06/19.
//
#include "main.c"
#include "delay.h"
#include "menu.h"
#include "login.h"
#include "output.h"
#ifndef PROYECTO_LED_AUTOFANTASTICOCOD_H
#define PROYECTO_LED_AUTOFANTASTICOCOD_H

#endif //PROYECTO_LED_AUTOFANTASTICOCOD_H

void autoFantasticoCod() {
    output(1);
    delay(DELAYMEDIO);
    int i = 2;
    do {
        output(i);
        delay(DELAYMEDIO);
        i *= 2;
    } while (i <= 64);
    do {
        output(i);
        delay(DELAYMEDIO);
        i /= 2;
    } while (i > 0);
}