#include <stdio.h>
int fibonacci(int n)
{
    int aux;
    if(n==0) aux=0;
    else if(n==1) aux=1;
            else aux=fibonacci(n-1)+fibonacci(n-2);
    return aux;
}
    void main(){
        int n;
        printf("Fibonacci de: ");
        scanf("%d",&n);
        printf("%d\n",fibonacci(n-2));
        return;
}
