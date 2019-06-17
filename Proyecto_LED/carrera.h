//
// Created by cindyortega416 on 17/06/19.
//
#include "main.c"
#include "delay.h"
#include "menu.h"
#include "login.h"
#include "output.h"
#include "autoFantasticoCod.h"
#include "autoFantastico.h"

#ifndef PROYECTO_LED_CARRERA_H
#define PROYECTO_LED_CARRERA_H

#endif //PROYECTO_LED_CARRERA_H


void carrera(){
    for(int i = 0; i < 16; i++){
        output(datosCarrera[i]);
        delay(DELAYMEDIO);
    }
}