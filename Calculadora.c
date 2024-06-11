#include <stdio.h>
#include <math.h>

//En base a la estructura presente, crear las funciones correspondientes para cada operación

float resta (float num1, float num2);

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
            printf("El resultado es: %.2f", num1 + num2);
            break;
        case '-':
            printf("El resultado es: %.2f",resta (num1, num2));
            break;
        case '*':
            printf("El resultado es: %f", num1 * num2);
            break;
        case '/':
            printf("El resultado es: %f", num1 / num2);
            break;
        default:
            printf("Operador inválido");
            break;
    }
    } while (operador !=4);
    return 0;
}

//DESARROLLADO POR OWELL 
float resta(float num1, float num2){
        return num1 - num2;
    }

// Definición de funciones
// Aquí van las definiciones de las funciones de la calculadora