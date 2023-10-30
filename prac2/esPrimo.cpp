// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 20/09/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: Diseña una función esPrimo() que reciba un numero natural y devuelva verdadero si éste es un número primo.
// Un número natural es primo si es divisible únicamente por uno y por sí mismo.
// Escribe un algoritmo sencillo para determinar si un número n es o no primo.
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// <N> -> esPrimo() -> V/F
// ------------------------------------------------
// Algoritmo
// ------------------------------------------------
// Datos de entrada: n : N
// Datos de salida: V/F
// Devolver |n|/2=0 -> falso

#include <iostream>

bool esPrimo(int n)
{

    for (int i = 2; i < n; i++)
    { // se empieza en dos pq los numeros divididos entre cero dan todos cero y entre uno son todos divisibles tambien

        if (n % i == 0)
        { // se hace el modulo del numero y se iguala hasta q el resto sea cero, si el resto
          // al dividir entre dos es cero significa que es divisible entre dos y por lo tanto el numero no es primo

            return false;
        }
    }

    return true;

} // esPrimo()

//---------------------------------------------------
//---------------------------------------------------

int main()
{

    int n = 7;             // el numero que queremos saber si es primo
    bool res = esPrimo(7); // llamamos a la funcion y almacenamos el resultado en la variable res

    if (res == false)
    {

        std::cout << "El número " << n << " no es primo" << "\n"; // se muestra el mensaje por pantalla
    }

    else
    {

        std::cout << "El número " << n << " es primo" << "\n"; // se muestra el mensaje por pantalla
    }

    // Prueba automática
    //---------------------------------------------------
    //---------------------------------------------------

    if (res != true)
    {

        std::cout << "La función no va correctamente"; // se muestra el mensaje por pantalla
    }

} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
