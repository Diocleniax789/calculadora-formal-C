#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

void presentacion();
void gotoxy(int,int);

int main(){
    presentacion();




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

