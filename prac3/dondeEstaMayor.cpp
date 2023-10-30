// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 17/10/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: Diseña una función dondeEstaMayor() que reciba una lista de números enteros y devuelva la casilla de donde se encuenrra el mayor 
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// N, [R] -> dondeEstaMayor() -> N
// ------------------------------------------------
// Algoritmo
// ------------------------------------------------
// Datos de entrada: lista:[R], cuantos: N
// Datos de salida: N
// Devolver casilla > casilla[i]

#include <iostream>

int dondeEstaMayor(double *lista, int cuantos)
{
    double listaAlmacenar= lista[0];
    int casillaRes=0;
    
    for (int i = 0; i <= cuantos-1; i++) 
    {
        if(listaAlmacenar<lista[i]){

            listaAlmacenar=lista[i];
            casillaRes=i;
        }
    
    }
    
    return casillaRes;
    

} // dondeEstaMayor()

//----------------------------------------------------
//----------------------------------------------------

int main()
{
    int cuantos = 9;
    double lista[cuantos] = {1, 1, 2, 3, 5, 8, 13, 21, 34};
    double res = dondeEstaMayor(&lista[0], 9); // llamamos a la funcion y almacenamos el resultado en la variable res

    std::cout << "El resultado es " << res << "\n"; // se muestra el mensaje por pantalla

    // Prueba automática
    //---------------------------------------------------
    //---------------------------------------------------

    if (res != 8)
    {

        std::cout << "La función no va correctamente"; // se muestra el mensaje por pantalla
    }

} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
