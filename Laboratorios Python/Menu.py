    ''' 
    Author: Alexis I Santiago A
    Date: 10/03/2023
    Description: Programa Python
    '''

import os
def printMenu():

    os.system('cls')
    print("Bienvenido al menú seleccione una opciónn \n")
    print("\1.-Suma\n 2.-Resta\n 3.-Multiplicacion\n 4.-Division")
    option = input()
    if(option):
        return int (option)
    else:
        return 0


def main():
    flag = 0
    inutil =''
    while(flag!=4):
        flag = printMenu()
        
#Cree una funcion "suma" que imprima la suma de dos valores solo si son pares, de lo conrario imprimirá que no son pares
        
        if (flag==1):
             print("\n1.-Suma")
            n1=int(input("Intro número uno: "))
            n2=int(input("Intro numero dos: "))
            suma=n1+n2
             print("La suma es: ",suma)
            if suma % 2 == 0:
             print(suma, "El número es par")
            else:
             print(suma,"El número es impar")
                 elif (flag==2):
          
#Cree una funcion "resta" que imprima la resta de dos valores solo si son múltiplos de 5, de lo conrario imprimirá que no son impares

             print("\n2.-Resta")
            nu1=int(input("Intro número uno: "))
            nu2=int(input("Intro numero dos: "))
            resta=num1-num2
            if resta%5==0:
             print(resta,"El número es multiplo de 5")
            else:
             print(resta,"El numero es impar")
                 elif (flag==3):
          
#Cree una funcion "division" que imprima la división de dos valores solo si el resultado no tiene reciduo, de lo conrario imprimirá que no es una división exacta

              print("\n3.-Division")
            num1=int(input("Intro número uno: "))
            num2=int(input("Intro numero dos: "))
            division=enum1-(enum1//enum2*enum2)
            if division == 0:
              print(division,"No tiene residuo")
            else:
              print(division,"Tiene residuo")
                  elif (flag==0):
          
 #Cree una funcion "multiplicacion" que imprima la multiplicación de dos valores solo si son mayores a 10, de lo conrario imprimirá que no son mayores a 10
          
             print("\n4.-Multiplicacion")
            nume1=int(input("Intro número uno: "))
            nume2=int(input("Intro numero dos: "))
            mult=numero1+numero2
            if mult>=10:
             print(mult,"Es mayor a 10")
            else:
             print(mult,"es menor a 10")
                elif (flag==4):
          

            print("\nNo valido")
        else:
            print("\nNo valido")

            print("\nOprima enter tecla cualquiera para continuar ")
        input(inutil)
            print("excelente")

if __name__ == "__main__":
    main()

 ''' 
    #---------------------INSTRUCCIONES-----------------------
Resuelva: 
1. ¿Qué es lo que hace el código en un comentario antes de modificarlo?
Imprime un Menú

2. ¿Cuál es la sintaxis de un while?
Crea un bucle en el cual no sabe cuándo parar, funciona al fallo.

3. ¿Existe switch en python?
No existe, sin embargo, hay diferentes formas llevarlo a cabo, como la que estamos haciendo...

4. ¿Qué es un elif?
Nos ayuda a poder enlazar diferentes If else sin aumentar las tabulaciones

5. ¿Qué función de se ejecuta al correr el script?
Un menú que te deja selecciona la opción a realizar con operaciones aritméticas como lo son la suma, resta, multiplicación y división, con un botón para que puedas repetir la operación
 ''' 
