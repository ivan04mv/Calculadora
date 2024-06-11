#include <stdio.h>
#include <math.h>

// Declaración de funciones
// Aquí van las declaraciones de las funciones

int main() {

    float num1, num2;
    char operador;

    do
    {
        printf("\t\nCALCULADORA LOS BANDIDOS\t\n");
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el operador: ");
    scanf("%s", &operador);    
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

    switch (operador) {
        case '+':
            printf("El resultado es: %f", num1 + num2);
            break;
        case '-':
            printf("El resultado es: %f", num1 - num2);
            break;
        case '*':
            printf("El resultado es: %f", num1 * num2);
            break;
        case '/':
            printf("El resultado es: %f", num1 / num2);
            break;
        case '^':
            printf("El resultado es: %f", pow(num1, num2));
            break;
        case '%':
            printf("El resultado es: %f", fmod(num1, num2));
            break;
        default:
            printf("Operador inválido");
            break;
    }
    } while (operador !=4);
    return 0;
}

// Definición de funciones
// Aquí van las definiciones de las funciones de la calculadora