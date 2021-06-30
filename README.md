# Set de Problemas #2
Ejercicios sobre estructuras de control selectivas y estructuras de control repetitivas del curso de programación orientada a objetos 1 (CS1102).

## Instrucciones

- El proyecto cuenta con los archivos `SP2.h` y `SP2.cpp`.
- Las declaraciones de las preguntas se encuentran en el archivo `SP2.h` y las definiciones en el archivo `SP2.cpp`.
- Completar las respuestas dentro de esos archivos (`SP2.h`, `SP2.cpp`) y se requiere agregar alguna nueva función incluirla dentro de estos archivos.
- Los archivos deberan ser subidos directamente a www.gradescope.com.

## Ejercicio # 1

Realizar un programa que solicite el centro (cordenadas x e y) y el radio de un circulo y un punto (cordenadas x e y) y que determine si el punto esta dentro del circulo. 

**Input Format**
```
10      # Cordenada X del circulo
20      # Cordenada Y del circulo
20      # Radio
11      # Cordenada X del punto
22      # Cordenada Y del punto
```
**Constraints**
```
Para el ingreso de datos no usar etiquetas
```
**Output Format**
```
Punto esta dentro del circulo
```
#### Ejemplo 1
**Input**
```
10
20
4
14
24
```
**Output**
```
Punto no esta dentro del circulo
```
#### Ejemplo 2
**Input**
```
0
0
2
1
1
```
**Output**
```
Punto esta dentro del circulo
```
## Ejercicio # 2
Debido a que la rotacion de la tierra no dura exactamente 365 dias, Cada 4 años se agrega un dia para realizar el ajuste de tiempo resultando años con un dia adicional, 29 de Febrero, estos años se conocen como bisiestos. Para determinar si un año es bisiesto se utiliza las siguientese reglas:  
- Si el año es multiple de 400 es bisiesto o
- Si el año es multiplo de 4 y no es multiplo de 100 es bisiesto
- En otro caso no es bisiesto

Escribir un programa que lea un año y que confirme si es bisiesto o no. 

**Input Format**
```
1600
```
**Constraints**
```
Para el ingreso de datos no usar etiquetas
```
**Output Format**
```
Es bisiesto
```
#### Ejemplo 1
**Input**
```
1601
```
**Output**
```
No es bisiesto
```
#### Ejemplo 2
**Input**
```
1808
```
**Output**
```
Es bisiesto
```
## Ejercicio # 3
Escribir un programa que permita calcular el número de pulsaciones que debe tener una persona por cada 10 segundos de ejercicio aeróbico.  
Según la fórmula de Fox y Haskell, si la persona es de sexo femenino:  
```
Pulsaciones = (220 – edad) / 10
```
Si la persona es de sexo masculino:
```
Pulsaciones = (210 – edad) / 10
```
**Input Format**
```
F
20
```
**Constraints**
```
Para el ingreso de datos no usar etiquetas
```
**Output Format**
```
El numero debe ser de 20.0 pulsaciones por cada 10 segundos aproximadamente.
```
#### Ejemplo 1
**Input**
```
M
10
```
**Output**
```
El numero debe ser de 20.0 pulsaciones por cada 10 segundos aproximadamente.
```
#### Ejemplo 2
**Input**
```
F
70
```
**Output**
```
El numero debe ser de 15.0 pulsaciones por cada 10 segundos aproximadamente.
```
#### Ejemplo 3
**Input**
```
M
60
```
**Output**
```
El numero debe ser de 15.0 pulsaciones por cada 10 segundos aproximadamente.
```
## Ejercicio # 4
Escriba un programa que tenga como entrada un número entero de 8 dígitos y descompongalo en 4 números de 2 dígitos y luego sume los 4 números Ejemplo: Ingrese el número: 11223344 Números: 11+22+33+44 =110

**Input Format**
```
1122334455
```
**Constraints**
```
Para el ingreso de datos no usar etiquetas
```
**Output Format**
```
la suma es: 110
```
#### Ejemplo 1
**Input**
```
11002200
```
**Output**
```
la suma es: 33
```
#### Ejemplo 2
**Input**
```
10304050
```
**Output**
```
la suma es: 130
```
#### Ejemplo 3
**Input**
```
10000000
```
**Output**
```
la suma es: 10
```
#### Ejemplo 4
**Input**
```
99999999
```
**Output**
```
la suma es: 396
```
## Ejercicio # 5
Escribir un programa que determine el costo de un seguro de autos, basado en la edad y el numero de accidentes que ha tenido el conductor.

El precio base de un seguro es S/. 300, hay un pago adicional de S/. 80 si el conductor tiene menos de 25 años y un pago por el número de accidentes, según la siguiente tabla:
```
Accidentes		Pago x Accidente
-------------   ----------------------------
    1				  50
    2				 100
    3				 300
    4				 600
    5				1000
    6 o mas		Auto no puede ser asegurado
```
**NOTA**: Si el conductor es menor de 16 años entonces el auto no podra ser asegurado

**Input Format**
```
30
0
```
**Constraints**
```
Para el ingreso de datos no usar etiquetas
```
**Output Format**
```
300
```
#### Ejemplo 1
**Input**
```
20
0
```
**Output**
```
380
```
#### Ejemplo 2
**Input**
```
21
2
```
**Output**
```
480
```
#### Ejemplo 3
**Input**
```
20
7
```
**Output**
```
Auto no puede ser asegurado
```
#### Ejemplo 4
**Input**
```
14
3
```
**Output**
```
Auto no puede ser asegurado
```
