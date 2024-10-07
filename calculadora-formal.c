#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>

void presentacion();
void gotoxy(int,int);
void menu_principal();
void calculadora_comun();
int operatoria(char*);

int main(){
    presentacion();
    menu_principal();
    return 0;
}

void presentacion(){
gotoxy(50,4);
printf("FORMAL CALCULATOR 1.0");
printf("\n\n");
gotoxy(43, 10);
system("pause");
}

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void menu_principal(){
    int op;

    do{
        system("cls");
        gotoxy(50,0);
        printf("\n ||||||||||||||||||||||||||| \n");
        printf("\n || FORMAL CALCULATOR 1.0 || \n");
        printf("\n ||||||||||||||||||||||||||| \n");
        printf("\n");
        printf("\n * MENU PRINCIPAL *  \n");
        printf("\n ------------------- \n");
        printf("\n");
        printf("\n ================================== \n");
        printf("\n |1| -     Usar calculadora   - |1| \n");
        printf("\n |2| -          Salir         - |2| \n");
        printf("\n ================================== \n");
        printf("\n");
        do{
            fflush(stdin);
            printf("Seleccione opcion: ");
            scanf("%i",&op);
            if(op < 1 || op > 2){
                printf("\n");
                printf("\n /////////////////////////////////////// \n");
                printf("\n xx ERROR. INGRESE UNA OPCION VALIDA xx  \n");
                printf("\n //////////////////////////////////////  \n");
                printf("\n");
            }
        } while(op < 1 || op > 2);
        switch(op){
            case 1:
                system("cls");
                calculadora_comun();
            break;
        }

    } while(op != 2);
}

void calculadora_comun(){
    char cadena_operatoria[13],car,op;

    do{
        system("cls");
        printf("\n ============================================= \n");
        printf("\n ||///////////FORMAL CALCULATOR 1.0/////////|| \n");
        printf("\n ============================================= \n");
        printf("\n ||                                         || \n");
        printf("\n ============================================= \n");
        printf("\n ||-----------------------------------------|| \n");
        printf("\n ||       7   |       8       |       9     || \n");
        printf("\n ||-----------------------------------------|| \n");
        printf("\n ||       4   |       5       |       6     || \n");
        printf("\n ||-----------------------------------------|| \n");
        printf("\n ||       1   |       2       |       3     || \n");
        printf("\n ||-----------------------------------------|| \n");
        printf("\n ||       0   |       +       |       -     || \n");
        printf("\n -------------------------------------------|| \n");
        printf("\n ||       /   |       *       |       =     || \n");
        printf("\n ============================================= \n");
        printf("\n ||/////////////////////////////////////////|| \n");
        printf("\n ============================================= \n");
        printf("\n");

        printf("\n + Escriba su operacion aqui abajo: \n");
        fgets(cadena_operatoria,sizeof(cadena_operatoria),stdin);
        cadena_operatoria[strcspn(cadena_operatoria,"\n")] = '\0';

       resultado = operatoria(cadena_operatoria);

        do{

            fflush(stdin);
            printf("\n Realizar otra operacion? Ingrese < s | n > : ");
            scanf("%c",&op);
            if(op != 's' && op != 'n'){
                printf("\n");
                printf("\n ///////////////////////// \n");
                printf("\n x ERROR. INGRESE s O n x  \n");
                printf("\n ////////////////////////  \n");
                printf("\n");
            }

        } while(op != 's' && op != 'n');

    } while(op != 'n');

}


int operatoria(char *cadena_operatoria){
    char cad_aux[13], char operadores[] = "+,-,*,/", *token;
    int acum,i;

    strcpy(cad_aux,cadena_operatoria);

    token = strtok(cad_aux,operadores);

    i = 0;
    acum = 0;
    while(operadores != NULL){
        if(acum == 0){
            acum = acum + atoi(token);
        } else {


        }
        token = strtok(NULL,operadores);
    }



}
