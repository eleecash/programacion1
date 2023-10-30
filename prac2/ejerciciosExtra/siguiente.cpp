// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 24/10/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: Hacer una función que se le pase un número entero y te devuelva el entero siguiente
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// <N> -> siguiente() -> <N>
// ------------------------------------------------

#include <iostream>

int siguiente(int n)
{
   n= n+1;
   return n;
} 
// siguiente()

//---------------------------------------------------
//---------------------------------------------------

int main()
{

    // int n = 3;
    int res = siguiente(3); // llamamos a la funcion y almacenamos el resultado en la variable res

    std::cout << "El resultado es " << res << "\n"; // se muestra el mensaje por pantalla

    // Prueba automática
    //---------------------------------------------------
    //---------------------------------------------------

    if (res != 4)
    {

        std::cout << "La función no va correctamente"; // se muestra el mensaje por pantalla
    }

} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
