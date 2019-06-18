//
// Created by cindyortega416 on 18/06/19.
//

#ifndef ARQUITECTURA_COMPUTADORAS_L_AUTOFANTASTICO_H
#define ARQUITECTURA_COMPUTADORAS_L_AUTOFANTASTICO_H

#endif //ARQUITECTURA_COMPUTADORAS_L_AUTOFANTASTICO_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>
#include <termios.h>
#include <sys/ioctl.h>

unsigned char datosAuto[]= {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01,};



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

void autoFantastico() {
    for(int i = 0; i < 8; i++){
        output(datosAuto[i]);
        delay(DELAYMEDIO);
    }
    for(int i = 7; i != 0; i--){
        output(datosAuto[i]);
        delay(DELAYMEDIO);
    }
}

