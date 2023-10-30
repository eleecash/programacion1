// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 13/09/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: La función porTres() recibe un número real y devuelve el resultado de multiplicarlo por tres.
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// <R> -> porTres() -> <R>
// ------------------------------------------------
// Algoritmo
// ------------------------------------------------
// Datos de entrada: a : R
// Datos de salida: R
// Devolver a · 3

#include <iostream>

double porTres(double a, double b)
{

   return (b-a)*(b-a);
   // esta función multiplica el número por 3 sea cual sea el valor de a

} // porTres()

//----------------------------------------------------
//----------------------------------------------------

int main()
{

   // int a= 9; //el numero que queremos que sea multiplicado por tres
   double res = porTres(6,5); // llamamos a la funcion y almacenamos el resultado en la variable res

   std::cout << "El resultado es " << res << "\n"; // se muestra el mensaje por pantalla

   // Prueba automática
   //---------------------------------------------------
   //---------------------------------------------------

   if (res != 27)
   {

      std::cout << "La función no va correctamente"; // se muestra el mensaje por pantalla
   }

} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
