// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 21/10/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: La función insercion() recibe una lista de números de tipo natural
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// [N] -> insercion() -> [N]
// ------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

//unción para crear una lista de números aleatorios en el rango [min, max]
void crearListaRandom(int lista[], int cuantos, int min, int max)
{
    std::srand(static_cast<unsigned>(std::time(0)));

    for (int i = 0; i < cuantos; i++)
    {
        lista[i] = min + (std::rand() % (max - min + 1)); //genera un número aleatorio en el rango [min, max]
    }
}

void insercion(int *lista, int cuantos)
{
    std::srand(static_cast<unsigned>(std::time(0))); //contador de tiempo

    //el bucle externo recorre todos los elementos de la lista excepto el primero
    for (int i = 1; i < cuantos; i++)
    {
        //seleccionamos el elemento actual como 'clave'
        int clave = lista[i];
        //inicializamos 'j' como el índice del elemento anterior
        int j = i - 1;

        //mientras 'j' no sea negativo y el elemento en la posición 'j' sea mayor que la 'clave'
        while (j >= 0 && lista[j] > clave)
        {
            //movemos el elemento en la posición 'j' una posición hacia adelante
            lista[j + 1] = lista[j];
            // Decrementamos 'j'
            j = j - 1;
        }
        //insertamos la 'clave' en su posición correcta
        lista[j + 1] = clave;
    }
    

} // insercion()

bool estaOrdenada(int *lista, int cuantos) {
    for (int i = 0; i < cuantos - 1; i++) {
        if (lista[i] > lista[i + 1]) {
            return false; // Si encontramos un elemento mayor que el siguiente, la lista no está ordenada
        }
    }
    return true; // Si no encontramos ningún elemento fuera de orden, la lista está ordenada
}

//----------------------------------------------------
//----------------------------------------------------

int main()
{
    int cuantos = 1000;
    int lista[cuantos];
    int min = 0;   //valor mínimo
    int max = 100; //valor máximo

    crearListaRandom(lista, cuantos, min, max);

    auto start = std::chrono::high_resolution_clock::now(); // Inicio del cronómetro

    // Imprime la lista de números aleatorios
    // for (int i = 0; i < cuantos; i++)
    // {
    //     std::cout << lista[i] << " ";
    // }

    insercion(&lista[0], cuantos); //llamamos a la funcion y almacenamos el resultado en la variable res

    //-----------------------------------------------------------------------------------------

    std::cout << "\n";

    // // Imprime la lista de números aleatorios
    // for (int i = 0; i < cuantos; i++)
    // {
    //     std::cout << lista[i] << " ";
    // }

    //-----------------------------------------------------------------------------------------

    // Prueba automática
    //---------------------------------------------------
    //---------------------------------------------------
    
    // Comprueba si la lista está ordenada

    if (estaOrdenada(lista, cuantos)) {
        std::cout << "La lista está correctamente ordenada.\n";
    } else {
        std::cout << "La lista no está correctamente ordenada.\n";
    }

    std::cout<<"\n";

    auto end = std::chrono::high_resolution_clock::now(); // Fin del cronómetro

    std::chrono::duration<double> elapsed = end - start; // Calcula el tiempo transcurrido

    std::cout << "El tiempo transcurrido es: " << elapsed.count() << " segundos.\n"; // Muestra el tiempo transcurrido

    return 0;


} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
