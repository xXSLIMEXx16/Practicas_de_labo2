# C/C++
## 📄 Índice

* [Introducción a C](#introducción-a-C)
* [Variables y tipos de datos](#Variables-y-tipos-de-datos)
* [Arrays](#Arrays)
* [Operadores Aritméticos](#Operadores-Aritméticos)
* [Operadores lógicos](#Operadores-lógicos)
* [Estructuras de control de flujo](#Estructuras-de-control-de-flujo)
* [Ciclos o Bucles](#Ciclos-o-Bucles)
* [Punteros](#Punteros)
* [Funciones](#Funciones)

# PYTHON

## 📄 Índice

* [Introducción a Python](#introducción-a-python)
* [Variables](#variables)
* [Listas](#listas)
* [Condicionales](#condicionales)
* [Ciclo while](#ciclo-while)
* [Ciclo For](#ciclo-for)
* [Range](#range)
* [Conjuntos](#conjuntos)
* [Diccionarios](#diccionarios)
* [Tuplas](#tuplas)
* [Funciones](#funciones)
* [Decoradores](#decoradores)
* [Clases y Objetos](#Clases-y-Objetos)
* [Pilares de la POO](#Pilares-de-la-POO)
* [NunPY Y Matplotlib](#NunPY-Y-Matplotlib)

---
## Introducción a C

C++ es un lenguaje de programación, es uno de los más utilizados en todo el mundo. 
Para programar en C++, se necesita un compilador y un editor.
El **compilador** traduce el código fuente a código máquina (Código Binario), y el **editor** es el programa que nos colorea la sintaxis del lenguaje para poder escribir el código  cómodamente,

Hay algunos programas que son compiladores y editores, se conocen como IDE (Entorno de desarrollo Integrado). por ejemplo.
- CodeBlocks
- Dev C++



> Hola Mundo

Primero, debemos crear un nuevo proyecto, y luego crear un archivo llamado **main.cpp**, o el nombre que se desee.
Luego de eso, debemos incluir las librerías, que son un conjunto de código que viene predefinido y que nos facilita el trabajo.

```cpp
#include <stdio.h>
int main(){
    printf("Hola Mundo \n");
    return 0;
}
```

```cpp
#include <iostream>
int main(){
    std::cout << "Hola Mundo" << std::endl;
    return 0;
}
```

Para ejecutar el programa usamor el botón de **Build and run**

> Comentarios

Son útiles para ordenar el código y explicar el código. Cuando se compila el programa, el compilador ignora estas líneas y nos las lee.

```cpp 
/**
* Comentario multilínea
*/
// Comentario de una sola línea
```

> Operadores del Preprocesaor

 Operador `include`

Es un operador del preprocesador, el preprocesador es una parte del compilador que verifica qué librerías se están importando en el código fuente. (`#`).

El operador `#include`, permite incluir librerías. Hay dos formas de incluir las librerías

- `#include <iostream>` Busca los archivos en los recursos del compilador
- `#include "iostream"` Busca los archivos en la propia carpeta

*stdio.h* es la cabecera de la biblioteca "standard input-output header" que contien funciones declaradas como por ejemplo *printf*

- **Biblioteca** llamada por vicio del lenguaje, **librería** Conjunto de herramientas que viene con código predefinido.


## Variables y tipos de datos

En C++, una variable es un espacio de memoria reservado para almacenar un valor. Las variables deben ser declaradas antes de su uso y se les asigna un tipo de datos. Los tipos de datos básicos en C son:

**Entero**: para almacenar valores enteros, como -5, 0, 10, etc.

**Flotante**: para almacenar números reales, como 3.14, 2.5, etc.

**Carácter**: para almacenar caracteres, como 'a', 'b', etc.

**Cadena de caracteres**: para almacenar una serie de caracteres, como "Hola mundo".

**Booleano**: para almacenar valores verdadero o falso.

> Variables enteras (`int`)

**iostream** Es una librería que nos permite escribir y leer información por consola.
```cpp
#include <iostream>
```

Para declarar un variable en *C++¨*, debemos primero colocar el tipo de dato. Por ejemplo:
```cpp
int num = 31;
// Otra forma de delcarar y asignar valor es
int num{23};
```

> Variables `bool` y `char`

- **char** Esta tipo de dato almacena caracteres
- **bool** Este tipo de dato almacena valores booleanos (false o verdadero), `true` `false`

> Variable de tipo `char`

Si por ejemplo colocamos una palabra en una variable de tipo **char**, el compilador, sólo tomará un caracter. En este caso usamos *comillas simples*
```cpp
char letra = 'H';
```

Para mostrar varios caracteres usamos comillas dobles y colocamos un __`*`__, al final de la palabra reservada `char` .

> Variable de tipo `bool`
Es un tipo de variable lógico, 0 - 1, ó verdadero y falso.
0 == false
1 == true

Para declarar una variable booleana, indicamos el tipo de dato `bool`
```cpp
bool variable = true; // false | true
```


> Variable de tipo `float`

Son variables que guardar números de coma flotante de baja precisión, son como decimales que no tienen muchos decimales (No tiene tanto espacio en la memoria).

En algunos casos, el compilador redondea el número a un valor superior o inferior.

```cpp
float num = 5.23478;
```

> Variable de tipo `double`

Son tambien números de punto flotante que tienen más precisión ó espacio que memoria que los float. Funciona para números con más caracteres.
```cpp
double num = 12.3479835;
```
## Arrays 

Son variables que tienen varias posiciones en memoria, lo que permiten almacenar más de un valor en una sóla referencia.

Para declarar un arreglo, lo hacemos igual que en una variable, colocando al final corchetes angulares indicando el tamaño del arreglo. 

```cpp
// Arreglo de tipo entero con 5 posiciones
int variable[5];
```

Para asignar valores al arreglo, debemos acceder a la posición y en ella colocar el valor que deseemos (Debe ser del mismo tipo de dato).
```cpp
// Asignamos un valor al arreglo, en la posición 0
variable[0] = 12;
``` 
## Printf y Scanf

```cpp
#include <stdio.h>
void main() 
	{
		int a=20;
		float b = 5.23478;
		
		printf("El valor de a es %d\n",a);
		printf("El valor de b es %f\n",b);
	}
```
%c	Un único caracter
%d	Un entero con signo, en base decimal
%u	Un entero sin signo, en base decimal
%o	Un entero en base octal
%x	Un entero en base hexadecimal
%e	Un número real en coma flotante, con exponente
%f	Un número real en coma flotante, sin exponente
%s	Una cadena de caracteres
%p	Un puntero o dirección de memoria


```cpp
#include <stdio.h>
void main()
{
	char a;
	int b;
	printf("Introduce un caracter: ");
	scanf("%s",&a);
	printf("Introduce un numero: ");
	scanf("%d",&b);
}
```

## Operadores Aritméticos

Son los que nos permiten realizar operaciones matemáticas.

```cpp
int num1 = 2;
int num2 = 6;
int suma = num1 + num2;
```

- Suma `+`
- Resta `-`
- Multiplicación `*`
- División `/`
- Módulo (Residuo de la división) `%`


## Operadores de Asignación

El operador de asignación general es `=`. Exiten otros como:
- **Asigna una suma** `+=` Suma un valor a la variable 
- **Asigna una resta** `-=` Resta un valor a la variable
- **Asigna una multiplicación** `*=` Resta un valor a la variable

```cpp
// Declaración;
int operacion;
// Asignación
operacion = 12;
// Operador de asignación
operacion *= 3;
``` 

## Operadores lógicos

- *and* `&&`
	Si ambas condiciones se cumplen, retorna true
- *or* `||`
	Si alguna de las dos condiciones se cumple, retorna true.
- *Negación* `!`
	Niega una condición. Si es true, lo vuelve false y viciversa


## Estructuras de control de flujo

Las estructuras de control de flujo se utilizan para controlar el flujo de ejecución de un programa. En C, existen tres estructuras de control de flujo principales:

**if-else**: se utiliza para ejecutar una sentencia si una condición es verdadera y otra sentencia si la condición es falsa.

**while**: se utiliza para repetir una sentencia mientras una condición es verdadera.

**for**: se utiliza para repetir una sentencia un número determinado de veces.



## Sentencias `if` (Condicionales)

Permiten comparar dos variables para ejecutar una acción determinada. La condición se cumple siempre y cuando la condición sea verdadera. 

```cpp
if (numero1 < numero2){
    printf("Es menor\n");
} else if (numero1==numero2){
    printf("Son iguales"\n);
} else {
    printf("Es mayor" \n);
}
```

## Operadores de Comparación

- *Operador de comparación* `==`
- *Distinto o diferente* `!=`
- *Mayor que* `>`
- *Mayor o igual que* `>=`
- *Menor que* `<`
- *Menor o igual que* `<=`

Estos operadores son usamos en los condicionales y ciclos, donde comparamos dos valores para realizar una determinada acción.

## Sentencia `switch`

Es un tipo de condicional que dado un valor introducido los compara con los casos que tiene definido. Un ejemplo de switch en `C++` es el siguiente

```cpp
switch (c){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':	
        printf("El una vocal.\n");
        break;
default:
    printf("Es una consonante.\n");
    break;
}
```

## Ciclos o Bucles

Estas estructuras nos permiten ejecutar bloques de códigos dada una condición.

## `while`

Ejecuta las sentencia siempre que la condición sea verdadera. La expresión se verfica en cada inicio de la iteración.

```cpp 
int i = 0;
while (i <= 5) {
    printf("Valor de i: %d\n",i);
    // Aumentamos el valor de la variable
    i++;
}
```

## `do while`

Ejecuta las sentencia siempre que la condición sea verdadera. La expresión se verfica en cada inicio de la iteración.

```cpp 
int i = 0;
do {
    printf("Valor de i: %d\n",i);
    // Aumentamos el valor de la variable
    i++;
}while (i <= 5);
```

## `for`

El ciclo for ejecuta la primera expresión al iniciar el ciclo. Luego al inicio de cada iteración (Repetición) evalúa la segunda expresion y al final de cada iteración ejecuta la tercera expresion.

```cpp 
// Declaración de un array
char array[5];
array[0] = 'A';
array[1] = 'B';
array[2] = 'C';
array[3] = 'D';
array[4] = 'E';
// Ciclo for
for (int i = 0; i < sizeof(array) ; i++){
    printf("%c\n",array[i]);
}
```

## Punteros

Un puntero es una variable que en vez de guardar un valor, guarda la dirección de memoria donde está almacenado ese valor.

O sea:
👉 Una variable normal = guarda un dato
👉 Un puntero = guarda dónde está ese dato

```cpp 
// EJEMPLO SIMPLE
int numero = 10;
int *p = &numero;
```
* `numero`→ vale 10

* `&numero` → es la dirección de memoria donde está guardado ese 10

* `p` → es un puntero que guarda esa dirección

* `*p` → es “entrar a la casa”: acceder al valor guardado en esa dirección


## Funciones
Una función en C es un bloque de código que realiza una tarea específica y se puede llamar desde cualquier lugar del programa. Las funciones en C deben ser declaradas antes de su uso y se les asigna un tipo de retorno

Las funciones son una manera de encapsular una funcionalidad que quieres reutilizar, de manera que puedes llamar esa función con un solo nombre, y no tendrás que escribir el código entero cada vez que la utilices.

La declaración de una función en c++, va de la siguiente manera.
*tipo-dato-devolver nombre-funcion(){ //Código a ejecutar  }*

```cpp
// Funcion suma
int sumar(int a, int b){
	return a+b;
}
// Funcion que no retorna nada
void miFuncion(){
	printf("Yo no retorno nada");
}
```

Hay dos tipos de funciones
- Las que no retornan valor `void`
- Las que retornan un valor `int`, etc.

También podemos definir parámetros por defecto a la función, de la siguiente manera.
```cpp
void funcion(int a = 10){
    printf("%d",a+3);
}
```

De esta manera, ya el valor de a tiene predefinido 10, sin embargo este valor puede ser cambiado al pasar por parámetro un nuevo valor en la llamada de la función.
```cpp
int main(){
    funcion();
    funcion(12);
    return 0;
}
```
### Pasaje de parámetros por valor

```cpp
#include <stdio.h>

// Definición de la función
int suma(int a, int b)
{
    int result;
    result=a+b;
    return result;
}

int main()
{
    int a,b,c;
    a=5;
    b=1;
    
    // Llamada a la función
    c=suma(a,b);

    return 0;
}
```
### Pasaje por dirección

```cpp
#include <stdio.h>

// Definición de la función
void suma(int *a, int *b)
{
    int result;
    result=*a+*b;
    printf("El resultado es: %d\n",result);
}

int main()
{
    int a,b;
    a=5;
    b=1;
    // Llamada a la función
    suma(&a,&b);

    return 0;
}
```




---
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
```python
 Print('Hola mundo') #Sale un Hola mundo por consola
```
*   `Función Input( )`Permite al usuario indroduucir texto desde el teclado
```python
 Nombre = input( )
```

## Variables 
Las variables en Py son como contenedores donde puedes almacenar datos.

Ejemplo:

```python
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


```python
Edad= 20
if edad >= 18:
  print('eres mayor de edad') 
else:
  print('eres menor de edad')
```

## Ciclo while 

El ciclo While es una estructura de control que permite ejecutar un bloque de codigo repetidamente mientras una condicion sea verdadera.


```python
Ejemplo

while (condicíon):
  #Bloque de codigo
```
## Clico For
El ciclo for esta diseñado para ejecutar un bloque de código una vez por cada elemento de un objeto iterable.

```python
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

```python
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
Una función es un bloque de código reutilizable que realiza una tarea especifica. puede definir una función una vez y luego llamarla tantas veces como sea necesario, lo que ayuda a mantener tu código limpio y organizado.
`Sintaxis:` Definición de una función `def Nombre_de_mi_funcion():`. y para llamar a la función simplemente llamas su nombre seguido de parentesis ( )
> Funciones con parámetros Arbitarios
* A veces uno sabe de antemano cuántos parámetros necesitarás. Puedes usar *args para pasar un número arbitrario de argumentos posicionales y **kwargs para pasar un número arbitrario de argumentos nombrados.

```python
Ejemplo *args
def sumar_todos(*args):
   return sum(args)
```
```python
Ejemplo **kwargs
def mostrar_info(**kwargs)
   for clave, valor in kwargs.items( ):
      print(f'{ clave } : { valor } )
```
## Decoradores
Un decorador en Python es, en esencia, una función que toma otra función como argumento, le añade alguna funcionalidad, y devuelve una nueva función.

`Propósito:` Es una manera práctica de modificar o mejorar el comportamiento de una función existente sin tener que cambiar su código interno.

`Sintaxis:` Se aplica utilizando el símbolo @ seguido del nombre de la función decoradora, justo antes de la definición de la función que se va a decorar.

```python
Ejemplo de Decorador
def logger(func):
    def wrapper(): # Función "envoltura" que añade la lógica extra
        print(f"Ejecutando {func.__name__}") # Código ANTES
        func()                                 # Llamada a la función original
        print(f"{func.__name__} ejecutada")  # Código DESPUÉS
    return wrapper

@logger
def saludar():
    print("¡Hola, Mundo!")

# Cuando llamas a saludar(), se ejecuta la función wrapper
saludar() 
# Salida:
# Ejecutando saludar
# ¡Hola, Mundo!
# saludar ejecutada

```
## Clases y Objetos
Una clase es una plantilla o molde que define un tipo de objeto. pueden pensar en una clase como una descripcion general de un grupo de objetos que tienen propiedades y comportamientos similares.
En python definimos una clase utilizando la palabra clave **Class**, seguida del nombre de la clase.
```python
Ejemplo:
         class auto:
               pass
```
> El constructor

El método **__init__** es el constructor de la clase.  se llama automaticamente cuando se crea una nueva instancia de la clase y generalmente se usa para inicializar las propiedades del objeto.

```python
**Ejemplo**
Class auto:
   def __init__(self, marca, modelo, color):
      self.marca = marca #Propiedad de la clase
      self.modelo = modelo #Propiedad de la clase
      self.color = color #Propiedad de la clase
```
En este caso, el constructor recibe marca, modelo y color como páramentros y los asigna a la instancia del objeto.
>Propiedades y atributos

Los atributos don variables que pertenecen a la clase o a la instancia. En este ejemplo, **marca**, **modelo** y **color** son atributos de instancia, lo que significa que cada objeto Auto tendrá su propio valor de estos atributos.

```python
Class auto:
   def __init__(self, marca, modelo, color):
      self.marca = marca 
      self.modelo = modelo
      self.color = color
auto = auto('Toyota', 'corolla', rojo) #Creando una instancia de Auto
pritn(auto1.marca)
print(auto1.modelo)
print(auto1.color)
```
>Métodos

Los métodos son funciones que se definen dentro de una clase y que operan solo los objetos de esa clase. Todos los me}étodos de instancia incluyen **self** como primer parámetro, que representa la instancia actual. 

```python
Class auto:
   def __init__(self, marca, modelo, color):
      self.marca = marca 
      self.modelo = modelo
      self.color = color
   def arrancar(self):
      print(f'el {self.marca} {self.modelo} está arrancando')
   def detener(self):
      print(f'el {self.marca} {self.modelo} está detenido')
```
## Pilares de la POO
La programación Orientada a Objetos (POO) es un paradigma que organiza el código en torno a objetos, que son instancias de clases. los cuatros pilares de la POO son:
>Abstracción
>Encapsulamiento
>Herencia
>Polimorfismo

`Niveles de Protección`

**PÚBLICO:** Un atributo es público si su nombre no tiene guiones bajos al principio. Se puede acceder y modificar desde fuera de la clase.

**PROTEGIDO:** Un atributo es protegido si su nombre comienza con un guion bajo (_). Se trata de una convención que indica que el atributo no dbería ser accedido directamente desde fuera de la clase, pero sigue accesible. Es más un aviso para los desarrolladores que una restricción real.

**PRIVADO:** Un atributo es considerado privado si su nombre comienza con dos guiones bajos (__). Pyrhon lo "Renombra" internamente para hacerlo menos accesible desde fuera de la clase, pero aún puede ser accedido de forma indirecta.

```python
**EJEMPLO DE PROTECCIÓN**
class Persona:
   def __init__(self, nombre, apellido, documento):
      self.__nombre = nombre #Atributo privado
      self._apellido = apellido #Atributo protegido
      self.documento = documento #Atributo Público
```
>ENCAPSULAMIENTO

El encapsulamiento consiste en agrupar datos y métodos dentro de una clase, y controlar el acceso a ellos. En Python, podemos controlar el acceso de los atributos utilizando diferentes niveles de protección. Esto se hace principalmente para proteger los datos y prevenir que se modifiquen desde fuera de la clase sin control.

```python
#EJEMPLO
class Auto:
   def __init__(self, marca, modelo, color):
      self._marca = marca #Atributo privado
      self._modelo = modelo #Atributo privado
      self._color = color #Atributo Privado
   def arrancar(self):
      return f'El {self._marca} {self._modelo} ha arrancado.'
   def detenerse(self):
      return f'El {self._marca} {self._modelo} se ha detenido.'
   #METODO PARA CAMBIARL EL COLOR DEL AUTO
   def cambiar_color(self, color_nuevo)
      self._color = color_nuevo
```
>HERENCIA

Herencia es el mecanismo que permite a una clase tomar prestado atributos y métodos de otra clase. Esto nos permite crear nuevas clases basadas en otras ya existentes, lo que facilira la reutilización de código y la extension de funcionalidades. 

<img src="images/imagen_ejemplo_herencia.png" alt="Ejemplo de Herencia" width="450"/>

```python
#EJEMPLO DE HERENCIA

Class AutoDeportivo(Auto):
   def __init__(self, marca, modelo, color, velocidad_maxima):
      super().__init__(marca, modelo, color) #Heredamos los atributos de Auto
      self.velocidad_maxima = velocidad_maxima #Añadimos un nuevo atributo
   def mostrar_velocidad_maxima(self):
      return f'El {self.marca} {self.modelo} tiene una velocidad máxima de {self.velocidad_maxima} km/h'
```

En este ejemplo. AutoDeportivo hereda de Auto, lo que significa que tiene todos los atributos y métodos de Auto, pero además le agregamos un nuevo atributo velocidad_maxima y un método adicional mostrar_velocidad_maxima().

>POLIMORFISMO

El polimorfismo en POO significa "Muchas formas". Es la capacidad que tienen los objetos de diferentes clases de ser tratados como si fueran de la misma clase base (común) y de responder de manera diferente a los mismos métodos. Dichos de otra menera, el mismo método o función puede comportarse de diferentes maneras según el objeto que lo invoque.

<img src="images/imagen_ejemplo_polimorfismo.png" alt="Ejemplo de Polimorfismo" width="450"/>

Esto es especialmente útil cuando trabajmos con herencia: las clases derivadas (hijas) pueden implementar sus propios comportamientos especificos para métodos que son definidos en una clase base (padre)

```python

class Auto:
   def __init__(self, marca, modelo, color):
      self.marca = marca 
      self.modelo = modelo 
      self.color = color 
   def arrancar(self):
      return f'El {self._marca} {self._modelo} ha arrancado.'
class AutoElectrico(auto):
   def __init__(self, marca,modelo,color,bateria):
      super().__init__(marca, modelo, color): #Llamamos al constructor del auto
      self.bateria = bateria #Añadimos un atributo especifico para el AutoElectrico
   def arrancar(self):
      return f'El {self.marca} {self.modelo} eléctrico ah arrancado silenciosamente.'

#Crear un auto electrico
tesla = AutoElectrico('tesla', 'modelo S', 'Negro', '100km/h')
print(teska.arrancar())
```
>ABSTRACCIÓN

La abstracción en la Programación Orientada a Objetos (POO) significa enfocarse en las propiedades y comportamientos esenciales de un objeto, mientras se ocultan los detalles complejos o innecesarios que no son relevantes para el usuario. En otras palabras, abstraemos los detalles internos para que el usuario interactúa solo con lo necesario.

`Abstracción en el código`

Volviendo a nuestro ejemplo del auto de Python, la abstraacción es que podemos arrancar o detener el auto con métodos simples (arrancar(), detenerse() ), sin tener que saber cómo esos metodos están imprimentados internamente.

```python
#EJEMPLO
class Auto:
   def __init__(self, marca, modelo, color):
      self.marca = marca
      self.modelo = modelo 
      self.color = color
#Este método "arrancar" oculta los detalles internos de cómo arrancar el auto
   def arrancar(self):
      return f'El {self.marca} {self.modelo} ha arrancado.'
#Igualmente, "detenerse" es una abstracción de cómo se detiene el auto
   def detenerse(self):
      return f'El {self.marca} {self.modelo} se ha detenido.'
```
`¿Qué pasa cuando usamos la abstracción?`

Cuando creamos un objeto de la clase Auto y llamamos a los metodos arrancar() y detenerse(), no necesitamos saber cómo estos métodos funcionan por dentro.
Solo nos importa que el auto "arranca" o "Se detiene":

```python
mi_auto = Auto('Toyota', 'corolla', 'rojo')
print(mi_auto.arranca()) #El toyota corolla ha arrancado
print(mi_auto.detenerse()) #El Toyota corolla se ha detenido
```
Lo único que el usuario de la clase necesi ta saber es que puede llamarse el método arrancar() para arrancar el auto. No le importa cómo el código realmente hace que el auto "arranque" internamente. Esto es abstracción: estamos exponiendo una funcionalidad clara y sencilla al usuario, mientras los detalles complicados se escondejn en el código.

> ABSTRACCIÓN FORMAL

En Python, cuando hablamos de abstracción formal en términos de implementación, nos referimos al uso de clases y métodos abstractos, y para esto se usa el módulo abc (Abstract Base Classes).

* Clases abstractas: Son clases que no pueden ser instanciadas directamente. Sirven como plantillas para otras clases. Estas clases definen métodos que deben ser implementados en las clases hijas.

* Métodos abstractos: Son métodos que se declaran en una clase abstracta pero no tienen implementación. Las subclases están obligadas a sobrescribirlos y darles una implementación concreta.

Imaginemos que queremos hacer una clase base llamada Vehiculo. Este vehículo debe tener métodos abstractos como arrancar() y detenerse(), pero no queremos definir cómo funcionan, ya que eso dependerá del tipo específico de vehículo (un auto, una motocicleta, etc.). Entonces, las clases que hereden de Vehiculo deben implementar esos métodos.


```python
from abc import ABC, abstractmethod

# 1. Clase Abstracta: No se puede instanciar directamente
class Vehiculo(ABC):
    
    # Este es el constructor que todas las subclases también pueden usar
    def __init__(self, marca):
        self.marca = marca
        
    # 2. Método Abstracto: OBLIGA a las clases hijas a implementarlo
    @abstractmethod
    def arrancar(self):
        pass # La implementación queda vacía
        
    # 3. Método normal: Tiene una implementación por defecto
    def detenerse(self):
        return f"El {self.marca} se ha detenido."

# Clase Concreta que hereda de Vehiculo
class Auto(Vehiculo):
    
    # OJO: Debe implementar arrancar()
    def arrancar(self):
        return f"El Auto {self.marca} ha encendido su motor a gasolina."

# Clase Concreta que hereda de Vehiculo
class MotoElectrica(Vehiculo):

    # OJO: Debe implementar arrancar()
    def arrancar(self):
        return f"La Moto {self.marca} ha encendido silenciosamente su motor eléctrico."

# Uso de las clases concretas
mi_auto = Auto("Toyota")
mi_moto = MotoElectrica("Zero")

print(mi_auto.arrancar())
print(mi_moto.arrancar())

# Intenta crear un Vehiculo (dará TypeError)
# vehiculo_generico = Vehiculo("Genérico")

```

## NunPY Y Matplotlib

NumPy (Numerical Pythin) es una biblioteca de Python utilizada para realizar operaciones matemáticas y estadísticas con grandes conjuntos de datos.

>Características Principales

 * `Arrays Multidimensionales`: NumPy introduce el objeto nderray, que es una matriz n-dimensiones, lo que permite almacenar y manipular datos de forma eficiente. 

 * `Operaciones Matemáticas`: Ofrece funciones para realizar operaciones matemáticas elementales y avanzadas, como sumas, productos, transformaciones, etc. 

 * `Funcionalidades de Algebra Lineal`: Incluye operaciones de álgebra lineal, como multiplicación de matrices, descomposición de matrices y resolución de sistemas de ecuaciones lineales.

 * `Funciones Estaticas`: Proporciona funciones estaticas como media, mediana, desviación estandar, etc.

 * `Integración con otras Bibliotecas`: NumPy se integra fácilmente con otras bibliotecas cientificas como Scipy, Matplotlib y pandas.


`EJEMPLOS DE ARRAYS`

Puedes eliminar elementos del diccionario usando el método pop( ) o la palabra clave del: 

```python
# Creando un Array de una de una dimesión 
array_1d = np.array([1,2,3,4,5])

# Creando un arrays de dos dimensione
array_2d = np.array([1,2,3],[4,5,6])

print('Array 1D:',array_1d)
print('Array 2D:', array_2d)

```

>Operaciones Matemáticas Básicas

```python
#Suma de arrays
array_sum = array_1d + array_1d

#Producto de array
array_product = array_1d * array_1d

print('Suma: ',array_sum)
print('Producto: ', array_product)

```

Se pueden utilizar funciones estadisticas

```python
#Calcular la media
mean = np.mean(array_1d)

#Calcular la desviación estándar
std_dev = np.std(array_1d)

print('Media:',mean)
print('Desviación Estándar:',std_dev)

```
```python
#Creando matrices
matrix_a = np.array([[1,2],[3,4]])
matrix_b = np.array([[5,6],[7,8]])

#Multiplicación de matrices
matrix_product = np.dot(matrix_a, matrix_b)

print('Producto de maatrices: \n', matrix_product)

```

Selección de elementos

```python
#Accediendo a elementos de un array
element= array_2d [0,1] #Elemento en la primera fila, segunda columna

#Slincing de un array
sub_array = array_2d[:,1] #Todas las filas, segunda columna 

print("Elemento: ", element)
print("Sub-array: ",sub_array)
```

## Matplotlib

Matplotlib es una Biblioteca de Python para crear gráficos estáticos, animados e interactivos. Fue creada por john D. Hunter y es ampliamente utilizada en la comunidad cientíca y de analisis de datos debedi a su flixibilidad y potencia.

>Características Principales
 * `Gráficos 2D`: Permite la creación de una amplia vatiedad de gráficos en dos dimensiones, como lineas, barras, histogramas, dispersiones (scatter plots), y más.

 * `Personalización`: Ofrece un alto grado de personalización para los gráficos, desde los colores y estilos de las líneas hasta los ejes y las etiquetas

 * `Integración`: Se integra bien con otras bibliotecas de Python como NumPy, Pandas y AciPy, y puede trabajar con jupyter Notebooks para crear gráficos en linea.

 * `Interactividad`: Aunque originalmente diseñada para gráficos estáticos, Matplotlib también permite crear gráficos interactivos y animaciones.

>Creación de un Gráfico Simple
```python
#DATOS
x = [1,2,3,4,5]
y = [2,3,5,7,11]

#Crear el Gráfico
 plt.plot(x,y)

 #Añadir título y etiquetas
 plt.title("Ejemplo de Gráficos Simple")
plt.xlabel("Eje x")
plt.xlabel("Eje y")


#Mostrar el gráfico
plt.show()

```

<img src="images/imagen_ejemplo_grafica_tabla.png" alt="Ejemplo de Tabla" width="450"/>


>Creación de un Gráfico de Barras

```python
#Datos
categories = ['A','B','C','D']
values = [4,7,1,8]

#Crear el gráfico de barras
plt.bar(categories, values)

#Añadir titulo y etiquetas
plt.title("Ejemplo de Gráficos de Barras")
plt.xlabel("Categorias")
plt.xlabel("Valores")

#Mostrar el gráfico
plt.show()

```
<img src="images/ejemplo_grafica_barras.png" alt="Ejemplo de Tabla Barra" width="450"/>

>Creación de Gráfico de Histograma

```python
#Datos
data = np.random.randn(1000)

#Crear el Hisrograma
plt.hist(data, bins=30)

#Añadir titulo y etiquetas
plt.title("Ejemplo de Histograma")
plt.xlabel("Valor")
plt.xlabel("Frecuencia")

#Mostrar el gráfico
plt.show()

```
<img src="images//imagen_ejemplo_grafico_histograma.png" alt="Ejemplo de Tabla Histograma" width="450"/>

>Creación de Gráfico de Dispersión 

```python
#Datos
x = np.random.rand(50)
y = np.random.rand(50)

#Crear el gráfico de dispersión
plt.scatter(x, y)

#Añadir titulo y etiquetas
plt.title("Ejemplo de Gráfico de Dispersión")
plt.xlabel("eje x")
plt.xlabel("eje y")

#Mostrar el gráfico
plt.show()

```
<img src="images/ejemplo_grafico_dispersion.png" alt="Ejemplo de grafica de dispersión" width="450"/>