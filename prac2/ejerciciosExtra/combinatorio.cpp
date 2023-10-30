// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 28/09/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: Función que calcule el combinatorio de un número.
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// <N> -> combinatorio() -> <N>
// ------------------------------------------------
// Algoritmo
// ------------------------------------------------

// Incluimos la biblioteca iostream para poder usar cout
#include <iostream>

// Definimos una función para calcular el factorial de un número
int factorial(int n)
{
    // Inicializamos el total a 1
    int total = 1;
    // Recorremos desde 1 hasta n (incluido)
    for (int i = 1; i <= n; i++)
    {
        // Multiplicamos el total por el número actual
        total = total * i;
    }
    // Devolvemos el total calculado
    return total;
}

// Definimos una función para calcular el combinatorio de dos números
int combinatorio(int n, int k)
{
    // Calculamos el factorial de n
    int totaln = factorial(n);
    // Calculamos el factorial de k
    int totalk = factorial(k);
    // Calculamos el factorial de la diferencia entre n y k
    int totalnk = factorial(n-k);

    // Devolvemos el resultado del combinatorio, que es el factorial de n dividido por el producto del factorial de k y el factorial de la diferencia entre n y k
    return totaln/(totalk*totalnk);
}

// Definimos la función principal del programa
int main()
{
    // Calculamos el combinatorio de 6 y 3 y lo almacenamos en res
    int res = combinatorio(5,3);
    // Imprimimos el resultado por pantalla
    std::cout << "El resultado es " << res << "\n";

    // Comprobamos si el resultado es correcto. Si no lo es, imprimimos un mensaje de error por pantalla
    if (res != 20)
    {
        std::cout << "La función no va correctamente";
    }

    // Indicamos que el programa ha terminado correctamente
    return 0;
}
