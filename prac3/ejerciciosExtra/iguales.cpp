// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 25/10/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: hacer una función que se le pasen dos listas y nos diga si son iguales o no
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// N:n, N:s-> iguales() -> [N]
// ------------------------------------------------

#include <iostream>

bool iguales(int *lista1, int *lista2, int cuantos)
{

    for (int i = 0; i <= cuantos - 1; i++)
    {
        if (lista1[i] != lista2[i])
        {

            return false;
        }
    }
    return true;

} // iguales()

//----------------------------------------------------
//----------------------------------------------------

int main()
{
    int cuantos = 5;
    int lista1[cuantos] = {1, 2, 3, 4, 5};
    int lista2[cuantos] = {1, 2, 3, 4, 5};
    bool res = iguales(&lista1[0], &lista2[0], cuantos);

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
//---------------------------------------------------5