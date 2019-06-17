//
// Created by cindyortega416 on 17/06/19.
//
#include "main.c"
#include "delay.h"
#include "menu.h"
#include "login.h"
#include "output.h"
#include "autoFantasticoCod.h"
#ifndef PROYECTO_LED_AUTOFANTASTICO_H
#define PROYECTO_LED_AUTOFANTASTICO_H

#endif //PROYECTO_LED_AUTOFANTASTICO_H


void autoFantastico() {
    for(int i = 0; i < 8; i++){
        output(datosAuto[i]);
        delayc(DELAYMEDIO);
    }
    for(int i = 7; i != 0; i--){
        output(datosAuto[i]);
        delayc(DELAYMEDIO);
    }
}
