// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 21/10/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: La función burbuja() recibe una lista de números de tipo natural
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// [N] -> burbuja() -> [N]
// ------------------------------------------------


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

// Función para crear una lista de números aleatorios en el rango [min, max]
void crearListaRandom(int lista[], int cuantos, int min, int max)
{
    std::srand(static_cast<unsigned>(std::time(0)));

    for (int i = 0; i < cuantos; i++)
    {
        lista[i] = min + (std::rand() % (max - min + 1)); // Genera un número aleatorio en el rango [min, max]
    }
}


void burbuja(int *lista, int cuantos)
{
    std::srand(static_cast<unsigned>(std::time(0))); // contador de tiempo

    for (int i = 0; i < cuantos - 1; i++)
    {
        for (int j = 0; j < cuantos - 1 - i; j++)
        {
            int aux=0; // variable auxiliar
            if (lista[j] > lista[j+1])
            {
                aux=lista[j]; 
                lista[j]=lista[j+1]; 
                lista[j+1]=aux;  
            }
        }
    }

} // burbuja()

//función para comparar si la lista esta ordenada correctamente

bool estaOrdenada(int *lista, int cuantos) {
    for (int i = 0; i < cuantos - 1; i++) {
        if (lista[i] > lista[i + 1]) {
            return false; //si encontramos un elemento mayor que el siguiente, la lista no está ordenada
        }
    }
    return true; //si no encontramos ningún elemento fuera de orden, la lista está ordenada
}

//----------------------------------------------------
//----------------------------------------------------

int main()
{
    int cuantos = 10000;
    int lista[cuantos];
    int min = 0;   // Valor mínimo
    int max = 1000; // Valor máximo

    crearListaRandom(lista, cuantos, min, max);

// Imprime la lista de números aleatorios
    // for (int i = 0; i < cuantos; i++)
    // {
    //     std::cout << lista[i] << " ";
    // }

    auto start = std::chrono::high_resolution_clock::now(); // Inicio del cronómetro

    burbuja(&lista[0], cuantos); // llamamos a la funcion y almacenamos el resultado en la variable res

    //-----------------------------------------------------------------------------------------

    std::cout<<"\n";


    // Imprime la lista de números aleatorios
    for (int i = 0; i < cuantos; i++)
    {
        std::cout << lista[i] << " ";
    }

    std::cout<<"\n";

    auto end = std::chrono::high_resolution_clock::now(); // Fin del cronómetro

  
    
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
    
    std::chrono::duration<double> elapsed = end - start; // Calcula el tiempo transcurrido

    std::cout << "El tiempo transcurrido es: " << elapsed.count() << " segundos.\n"; // Muestra el tiempo transcurrido

    return 0;

} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
