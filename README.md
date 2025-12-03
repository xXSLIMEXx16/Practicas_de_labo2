# PYTHON
### Introducción a python
Python es un lenguaje de programación de alto nivel, interpretado y de código abierto, conocido por su sintaxis clara y legible, lo que lo hace fácil de aprender y usar.

> **Operadores Aritmeticos**

| Operador | Descripción | Ejemplo |
   :--- | :--- | :---|
|+  | Suma Aritmetica                | Ej: 1+10 = 11  |
|-  | Resta entre operandos          | Ej: 10-1 = 9   |
|* | Multiplicacion Entre operandos  | Ej: 10*2 = 20  |
|/  | Division entre operandos       | Ej: 10/2 = 5       |
|%  | Resto de la division           | Ej: 16%3 = 1       |
|** | Potencia de operandos          | Ej: 12**2 = 1728    |
|// | Division con resultado números enteros   | Ej: 18//5 = 3       |


> **Operadores Relacionales**

| Operador | Descripción | Uso  | 
| :--- | :--- | :--- | 
|<  | Devuelve True si el operador de la izquierda es menos que el operador de la derecha| 3 < 12  Devuelve True
|>  | Devuelve True si el operador de la izquierda es menor al operador de la derecha | 12 > 3 Devuelve True
| == | Devulve True si ambos operadores son iguales | 3 == 6 Devuelve False
| <= | Duvuelve True si el operador de la ezquierda es menos o igual al operador de la derecha | 3 <= 3 Duvuelve True
| >= |  Devuelve True si el operando de la izquierda es mayor o igual a el de la derecha | 5 >= 25 Devuelve False
| != | Devuelve True si ambos operandos no son iguales | 12 != 3 Devulve True

> Operadores Logicos

| Operador  | Descripcion  | uso
| :--- |:--- |:---:
| and  | Devuelve True si ambos operadores son True | a and b
| or | Devuelve True si algun operando es True | a or b
| not | Devuelve True si algunos de la operandos es Flase | not a 

> Print( ) y Input( )
*   `Función Print( )` se utliza para mostrar datos o mensajes en la consola
```
 Print('Hola mundo') #Sale un Hola mundo por consola
```
*   `Función Input( )`P}Permite al usuario indroduucir texto desde el teclado
```
 Nombre = input( )
```

## Variables 
Las variables en Py son como contenedores donde puedes almacenar datos.

Ejemplo:

```
Nombre = 'Juan'
Edad = 25
Altura = 1.75
Fecha_de_nacimiento = '25/05/2000' 
```
Una cosa interesante sobre Py es que no necesitas especificar el tipo de datos que contendra la variable



> Algunas funciones utiles para las variables

| Funciones | Descripción |
| :--- | :---:
|.lower( )  | Convierte todos los caracteres en minúsculas
|.upper( )  | Convierte todos los caracteres en Mayúsculas
|.len( )   | Devuelve el largo de la cadena
|.strip( ) | Elimina los espacios en blanco al inicio y al final de la cadena

## Listas

Las listas son una de las estructuras de datos más fundamentales y flexibles de Py, y se puede considerar el equivalente a los arrays que se conoce de C, pero coon capacidades muy superiores.

Sintaxis: Se define utilizando corchetes [ ] y sus elementos separados por comas

Ejemplo:  Numeros = [1, 2, 3, 4, 5]

> Algunas funciones utiles para las Listas

|Funciones  | Descripción 
| :--- |:---:
| .append( ) | Añade un elemeno al final de la lista
|.remove( )  | Elimina un elemento de la lista
|.len( )     | Para encontrar el largo de la cadena 
| .extend( ) | Para extender los elementos de una lista a otra
|.sort( )    | Ordena una lista
| .count( )  | cuenta cuantas veces aparece un elemento 
|.reverse( ) | Revierte el orden de una lista
|.clear( )   | Borra todos los elemtos de una lista
|.index( )   | Obtiene el indice de un elemento

## Condicionales 

Los condicionales en Py son herramientas que te permiten controlar el flujo de ejecución de tu programa

Ejemplo: 


```
Edad= 20
if edad >= 18:
  print('eres mayor de edad') 
else:
  print('eres menor de edad')
```

## Ciclo while 

El ciclo While es una estructura de control que permite ejecutar un bloque de codigo repetidamente mientras una condicion sea verdadera.


```
Ejemplo

while (condicíon):
  #Bloque de codigo
```
## Clico For
El ciclo for esta diseñado para ejecutar un bloque de código una vez por cada elemento de un objeto iterable.

```
Ejemplo

For "Variable" in "Secuencia":
  #Bloque de codigo
```

## Range

La función range en Py se utliza para generar una secuencia de números. es comunmente utilizada en ciclos For para iterar un número especifico de veces

Ejemplo: Range( Inicio, Fin, Paso)

## Conjuntos 
Un Conjutno es una colección de elementos que se caracteriza por dos propiedades principales.

`Elementos únicos:` un conjunto no puede contener elementos duplicados

`No ordenados:` Los elementos no tienen un indice, y el orden en que se almacena no se mantiene. 

Sintaxis: Se definen utilizando llaves { } o usando la función set( )

> Operaciones Clave ( MATEMÁTICAS )

|funciones | Descripción 
|:--- |:---:
|.union( ) | Union de los conjuntos
|.intersection( ) | Intersección de los conjuntos
|.difference( ) | Diferencia de los conjuntos
|.symmetric_difference( ) | Diferencia simetrica de los conjuntos
|.issubset( ) | Subconjunto de un conjunto --> Devuelve un booleano
|.issuperset( ) |Superconjunto de un conjunto --> Devuelve un booleano
|.add( ) | Añade un elemento al conjunto
|.remove( ) | Elimina un elemento del conjunto

## Diccionarios
Un diccionario es una colección desordenada, modificable e indexeada de ekementos. en lugar de usar indices númericos como las listas, los diccionarios usan claves únicas para acceder a sus valores.

```
Ejemplo

mi_diccionario = { "Clave = valor1"
                   "clave2 = valor2"
                   "clave3 = valor3"
                 }
```

> Operaciones clave

| Funciones   | Descripción 
| :--- | :---:
|.pop( ) | Elimina elementos del diccionario
|.keys( ) | Devuelve una vista de tpdas las claves en el diccionario
|.value( ) | Devuelve una vista de todos los valores en el diccionario
|.items( ) | Devuelve una vista de todos los pares de Clave-Valor en el diccionario 
## Tuplas

Una tupla es una colección ordenada de elementos que pueden contener (Números, cadenas, listas, etc.). la principal caracteristica de las tuplas es que son inmutables, es decir, una vez creadas no se pueden modificar (Añadir, eliminar o cambiar sus valores).

`Sintaxis: `Mi_tupla = (1,2,3)
Las tuplas se definen con parentesis ( ) y los elementos separados por comas.
Para una tupla de un elemento, debes añadir una coma despues del elemento.
Ejemplo:  Tupla_un_elemento( "Manzana", )

> Metodos de tuplas

|Metodos | Descripción |
|:--- |:---:
|.count( ) | Devuelve el numero de veces que "x" aparece en la tupla
|.index( ) | Devuelve el índice de la primera aparicion de "x" en la tupla

## Funciones



