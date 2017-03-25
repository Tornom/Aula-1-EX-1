#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    printf("-----RELOGIO------\n\n");
    int hor,min,tep;
    hor=min=tep=0;
    while(1){
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
        printf("\r\t (%d:%d:%d)",hor,min,tep);
        sleep(1);
    }


    return 0;
}
