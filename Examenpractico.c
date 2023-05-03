#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    
    double num, dato, i, elevado, resultado1, resultadof;//variables para el ejercicio//
    printf("Por favor ingrese un numero entero positivo: ");
    scanf("%d", &num);
    for(i=0; i<=num; i++){
        double elevado = pow(-1, num);//potencia//
        resultado1= 2 * num + 1;//dividendo//
        resultadof= elevado/resultado1;//resultado final del ejercicio//
    }
    printf("El resultado es %lf\n", resultadof);
    return 0;
}