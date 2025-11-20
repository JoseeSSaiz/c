#include <stdio.h>
void main(){
    int a, b, c, discriminant;
    printf("Dona'm a: ");
    scanf("%d", &a);
    printf("Dona'm b: ");
    scanf("%d", &b);
    printf("Dona'm c: ");
    scanf("%d", &c);
    if(a==0) printf("No és de 2n grau!!");
    else{
        discriminant=(b*b)-(4*a*c);
        if(discriminant>0) printf("2 sol\b");
        if(discriminant==0) printf("1 sol\b");
        if(discriminant<0) printf("No sol reals\b");

    }
    return;
}
