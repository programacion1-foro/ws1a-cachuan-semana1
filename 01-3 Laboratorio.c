/*Instruction set*/
/*
Las operaciones básicas de un sistema de computadoras.
*/

/*Program*/
/*
Son un conjunto de instrucciones necesarias para resolver un problema
*/

/*Algoritmo*/
/*
El método o enfoque usado para resolver el problema se le llama algoritmo.
Por ejemplo si quieres desarrollar un programa que pruebe si un número es par o impar, el conjunto de sentencias será el programa y el método que es usado para verficar si es par o impar es el algoritmo.
*/

/*Caso*/
/*
El algoritmo para resolver el problema puede ser expresado:
Primero, divide el numero por dos. 
Si el resto de dividir es zero, el número es par, 
caso contrario es impar.

Con esto se puede empezar a construir el programa en un sistema o computadora 
en particular.

*/

/*Lenguages de alto nivel
- Primero solo se podia programar en números binarios que corresponden directamente a instrucciones de máquina en específico y localización de la memoria de computadora

- Lo siguiente fue el uso de lenguajes de ensamble o assembly languages. Un programa especial assembler traducía el programa a un conunto de instrucciones de máquina.

*/

/*
Compilador
Analiza el programa desarrollado en un lenguaje en particular y lo traduce en una forma que sea compatible para ejecutarse en tu propio computador

Pasos relacionados para trabajar en C
https://learning.oreilly.com/library/view/programming-in-c/9780132781206/graphics/01fig01.jpg

*/

/*
Los programas en c pueden tener cualquier nombre y solo se necesita que tenga la extensión .c
*/

/*
Conociendo C
El programa que es escrito dentro del archivo .c es conocido como código fuente, porque representa la forma original del programa expresado en lenguaje C. Después del programa es escrito en un archivo puedes proceder a compilarlo.

Para compilar el programa en UNIX el comando es cc.  Si se usa GNU C compiler, el comando a usar es gcc

gcc demo.c

*/

/* Proceso de compilación

1. El compilador examina cada programa contenido en el código fuente y revisa que concuerde con la sintaxis del lenguaje. Si es descubierto algún error es reportado al usuario y el proceso termina.

- Algunos errore pueden deberse por parentisis
- Otros por , o ;

2. De no haber errores el programa es convertido en un equivalente en lenguaje de programación assembly.

3. El siguiente paso es traducir el paso 2 en instrucciones de máquina. Este proceso puede o no ejecutar un programa separado llamado assembler. Asembler lo convierte cada sentencia en un formato binario llamado object code, el cual es escrito en otro archivo en el sistema. El nombre del archivo tendrá la extensión .o

4. Después que el programa está en object code, está listo para ser "enlazado" este proceso es automático. El propósito es llevar al programa en la forma final para ejecutarse en el computador. Si el programa usó otros programas que fueron previamente procesados por el compilador, luego durante esta fase los programas son "enlazados". Programas que son usados por otros programas del sistema o "librería" son buscado y enlazados juntos durante la fase.

El proceso entero de compilación y enlace se conoce como "building"


5. El archivo enlazado final tendra la extensión .exe en Windows y .out en UNIX
*/

/*
Ejecución

Cuando ejecutamos el programa construido este carga las instrucciones en memoria del computador iniciando su ejecución.

Las sentencias son ejecutadas una después de otra secuencialmente. Si se necesita un input, el programa temporalmente suspende su ejecución para que puedan ingresar el valor.

O el programa puede esperar por un evento como un click.

Los resultados se les conoce como "output"

*/

/*
Resultados y debugging

Si el resultado no va bien es necesario revisar la lógica del programa esto es conocido como debugging phase en esta fasae buscamos detectar errores o bugs. De haber correcciones es necesario pasar por todo el proceso de compilación.

*/

/*
IDEs

El proceso de desarrollo era muy tedioso, manual para todo el proceso. Por esto se pensó en los entornos integrados de desarrollo que contienen o permiten editar, compilar, correr y debuggear los programas. Normalmente podemos encontrar IDEs como XCode, Visual Studio, Code Blocks, etc

*/

/*
Intérpretes

Éxiste otro método para analizar y ejecutar el programa desarrollado en un lenguaje de alto nivel. Con este ya no se compila si no se interpreta las sentencias. El interprete analiza y ejecuta la sentencia al mismo tiempo. Esto permite hacer el debugging más fácil. Por otra parte lenguages de interpretación son más lentos que su contraparte compilada porque las sentencias no son convertidas en lenguaje de bajo nivel.

*/

#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  return 0;
}