//
// Created by cindyortega416 on 17/06/19.
//

#include "main.c"
#include "menu.h"

#ifndef PROYECTO_LED_LOGIN_H
#define PROYECTO_LED_LOGIN_H

#endif //PROYECTO_LED_LOGIN_H


int login(){
    initscr();
    noecho();
    int error = 0;
    char c;
    char ingreso[5];
    do {
        printw("Ingrese su password de 5 dígitos:\n");

        for (int i = 0; i < 5; i++) {
            c = getch();
            ingreso[i] = c;
            printw("*");
        }
        if(strcmp(password, ingreso) != 0){
            error++;
            printw("\n Contraseña Incorrecta \n");
        }
    }while(error < 3 && strcmp(password, ingreso) != 0);
    echo();
    endwin();
    return strcmp(password, ingreso);

}
