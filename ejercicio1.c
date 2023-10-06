#include <stdio.h>
int main()
{
    int numero,div,veces;
    numero=0;
    div=1;
    veces=0;
    printf("Ingrese un numero entero:");
    scanf("%d",&numero);
    while (div<=numero)
    {
        if (numero % div==0){
            veces=veces+1;
            
        }
        div=div+1;
    }
    if (veces==2)
    {
        printf("El numero es primo");
    }else{
        printf("El numero no es primo");
    }
    return 0;
}
