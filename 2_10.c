#include<stdio.h>
void main(){
    for(int i=1;i<=2;i++){
        for(int j=1;j<=i-1;j++){
            printf(" ");
        }
        for(int j=1;j<=7-2*i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}