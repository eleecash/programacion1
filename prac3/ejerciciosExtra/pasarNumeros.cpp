// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 24/10/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: hacer una función que se le pasen dos números enteros y devolver 
// una lista con todos los números desde el menor hasta el mayor (ambos incluidos).
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// N:n, N:s-> pasarNumeros() -> [N]
// ------------------------------------------------

#include <iostream>

void pasarNumeros(int n, int s, int *listaRes)
{
   
    for (int i = n; i <=s; i++)
    {
        listaRes[i]= i;
    } 
    

} // pasarNumeros()

//----------------------------------------------------
//----------------------------------------------------

int main()
{ 
    int s=6;
    int n=3;
    int listaRes[s];
    pasarNumeros(3, 6, &listaRes[0]); // llamamos a la funcion y almacenamos el resultado en la variable res

    //  std::cout << "El resultado es " << res << "\n"; // se muestra el mensaje por pantalla
    
    // Imprime la lista de números aleatorios
    for (int i = n; i <=s; i++)
    {
        std::cout << listaRes[i] << " ";
    }

    return 0;


    // Prueba automática
    //---------------------------------------------------
    //---------------------------------------------------

    // if (res != true)
    // {
    //     std::cout << "La función no va correctamente"; // se muestra el mensaje por pantalla
    // }

} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
