# Estructuras de datos I - Segundo Parcial


Los siguientes ejercicios deberán ser entregados como derecho a examen 
del segundo parcial de Estructuras de Datos I.

### Instrucciones generales

1. Hacer fork de este repositorio
2. Clonar el proyecto desde sus cuentas
3. Por cada ejercicio (listados abajo) se debe subir en el archivo con su nombre. 
4. Si hay dudas, preguntar en clase o por mensaje.

## Semana 1

### Arreglos bidimensionales 

**Ejercicio 1.** Escriba un programa en C que dada una matriz de flotantes 
de M renglones x N columnas, calcule los promedios de los valores de cada columna de la matriz. 
* Capture los datos por renglón.
* Imprima los promedios de cada columna.  Ejemplo: *Promedio Columna 1: 16.7*

**Ejercicio 2.** Escribir un programa en C que genere una matriz de N x N y la llene con 0 
excepto la diagonal principal que deberá tener 1. 
Ejemplo:  

* Suponiendo que N sea 3

    1  | 0 | 0
    | :---: | ---: | :---:
    0  | 1 | 0
    0  | 0 | 1

* Suponiendo que N sea 5

    1  | 0 | 0 | 0 | 0
    | :---: | ---: | :---: | :---: | :---:
    0  | 1 | 0 | 0 | 0
    0  | 0 | 1 | 0 | 0
    0  | 0 | 0 | 1 | 0
    0  | 0 | 0 | 0 | 1
  
**Ejercicio 3.** Escribir un programa que lea una arreglo bidimensional de M x N, e imprima su transpuesta.

Ejemplo:

* Suponiendo que M sea 3 y N sea 2

    *Matriz Original*

    1  | 2 
    | :---: | :---: 
    3 | 4 
    5 | 6 

    *Matriz Transpuesta*

    1 | 3 | 5
    | :---: | :---: | :---:
    2 | 4 | 6

* Suponiendo que M sea 5 y N sea 4

    *Matriz Original*

    1  | 2 
    | :---: | :---: 
    3 | 4 
    5 | 6 

    *Matriz Transpuesta*

    1 | 3 | 5
    | :---: | :---: | :---:
    2 | 4 | 6

**Ejercicio 4.** Escribir un programa que lea una arreglo bidimensional de M x N en una función y en otra función encuentre el elemento 
mayor de la matriz indicando en que posición (renglon - columna) lo encontró.

Ejemplo:

* Suponiendo que M sea 4 y N sea 5

    10  | 25 | 8 | 16 | 7
    | :---: | ---: | :---: | :---: | :---:
    1  | 15 | 33 | 8 | 13
    45  | 87 | 18 | 0 | 4
    13  | 7 | 92 | 11 | 5

El programa deberá imprimir:

    El número mayor es 92 y se encuentra en la posición [3][2]


**Ejercicio 5.** Escribir un programa que lea una matriz de N x N, e indique si la matriz es simétrica o no.
Una matriz es simétrica si matriz[i][j] es igual a matriz[j][i], para todo i, j < N.

Ejemplo:

* Suponiendo que N sea 5

    10  | 25 | 8 | 16 | 7
    | :---: | ---: | :---: | :---: | :---:
    25  | 15 | 33 | 8 | 13
    8  | 33 | 18 | 0 | 4
    16  | 8 | 0 | 11 | 5
    7  | 13 | 4 | 5 | 5

En este caso el programa deberá imprimir:

    La matriz es simétrica

* Suponiendo que N sea 5

    10  | 25 | 8 | 16 | 7
    | :---: | ---: | :---: | :---: | :---:
    1  | 15 | 33 | 8 | 13
    45  | 87 | 18 | 0 | 4
    13  | 7 | 92 | 11 | 5
    1  | 8 | 55 | 8 | 13

En este caso el programa deberá imprimir

    La matriz no es simétrica