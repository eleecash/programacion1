// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 17/10/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: Diseña, escribe su algoritmo e implementa una función llamada filtrar()
// que, dada una lista de números reales, devuelva otra lista sólo con los valores positivos de la primera lista.
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// [R] -> filtrar() -> [R]
// ------------------------------------------------
// Algoritmo
// ------------------------------------------------
// Datos de entrada: lista:[N], cuantos: N
// Datos de salida: N
// Devolver sumatorio de lista

#include <iostream>

double filtrar(double *lista, int cuantos, double *listaRes, int total)
{

    for (int i = 0; i <= cuantos - 1; i++)
    {

        if (lista[i] > 0)
        {

            listaRes[total] = lista[i];
            total++;
        }
    }

    return total;

} // filtrar()

//----------------------------------------------------
//----------------------------------------------------

int main()
{
    int total = 0;
    int cuantos = 5;
    double listaRes[0];
    double lista[cuantos] = {1, 1, -5, 2, -4};
    total = filtrar(&lista[0], cuantos, &listaRes[0], total); // la funcion no devyuelve nada por eso no se almacena en ninguna variable y solo se hace la

    // Prueba automática
    //---------------------------------------------------
    //---------------------------------------------------

    int listaPos[3] = {1, 1, 2};

    for (int i = 0; i <= total - 1; i++)
    {
        std::cout << listaRes[i]<<"";

        if (listaRes[i] != listaPos[i])
        {
            std::cout << "ESTA MAL";
        }
    }

} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
