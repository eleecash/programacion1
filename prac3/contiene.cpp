// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 17/10/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: Diseña, escribe su algoritmo e implementa una función llamada contiene() 
// que, dada una lista de números enteros y un entero n, devuelva verdadero si la lista contiene a n.
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// [N], n:N -> contiene() -> <N>
// ------------------------------------------------
// Algoritmo
// ------------------------------------------------
// Datos de entrada: lista:[N]
// Datos de salida: V/F
// Devolver sumatorio de lista

#include <iostream>

bool contiene(int *lista, int cuantos, int n)
{
    for(int i=0; i<=cuantos-1; i++){

        if(n==lista[i]){

            return true;
        }
    }
    
    return false;

} // contiene()

//----------------------------------------------------
//----------------------------------------------------

int main()
{

    int cuantos = 9;
    int lista[cuantos] = {1, 1, 2, 3, 5, 8, 13, 21, 34};
    int n=3;
    bool res = contiene(&lista[0], cuantos, n); // llamamos a la funcion y almacenamos el resultado en la variable res

    std::cout << "El resultado es " << res << "\n"; // se muestra el mensaje por pantalla

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
