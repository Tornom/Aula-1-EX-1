#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()

{
    int seg,min,hor;
    seg=min=hor=0;

    while(1){
    seg++;
    printf("\r");
    printf("%d:%d:%d",hor,min,seg);
            if (seg == 59){
                min++;
                seg=-1;
                if (min == 59){
                    hor++;
                    min=0;
                    seg=0;
                    if (hor == 23){
                        seg=min=hor=0;
                    }
                }

            }

    Sleep(300);


    }
    return 0;
}
