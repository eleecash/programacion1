// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 30/10/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: Diseña una función que calcule las combinaciones de n elementos tomados de r en r.
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// <N> -> combinatorio() -> <N>
// ------------------------------------------------

#include <iostream>

int factorial(int n)
{

    int total = 1; // empiezo por 1 porque si no me daria cero el total resultante porque estaría multiplicando por cero

    for (int i = 1; i <= n; i++)
    {

        total = total * i;
    }

    return total;
}

int combinatorio(int n, int r)
{

    int totaln = factorial(n);      // calculamos el factorial de n
    int totalr = factorial(r);      // calculamos el factorial de r
    int totalnr = factorial(n - r); // calculamos el factorial de la diferencia entre n y r

    return totaln / (totalr * totalnr); // devolvemos el resultado del combinatorio, que es el factorial de n dividido
                                        // por el producto del factorial de r y el factorial de la diferencia entre n y r
}
// ------------------------------------------------
// ------------------------------------------------

int main()
{
    int res = combinatorio(3, 2);
    
    std::cout << "El resultado es " << res << "\n";

    // Prueba automática
    //---------------------------------------------------
    //---------------------------------------------------
    if (res != 3)
    {
        std::cout << "La función no va correctamente";
    }

    // Indicamos que el programa ha terminado correctamente
    return 0;
}
