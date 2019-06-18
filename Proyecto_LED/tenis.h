//
// Created by cindyortega416 on 18/06/19.
//

#ifndef ARQUITECTURA_COMPUTADORAS_L_TENIS_H
#define ARQUITECTURA_COMPUTADORAS_L_TENIS_H

#endif //ARQUITECTURA_COMPUTADORAS_L_TENIS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>
#include <termios.h>
#include <sys/ioctl.h>

unsigned char datosTenis[] ={0x81, 0xC1, 0xA1, 0x91, 0x89, 0x85, 0x83, 0x83, 0x85, 0x89, 0x91, 0xA1, 0xC1,};


void tenis(){
    for(int i = 0; i < 13; i++){
        output(datosTenis[i]);
        delay(DELAYMEDIO);
    }

    int i = 64;
    do {
        output(i + 129);
        delay(DELAYMEDIO);
        i/=2;
    }while(i>2);
    do{
        output(i+129);
        delay(DELAYMEDIO);
        i*=2;
    }while (i<65);
}

