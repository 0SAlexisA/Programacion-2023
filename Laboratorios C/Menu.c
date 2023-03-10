/*
 Autor: <AS>
 Fecha: <22/02/23>
 Descripción: App de Citas
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int printMenu(){

    int option;
    system("clear");
    fflush( stdin );
    printf("Bienvenido al menu seleccione una opcion \n");
    printf("\t1)Suma\n 2)Resta\n 3)Multiplicacion\n 4)Division\n");
    scanf("%d",&option);
    if(option)
        return option;
    else
        return 0;
}

int num1,num2,sumar;
int n1,n2,restar;
float numero1,numero2,dividir;
int mult, enum1,enum2;

int main(){
    char inutil;
    int flag = 0;
    while(flag!=4){
        flag = printMenu();
        switch (flag){
            
//Cree una funcion "suma" que imprima la suma de dos valores solo si son pares, de lo conrario imprimirá que no son pares
            
            case 1:
                printf("\n1 Suma");

                printf( "\n   Introduzca primer numero: " );
                scanf( "%d", &num1 );
                printf( "\n   Introduzca segundo numero: " );
                scanf( "%d", &num2 );
                sumar = num1 + num2;
                printf( "\n   La suma es: %d", sumar);
                if (sumar % 2 == 0) {
                printf("Es par");
                } else { 
                printf("Es impar"); }
                break;
            
//Cree una funcion "resta" que imprima la resta de dos valores solo si son múltiplos de 5, de lo conrario imprimirá que no son impares
            
            case 2:
                printf("\n2 Resta");
                
                    printf( "\n   Introduzca primer numero: " );
                    scanf( "%d", &n1 );
                    printf( "\n   Introduzca segundo numero: " );
                    scanf( "%d", &n2 );
                    restar = n1 - n2;
                    printf( "\n   La Resta es: %d", restar);
                    if (restar %5==0) {
                    printf("Es multiplo de 5");
                    } else { 
                    printf("Es impar"); }
                    break;
            
//Cree una funcion "division" que imprima la división de dos valores solo si el resultado no tiene reciduo, de lo conrario imprimirá que no es una división exacta
            
            case 3:
                printf("\n4 Division");
                
                printf( "\n   Introduzca primer numero: " );
                scanf( "%f", &numero1 );
                printf( "\n   Introduzca segundo numero: " );
                scanf( "%f", &numero2 );
                dividir = numero1 / numero2;
                printf( "\n   La Division es: %f", dividir);
                break;
            
//Cree una funcion "multiplicacion" que imprima la multiplicación de dos valores solo si son mayores a 10, de lo conrario imprimirá que no son mayores a 10
            
            case 4:
                printf("\n3 Multiplicacion");
                
                    printf( "\n   Introduzca primer numero: " );
                    scanf( "%d", &enum1);
                    printf( "\n   Introduzca segundo numero: " );
                    scanf( "%d", &enum2 );
                    mult = enum1 * enum2;
                    printf( "\n   La Multiplicacion es: %d", mult);
                    if (mult >= 10 ) {
                    printf("Mayor a 10");
                    } else { 
                    printf("Menor a 10"); }
                    break;
                
            
            case 0:
                printf("\nNo se puede papi");
                break;
            
            default:
                printf("\nNo se puede papi");
                break;
        }
        printf("\nOprima enter tecla cualquiera para continuar ");
        fflush( stdin );
        scanf("%c",&inutil);
    }
    printf("excelente");
}

/*---------------------INSTRUCCIONES-----------------------
Explique: 
1. ¿Qué es lo que hace el código en un comentario antes de modificarlo?
Crea un menú, con opciones 

2. ¿Para qué sirve la función fflush?
Para el programa hasta que se le asigne un valor (Un tipo de dato aceptado por el programa).

3. ¿Cuál es la sintaxis de un while?
int fflush(
   
);

4. ¿Cuál es la sintaxis de un switch?
switch (flag){

 case 1:
 
  break;
  
}

*/
