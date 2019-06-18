//
// Created by cindyortega416 on 18/06/19.
//

#ifndef ARQUITECTURA_COMPUTADORAS_L_CARRERA_H
#define ARQUITECTURA_COMPUTADORAS_L_CARRERA_H

#endif //ARQUITECTURA_COMPUTADORAS_L_CARRERA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>
#include <termios.h>
#include <sys/ioctl.h>

unsigned char datosCarrera[] = {0x80, 0x80, 0x40, 0x40, 0x20, 0x20, 0x10, 0x10, 0x88, 0x48, 0x24, 0x14, 0x0A, 0x06, 0x03, 0x01,};



void carrera(){
    for(int i = 0; i < 16; i++){
        output(datosCarrera[i]);
        delay(DELAYMEDIO);
    }
}
