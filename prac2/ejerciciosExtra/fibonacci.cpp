// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 28/09/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: Calcula el enésimo numero de la serie
// de fibonacci
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// valor1:N, valor2:N, N -> fibonacci() -> N
// ------------------------------------------------
// Algoritmo
// ------------------------------------------------
// Datos de entrada: valor1:N, valor2:N, N
// Datos de salida: N
// Devolver 

#include <iostream>

int fibonacci(int n)
{
    int total = 0;  // contador al que vamos añadiendo la suma
    int valor1 = 1; // primer valor de la secuencia de fibonacci (siembre va a ser el mismo)
    int valor2 = 1; // segundo valor de la secuencia de fibonacci (siempre va a ser 1 tmb)

    for (int i = 0; i < n; i++) // conociendo eso hacemos un bucle comenzando en cero y llendohasta la posicion deseada (enesima)
    {
        total = valor1 + valor2; // el total se iguala al valor1 (1) mas el valor2 (dando asi la tercera posición)
        valor1 = valor2; //el valor 1 ya no me sirve asi q lo desecho y lo cambio por el valor dos (actualizo su valor)
        valor2 = total; //igualo el valor dos para cambiar su contenido por el total y asi sucesivamente 
    }

    return total;

} // fibonacci()

//---------------------------------------------------
//---------------------------------------------------

int main()
{
    // int n = 9;
    int res = fibonacci(9); // llamamos a la funcion y almacenamos el resultado en la variable res

    std::cout << "El resultado es " << res << "\n"; // se muestra el mensaje por pantalla

    // Prueba automática
    //---------------------------------------------------
    //---------------------------------------------------

    if (res != 89)
    {
        std::cout << "La función no va correctamente"; // se muestra el mensaje por pantalla
    }

} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
