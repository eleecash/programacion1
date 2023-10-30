// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 14/09/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: . La función sumatorio() recibe un número natural n y devuelve la suma 1 + 2 + 3 + · · · + n.
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// <N> -> sumatorio() -> <N>
// ------------------------------------------------
// Algoritmo
// ------------------------------------------------
// Datos de entrada: a : N
// Datos de salida: N
// Devolver n·(n+1)/2

#include <iostream>

int sumatorioSinFormula(int a)
{

    int total = 0; // inicializamos un total donde vamos a almacenar el resultado de la suma

    for (int i = 0; i <= a; i++)
    { // este bucle se encarga de hacer el sumatorio

        total = total + i; // al total se le suma la cifra obtenida del bucle
    }
    return total;

} // sumatorioSinFormula()

//-------------------------------------------------
//-------------------------------------------------

int main()
{

    int a = 9;                        // el numero del que queremos saber su sumatorio
    int res = sumatorioSinFormula(a); // llamamos a la funcion y almacenamos el resultado en la variable res

    std::cout << "El resultado es " << res << "\n"; // se muestra el mensaje por pantalla

    // Prueba automática
    //---------------------------------------------------
    //---------------------------------------------------

    if (res != 45)
    {

        std::cout << "La función no va correctamente"; // se muestra el mensaje por pantalla
    }

} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
