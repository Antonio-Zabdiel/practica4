#include<stdio.h>

int main(){
    const int cent = -1;
    int valor = 0, suma = 0, x = 0;
    float promedio = 0;

    while (valor != cent)
    {
        printf("ingrese un valor para sumar:");
        scanf("%d", &valor);

        suma = suma + valor;  
        
        x++;
    }
    
    suma+=1;
    printf("\nla suma de los valores es: %d", suma);

    x-=1;
    printf("\nla cantidad de valores que ingresaste es: %d", x);

    promedio = suma/x;
    printf("\nel promedio de los numeros es: %f", promedio);

    return 0;
}
