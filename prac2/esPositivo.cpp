// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 13/09/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: La función esPositivo() recibe un número entero y devuelve verdadero si es mayor o igual que cero; o falso en caso contrario
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// <Z> -> esPositivo() -> <V/F>
// ------------------------------------------------
// Algoritmo
// ------------------------------------------------
// Datos de entrada: a : Z
// Datos de salida:  V/F
// Devolver si a>=0 devolver Verdadero o Falso

#include <iostream>

bool esPositivo(int a)
{

  if (a >= 0)
  {

    return true;
  }

  else
  {

    return false;
  }

} // esPositivo()

//---------------------------------------------------
//---------------------------------------------------

int main()
{

  int a = 9;                // el numero que queremos saber si es positivo o negativo
  bool res = esPositivo(a); // llamamos a la funcion y almacenamos el resultado en la variable res

  if (res == true)
  {

    std::cout << "Es positivo"
              << "\n";
  }

  else
  {

    std::cout << "Es negativo"
              << "\n";
  }

  // Prueba automática
  //---------------------------------------------------
  //---------------------------------------------------

  if (res != true)
  {

    std::cout << "La función no funciona correctamente"; // se muestra el mensaje por pantalla
  }

} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
