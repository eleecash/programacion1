// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 24/10/2023
// ------------------------------------------------
// ENUNCIADO: -hacer una función que se le pase una lista de enteros del 0 al 10 y nos diga qué número aparece más veces
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// <N> -> contadores() -> <N>
// ------------------------------------------------

#include <iostream>

int contadores(int  *lista, int cuantos)
{
    int listaVacia[11] = {0}; // Inicializamos el array a 0

    for (int i = 0; i < cuantos; i++) 
    {
        listaVacia[lista[i]]++; // Incrementamos el contador del número correspondiente
    }

    int maxCount = 0; // Inicializamos el contador a 0
    int maxNum = 0; // Inicializamos el número a 0

    for (int i = 0; i < 11; i++)
    {
        if (listaVacia[i] > maxCount)
        {
            maxCount = listaVacia[i]; // Guardamos el número de veces que aparece
            maxNum = i; // Guardamos el número que más veces aparece
        }
    }

    return maxNum;
} // contadores()

//---------------------------------------------------
//---------------------------------------------------

int main()
{
    int cuantos=9;
    int lista[cuantos]={1, 2,0, 0, 5,7,9,8,6};
    
    int res = contadores(&lista[0],cuantos); // llamamos a la funcion y almacenamos el resultado en la variable res

    std::cout << "El número que aparece más veces es " << res << "\n"; // se muestra el mensaje por pantalla

} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------