#include<stdio.h>
#include<stdlib.h>
//Muñoz Norberto David Julian

float sumar(float n1, float n2);
float restar(float m1, float m2);
float multiplicar(float a1,float a2);
float division(float b1,float b2);

float suma(float n1, float n2){
    float resultado;
    resultado=n1+n2;
    return resultado;
}

float restar(float m1, float m2){
    float result;
    result= m1-m2;
    return result;
}
float multiplicar(float a1,float a2){
    float result;
    result= a1*a2;
    return result;
}

float division(float b1,float b2){
    float result;
    if (b2 == 0){
        printf("Error: división entre cero");
        exit(1);
    }
    else{
        result= b1/b2;
        return result;
    }
}

int main(){
    int opc;
    float num1,num2,result;
    printf("Bienvenido a la calculadora :)");
    printf("\nIngresa el primer numero: ");
    scanf("%f",&num1);
    printf("\nIngresa el segundo numero: ");
    scanf("%f",&num2);

    printf("\n1. Suma");
    printf("\n2. Resta");
    printf("\n3. Multiplicacion");
    printf("\n4. Division");
    printf("\n5. salir");
    printf("\nElige una opcion: ");
    scanf("%i",&opc);

    switch (opc){
    case 1:
        result = suma(num1,num2);
        break;
    case 2:
        result = restar(num1,num2);
        break;
    case 3:
        result = multiplicar(num1,num2);
        break;
    case 4:
       result = division(num1,num2);
       break;
    case 5:
        printf("Ayo (:");
        exit(1);
        break;
    default:
        printf("Esa opción no es valida pa");
        return 1;
    }

    printf(" El resultado de tu operación es: %.2f",result);
    return 0;
}
