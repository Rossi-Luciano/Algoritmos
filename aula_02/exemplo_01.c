#include<stdio.h>

int soma(int, int);

int main(){
    printf("A soma é %d\n", soma(5, 8));
    printf("A soma é %d\n", soma(1, 2));
    printf("A soma é %d\n", soma(6, 9));
    return 0;
}

int soma(int num1, int num2){
    return num1 + num2;
}