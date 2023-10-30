// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 14/09/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: . La función sumatorio() recibe un número natural n y devuelve la suma 1 + 2 + 3 + · · · + n.
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// <N> -> sumatorioPares() -> <N>
// ------------------------------------------------
// Algoritmo
// ------------------------------------------------
// Datos de entrada: a : N
// Datos de salida: N
// Devolver res=0
// a->
// total=total+i

#include <iostream>

int sumatorioPares(int a)
{

  int total = 0; // inicializamos un total donde vamos a almacenar el resultado de la suma

  for (int i = 0; i <= a; i = i + 2)
  { // este bucle se encarga de ir hasta el número de dos en dos (pares) sumandole a i dos para ello.

    total = total + i; // al total se le suma la cifra obtenida del bucle
  }
  return total; // se devuelve el total

} // sumatorioPares()

//----------------------------------------------------
//----------------------------------------------------

int main()
{

  int a = 9;                   // el numero del que queremos saber su sumatorio
  int res = sumatorioPares(a); // llamamos a la funcion y almacenamos el resultado en la variable res

  std::cout << "El resultado es " << res << "\n"; // se muestra el mensaje por pantalla

  // Prueba automática
  //---------------------------------------------------
  //---------------------------------------------------

  if (res != 20)
  {

    std::cout << "La función no va correctamente"; // se muestra el mensaje por pantalla
  }

} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
