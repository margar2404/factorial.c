#include <stdio.h>

int factorial(int n){
    int i, fact;
    fact = 1;
    for(i=1;i<=n;i++) fact = fact * i;

    return fact;
}

int main(){
    int n;
    printf("Dona'm un número per a calcular el seu factorial: ");
    scanf("%d", &n);
    printf("El resultat és: %d", factorial (n));
    return 0;
}
