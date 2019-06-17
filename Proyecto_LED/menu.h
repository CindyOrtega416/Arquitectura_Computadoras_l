//
// Created by cindyortega416 on 17/06/19.
//
#include "main.c"
#include "login.h"
#ifndef PROYECTO_LED_MENU_H
#define PROYECTO_LED_MENU_H

#endif //PROYECTO_LED_MENU_H


void menu(){
    system("clear");
    int state = 0;
    printf("\n#####################||||||||||||BIENVENIDO A LA MATRIX||||||||||||#####################\n");

    do{
        char n;
        printf("\n1- Auto fantastico\n");
        printf("\n2- El choque\n");
        printf("\n3- Tenis\n");
        printf("\n4- Carrera\n");
        printf("\n0- Salir\n");

        printf("\n/##################################################################################\n");

        n = getchar();

        switch(n){
            case'0':
                state = 1;
                break;
            case '1':
                printf("\nPresione enter para salir\n");
                do{
                    autoFantasticoAlg();
                }while (!kbhit());
                break;
            case '2':
                do{
                    choque();
                }while(!kbhit());
                break;
            case '3':
                do{
                    tenis();
                }while(!kbhit());
                break;
            case '4':
                do{
                    carrera();
                }while(!kbhit());
                break;
            default:
                break;
        }
    }while(!state);
}



