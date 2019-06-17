#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>
#include <termios.h>
#include <sys/ioctl.h>


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
bool kbhit();


unsigned char datosAuto[]= {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01,};

unsigned char datosChoque[] = {0x81, 0x42, 0x24, 0x18, 0x18, 0x24, 0x42, 0x81};

unsigned char datosCarrera[] = {0x80, 0x80, 0x40, 0x40, 0x20, 0x20, 0x10, 0x10, 0x88, 0x48, 0x24, 0x14, 0x0A, 0x06, 0x03, 0x01,};

unsigned char datosTenis[] ={0x81, 0xC1, 0xA1, 0x91, 0x89, 0x85, 0x83, 0x83, 0x85, 0x89, 0x91, 0xA1, 0xC1,};





char password[6];

int main() {

    strcpy(password, "54321");


    if(login() == 0){
        printf("\nBIENVENIDO AL SISTEMA\n");

        menu();
    }else{
        printf("\nCONTRASEÑA INCORRECTA, NOS VIMOS\n");
        return 0;
    }
    return 0;
}

void menu(){
    system("clear");
    int estado = 0;
    printf("\n#####################||||||||||||BIENVENIDO A LA MATRIX||||||||||||#####################\n");

    do{
        char n;
        printf("\n1- El choque\n");
        printf("\n2- Auto Fantastico\n");
        printf("\n3- Carrera\n");
        printf("\n4- Tenis\n");
        printf("\n0- Salir\n");

        printf("\n##################################################################################\n");

        n = getchar();

        switch(n){
            case'0':
                estado = 1;
                break;
            case '1':
                printf("\nPresione enter para salir\n");
                do{
                    choque();
                }while (!kbhit());
                break;
            case '2':
                do{
                    autoFantasticoCod();
                }while(!kbhit());
                break;
            case '3':
                do{
                    carrera();
                }while(!kbhit());
                break;
            case '4':
                do{
                    tenis();
                }while(!kbhit());
                break;
            default:
                break;
        }
    }while(!estado);
}



bool kbhit(){
    int byteswaiting;
    ioctl(0, FIONREAD, &byteswaiting);
    return byteswaiting > 0;
}
int login(){
    initscr();
    noecho();
    int error = 0;
    char c;
    char ingreso[5];
    do {
        printw("Ingrese la contraseña:\n");

        for (int i = 0; i < 5; i++) {
            c = getch();
            ingreso[i] = c;
            printw("*");
        }
        if(strcmp(password, ingreso) != 0){
            error++;
            printw("\n Contraseña Incorrecta, intente de nuevo \n");
        }
    }while(error < 3 && strcmp(password, ingreso) != 0);
    echo();
    endwin();
    return strcmp(password, ingreso);

}


void delay(int a) {
    for (int j = 0; j < a; j++) {
        unsigned int i = 0x4fffff; 
        while (i)i--;
    }
}

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


void carrera(){
    for(int i = 0; i < 16; i++){
        output(datosCarrera[i]);
        delay(DELAYMEDIO);
    }
}

void choque(){
    for(int i = 0; i < 8; i++){
        output(datosChoque[i]);
        delay(DELAYMEDIO);
    }
}


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


