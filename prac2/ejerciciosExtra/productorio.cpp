// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 24/10/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: Función que calcule el productorio de un número.
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// <N> -> productorio() -> <N>
// ------------------------------------------------

#include <iostream>

//el productorio tiene que ir desde el número que vaya al que el quiera no como el factorial que tiene que empezar en 1 si o si 

int productorio(int n)
{
    int total = 1; // empiezo por 1 porque si no me daria cero el total resultante porque estaría multiplicando por cero

    for (int i = 1; i <= n; i++) //<= porque tenemos que hacer el productorio de los numero anteriores
    {
        total= total * i;
    }
    return total;

} // productorio()

//---------------------------------------------------
//---------------------------------------------------

int main()
{

    // int n = 3;
    int res = productorio(3); // llamamos a la funcion y almacenamos el resultado en la variable res

    std::cout << "El resultado es " << res << "\n"; // se muestra el mensaje por pantalla

    // Prueba automática
    //---------------------------------------------------
    //---------------------------------------------------

    if (res != 6)
    {

        std::cout << "La función no va correctamente"; // se muestra el mensaje por pantalla
    }

} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
