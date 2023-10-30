// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 24/10/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: hacer una función que se le pasen 3 valores, 2  sean dos números y el tercero un número del 1 al 4,
// donde si es un 1 haremos una suma con los números, si es un 2 una resta, si es un 3 una multiplicación y si es un 4 una división.
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// <N> -> calculadora() -> <N>
// ------------------------------------------------

#include <iostream>

int calculadora(int m, int n, int l)
{
    int total;
    if (l == 1)
    {
        total = n + m;
    }
    else if (l == 2)
    {
        total = n - m;
    }
    else if (l == 3)
    {
        total = n * m;
    }
    else if (l == 4)
    {
        total = n / m;
    }

    // si fuese cualquiera de las otras posibilidades

    else
    {
        return 0;
    }

    return total;

} // calculadora()

//---------------------------------------------------
//---------------------------------------------------

int main()
{

    int n = 4;
    int m = 6;
    int l = 2;
    int res = calculadora(n, m, l); // llamamos a la funcion y almacenamos el resultado en la variable res

    std::cout << "El resultado es " << res << "\n"; // se muestra el mensaje por pantalla

    // Prueba automática
    //---------------------------------------------------
    //---------------------------------------------------

    if (res != 2)
    {

        std::cout << "La función no va correctamente"; // se muestra el mensaje por pantalla
    }

} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
