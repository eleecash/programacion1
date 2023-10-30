// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 17/10/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: Diseña una función sumarLista() que reciba una lista de números enteros y devuelva su suma.
// ------------------------------------------------
// Diseño
// ------------------------------------------------
//  [N] -> sumarLista() -> <N>
// ------------------------------------------------
// Algoritmo
// ------------------------------------------------
// Datos de entrada: lista:[N] 
// Datos de salida: N
// Devolver sumatorio de lista

#include <iostream>

int sumarLista(int *lista, int cuantos)
{
    int total=0;
    for (int i = 0; i <= cuantos-1; i++) 
    {
        total= total + lista[i];
    }
    return total;
    

} // sumarLista()

//----------------------------------------------------
//----------------------------------------------------

int main()
{

    int cuantos = 9;
    int lista[cuantos] = {1, 1, 2, 3, 5, 8, 13, 21, 34};
    int res = sumarLista(&lista[0], 9); // llamamos a la funcion y almacenamos el resultado en la variable res

    std::cout << "El resultado es " << res << "\n"; // se muestra el mensaje por pantalla

    // Prueba automática
    //---------------------------------------------------
    //---------------------------------------------------

    if (res != 88)
    {

        std::cout << "La función no va correctamente"; // se muestra el mensaje por pantalla
    }

} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
