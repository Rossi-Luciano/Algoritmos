#include<stdio.h>

int main(){
    int h, m, s, s_atual, mn_seg;

    printf("Digite hora atual: ");
    scanf("%d", &h);
    printf("Digite minuto atual: ");
    scanf("%d", &m);
    printf("Digite segundo atual: ");
    scanf("%d", &s);

    s_atual = s + (m * 60) + (h * 3600);
    mn_seg = 24 * 3600;

    printf("Se passaram %d segundos desde a 0h\n", s_atual);
    printf("Faltam %d segundos para a meia noite\n", (mn_seg - s_atual));

    return 0;
}
