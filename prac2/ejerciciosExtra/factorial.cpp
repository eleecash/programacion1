// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 28/09/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: Función que calcule el factorial de un número.
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// <N> -> factorial() -> <N>
// ------------------------------------------------

#include <iostream>

//el factorial tiene que ir desde el número que vaya al uno siempre no puede empezar desde dos o tres SIEMPRE desde el uno

int factorial(int n)
{
    int total = 1; // empiezo por 1 porque si no me daria cero el total resultante porque estaría multiplicando por cero

    for (int i = 1; i <= n; i++) //<= porque tenemos que hacer el factorial de los numero anteriores
    {
        total= total * i;
    }
    return total;

} // factorial()

//---------------------------------------------------
//---------------------------------------------------

int main()
{

    // int n = 3;
    int res = factorial(3); // llamamos a la funcion y almacenamos el resultado en la variable res

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
