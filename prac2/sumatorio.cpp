// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 14/09/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: . La función sumatorio() recibe un número natural n y devuelve la suma 1 + 2 + 3 + · · · + n.
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// <N> -> sumatorio() -> <N>
// ------------------------------------------------
// Algoritmo
// ------------------------------------------------
// Datos de entrada: a : N
// Datos de salida: N
// Devolver n·(n+1)/2

#include <iostream>

int sumatorio(int a)
{

   return a * (a + 1) / 2; // esta función calcula esta formula y te devuelve el resultado

} // sumatorio()

//-------------------------------------------------
//-------------------------------------------------

int main()
{

   int a = 9;              // el numero del que queremos saber su sumatorio
   int res = sumatorio(a); // llamamos a la funcion y almacenamos el resultado en la variable res

   std::cout << "El resultado es " << res << "\n"; // se muestra el mensaje por pantalla

   // Prueba automática
   //---------------------------------------------------
   //---------------------------------------------------

   if (res != 45)
   {
      std::cout << "La función no funciona correctamente"; // se muestra el mensaje por pantalla
   }

} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------