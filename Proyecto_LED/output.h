//
// Created by cindyortega416 on 17/06/19.
//
#include "main.c"
#include "delay.h"
#include "menu.h"
#include "login.h"
#ifndef PROYECTO_LED_OUTPUT_H
#define PROYECTO_LED_OUTPUT_H

#endif //PROYECTO_LED_OUTPUT_H

void output(unsigned char b){
    for(int i = 8; i > 0; i--){
        if((b&1) == 1){
            printf("*");
        }else printf("_");
        b = b >> 1;
    }
    printf("\r");
    fflush(stdout);
}
