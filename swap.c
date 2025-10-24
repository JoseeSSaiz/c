#include <stdio.h>
void main(){
    int a, b, aux;

    printf("Intro a: ");
    scanf("%d", &a);
    printf("Intro b:");
    scanf("%d", &b);
    aux=a;
    a=b;
    b=aux;
    printf("Intercanviat a i b es: %d | %d\n", a, b);
return;
}
