#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    
    double num, dato, i, elevado;
    printf("Por favor ingrese un numero entero positivo: ");
    scanf("%d", &num);
    for(i=0; i<=num; i++){
        double elevado = pow(-1, num);
        
    }
    printf("La potencia es %lf\n", elevado);
    return 0;
}