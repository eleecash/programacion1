// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 22/10/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: La función quicksort() recibe una lista de números de tipo natural
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// [N] -> quicksort() -> [N]
// ------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

void crearListaRandom(int *lista, int cuantos, int min, int max)
{
    std::srand(static_cast<unsigned>(std::time(0)));

    for (int i = 0; i < cuantos; i++)
    {
        lista[i] = min + (std::rand() % (max - min + 1));
    }
}

//esta función intercambia los números
void intercambiar(int &a, int &b) //paso los numeros como punteros para que se cambien en la función donde llamamos a intercambiar
{
    int aux = a;
    a = b;
    b = aux;
}

//la funcion partición elige un pivote y lo coloca en su posición correcta
int particion(int *lista, int izquierda, int derecha)
{
    int pivote = lista[derecha]; //el pivote es el último elemento (podría ser cuaquiera pero he elegido el último)
    int i = (izquierda - 1); //i es un contador que empieza en la posición izquierda -1 y será el índice del elemento más pequeño

    for (int j = izquierda; j <= derecha - 1; j++) //recorre todos los elementos de la lista
    {
        if (lista[j] < pivote) //si el elemento es menor que el pivote
        {
            i++; //i cuenta el número de elementos menores que el pivote
            intercambiar(lista[i], lista[j]); //intercambiamos el elemento con el que está en la posición i (que es el más pequeño)
        }
    }
    intercambiar(lista[i + 1], lista[derecha]); //intercambiamos el pivote con el elemento que está en la posición i+1 porque es el más pequeño
    return (i + 1); //devolvemos la posición del pivote
}

void quicksort(int *lista, int izquierda, int derecha)
{
    if (izquierda < derecha) //si izquierda es menor que derecha hace quicksort (porque si izquierda = derecha es que solo tiene un elemento y por lo tanto ya están ordenados)
    {
        int indice_pivote = particion(&lista[0], izquierda, derecha); //el índice del pivote es la posición que devuelve la función partición
        quicksort(&lista[0], izquierda, indice_pivote - 1); //hace quicksort con la parte izquierda de la lista (que empieza en izquierda y acaba en el pivote -1)
        quicksort(&lista[0], indice_pivote + 1, derecha); //hace quicksort con la parte derecha de la lista (que empieza en el pivote +1 y acaba en derecha)
    }
}

bool estaOrdenada(int *lista, int cuantos) {
    for (int i = 0; i < cuantos - 1; i++) {
        if (lista[i] > lista[i + 1]) {
            return false; // Si encontramos un elemento mayor que el siguiente, la lista no está ordenada
        }
    }
    return true; // Si no encontramos ningún elemento fuera de orden, la lista está ordenada
}

int main()
{
    int cuantos = 100000;
    int lista[cuantos];
    int min = 0;
    int max = 1000;

    crearListaRandom(&lista[0], cuantos, min, max);

    auto start = std::chrono::high_resolution_clock::now();

    quicksort(&lista[0], 0, cuantos - 1); //a la función se le pasa la lista, donde empieza y donde acaba 

    // std::cout << "\n Lista ordenada:\n";
    // for (int i = 0; i < cuantos; i++)
    // {
    //     std::cout << lista[i] << " ";
    // }

    std::cout << "\n";
    
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
}
