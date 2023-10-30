// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 24/10/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: -hacer una función donde le pasemos analista de números enteros y dos números y
// nos devuelva otra lista donde se cambien todos las apariciones del primer número por el segundo
// (manteniendo su posición).
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// [N] -> apariciones() -> [N]
// ------------------------------------------------

#include <iostream>

void apariciones(int *lista, int cuantos, int x, int y, int *listaVacia)
{
    for (int i = 0; i < cuantos ; i++)
    {
        if(lista[i]==x){

            listaVacia[i]=y;
        }

        else{

            listaVacia[i]=lista[i]; //pone los valores de lista[i] en listaRes[i] mientras no sea x=3 
        }

    }


} // apariciones()

//----------------------------------------------------
//----------------------------------------------------

int main()
{
    int cuantos = 5;
    int x = 2;
    int y = 3;
    int listaVacia[cuantos];
    int lista[cuantos] = {1, 2, 3, 4, 5};

    apariciones(&lista[0], cuantos, x, y, &listaVacia[0]); //llamamos a la funcion y almacenamos el resultado en la variable res

    // Imprime la lista de números aleatorios
    for (int i = 0; i < cuantos; i++)
    {
        std::cout << listaVacia[i] << " ";
    }
    
    std::cout << "\n";

    // Prueba automática
    //---------------------------------------------------
    //---------------------------------------------------

    int cambiada[cuantos]={1,2,3,4,3};
    for(int i=0; i<cuantos; i++){
        if(listaVacia[i]!=cambiada[i]){
            std::cout << "La función no va correctamente";
            
        }
    }


} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
