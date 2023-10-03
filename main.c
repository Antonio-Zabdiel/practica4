#include <stdio.h>
#include<math.h>

int main()
{
    float num = 0, result = 0;
    
    printf("ingresa un dato:\n");
    scanf("%f", &num);

    if(num > 0){
        result = num * log(num);
        printf("el resultado de f(x) = x*log(x) es: %f \n", result);
    } else {
        printf("Dato no valido");
    }

    result = log(num);

    return 0;
}
