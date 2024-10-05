#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

#define FILAS 5
#define COLUMNAS 3

void presentacion();
void gotoxy(int,int);
void menu_principal();
void calculadora_comun();
void calculadora_cientifica();
void rellenar_tabla(int, int*,int*);

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
        printf("\n |1| -    Calculadora comun   - |1| \n");
        printf("\n |2| - Calculadora cientifica - |2| \n");
        printf("\n |3| -          Salir         - |3| \n");
        printf("\n ================================== \n");
        printf("\n");
        do{
            fflush(stdin);
            printf("Seleccione opcion: ");
            scanf("%i",&op);
            if(op < 1 || op > 3){
                printf("\n xx ERROR. INGRESE UNA OPCION VALIDA xx \n");
            }
        } while(op < 1 || op > 3);
        switch(op){
            case 1:
                system("cls");
                calculadora_comun();
            break;

            case 2:
                system("cls");
               // calculadora_cientifica();
            break;
        }

    } while(op != 3);
}

void calculadora_comun(){
    int filas = FILAS, columnas = COLUMNAS;
    static char tabla_caracteres[filas][columnas];

    rellenar_tabla(tabla_caracteres,&filas,&columnas);

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




    } while();

}

void rellenar_tabla(char tabla_caracteres, int *fil,int *col){
    int i,j;

    for(i = 0; i < *fil; i++){
        for(j = 0; j < *col; j++){
            system("cls");
            printf("\n Ingrese los botones de forma ordenada \n");
            fflush(stdin);
            printf("\n + Ingrese valor del boton: ");
            scanf("%c",&tabla_caracteres[i][j]);
        }
    }

    printf("\n");
    printf("\n *** TODOS LOS BOTONES LISTOS *** \n");
}
