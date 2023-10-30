// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 24/10/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: -hacer una función que reciba un año y nos diga si es bisiesto o no.
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// <R> -> bisiesto() -> v/F
// ------------------------------------------------
// Algoritmo
// ------------------------------------------------
// Datos de entrada: R:ano
// Datos de salida: v/F
// Devolver 

#include <iostream>

bool bisiesto(int ano)
{
    if(ano % 4==0){

        return true;
    }
    else return false; 

} // bisiesto()

//---------------------------------------------------
//---------------------------------------------------

int main()
{

    int ano=2020;
    bool res = bisiesto(2020); // llamamos a la funcion y almacenamos el resultado en la variable res

    // se muestra el mensaje por pantalla

    if (res == true)
  {

    std::cout << "El año "<< ano << " es bisiesto"<< "\n";
  }

  else
  {

    std::cout << "El año "<< ano << " NO es bisiesto"<< "\n";
  }


    // Prueba automática
    //---------------------------------------------------
    //---------------------------------------------------

    if (res != true)
    {

        std::cout << "La función no va correctamente"; // se muestra el mensaje por pantalla
    }


} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
