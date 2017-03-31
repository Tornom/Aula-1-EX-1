#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>


COORD coord ={0 , 0};

void gotoxy (int x, int y)
{
coord.X=x;
coord.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main()
{
     int hor,min,tep,HF,MF,SF,SM;
    gotoxy(0,0);
    printf("-----RELOGIO DIGITAL------\n\n");
    printf("DIGITE UM HORARIO PARA DESPERTAR \t\n\n");
    scanf("%d %d %d",&HF,&MF,&SF);
    hor=min=tep=0;
    while(1){
            gotoxy(0,5);

            tep++;
            if(tep == 60){
                min++;
                tep=0;
            }
            if(min == 60){
                hor++;
                min=0;
            }
            if(hor == 24){
                hor=min=tep=0;
            }
        printf("\r\t (%d h:%d m:%d s)",hor,min,tep);

        SM=SF+5;
        if ( hor==HF && min==MF && (SM>tep && tep>=SF)){
        printf("\nACORDA!!!!");

        }
        else{
            gotoxy(0,6);
            printf("            ");
        }


        sleep(1);
    }


    return 0;
}
