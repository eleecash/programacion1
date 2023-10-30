// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 24/10/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: hacer una funcion y que nos diga si es capicua o no 
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// [N] -> capicua() -> [N]
// ------------------------------------------------

#include <iostream>

bool capicua(int *lista, int cuantos)
{
    for (int i = 0; i <= cuantos-1; i++)
    {
            if(lista[i]!=lista[cuantos-1-i]){ 

                return false;
            }
        

        return true; 
    }

    

} // capicua()

//----------------------------------------------------
//----------------------------------------------------

int main()
{
    int cuantos = 4;
    int lista[cuantos] = {1, 2, 2, 1};

    bool res= capicua(&lista[0], cuantos ); //llamamos a la funcion y almacenamos el resultado en la variable res

    std::cout<<res; 

   

    // Prueba automática
    //---------------------------------------------------
    //---------------------------------------------------

    if (res!=true)
    {
       std::cout<<"La función no funciona correctamente"; 
    }
    


} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
