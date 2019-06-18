//
// Created by cindyortega416 on 18/06/19.
//

#ifndef ARQUITECTURA_COMPUTADORAS_L_CHOQUE_H
#define ARQUITECTURA_COMPUTADORAS_L_CHOQUE_H

#endif //ARQUITECTURA_COMPUTADORAS_L_CHOQUE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>
#include <termios.h>
#include <sys/ioctl.h>

unsigned char datosChoque[] = {0x81, 0x42, 0x24, 0x18, 0x18, 0x24, 0x42, 0x81};


void choque(){
    for(int i = 0; i < 8; i++){
        output(datosChoque[i]);
        delay(DELAYMEDIO);
    }
}


