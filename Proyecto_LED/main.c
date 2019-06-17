#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>
#include <termios.h>
#include <sys/ioctl.h>
#include "autoFantastico.h"
#include "autoFantasticoCod.h"
#include "carrera.h"
#include "choque.h"
#include "delay.h"
#include "login.h"
#include "menu.h"
#include "output.h"


static const int DELAYBAJO = 3;
static const int DELAYBAJO1 = 5;
static const int DELAYBAJO2 = 8;
static const int DELAYMEDIO = 10;
static const int DELAYMEDIO2 = 12;
static const int DELAYALTO = 15;
static const int DELAYALTO1 = 18;
static const int DELAYALTO2 = 20;


void menu();
int login();
void output(unsigned char);
void autoFantastico();
void delay(int);
void autoFantasticoCod();
void menu();
void carrera();
void choque();
void tenis();
void tenis2();
bool kbhit();


unsigned char datosAuto[]= {
        0x80,
        0x40,
        0x20,
        0x10,
        0x08,
        0x04,
        0x02,
        0x01,
};

unsigned char datosChoque[] = {
        0x81,
        0x42,
        0x24,
        0x18,
        0x18,
        0x24,
        0x42,
        0x81,
};

unsigned char datosCarrera[] = {
        0x80,
        0x80,
        0x40,
        0x40,
        0x20,
        0x20,
        0x10,
        0x10,
        0x88,
        0x48,
        0x24,
        0x14,
        0x0A,
        0x06,
        0x03,
        0x01,
};

unsigned char datosTenis[] ={
        0x81,
        0xC1,
        0xA1,
        0x91,
        0x89,
        0x85,
        0x83,
        0x83,
        0x85,
        0x89,
        0x91,
        0xA1,
        0xC1,
};





char password[6];

int main() {

    strcpy(password, "54321");


    if(login() == 0){
        printf("\nBIENVENIDO AL SISTEMA\n");

        menu();
    }else{
        return 0;
    }
    return 0;
}


bool kbhit(){
    int byteswaiting;
    ioctl(0, FIONREAD, &byteswaiting);
    return byteswaiting > 0;
}

