#include <stdio.h>

int main (){
    /*symbolic constant defined here,*/
    #define START  1 
    #define STOP  11
    #define STEP  1

    int x = 4;

    for (int i=START; i<STOP; i=i+STEP){
        printf("%d\n", x*i);
    }

    return 0;
}