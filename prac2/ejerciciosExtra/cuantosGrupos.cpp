// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 28/09/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: ¿Cuántos grupos de 5 se pueden hacer?
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// <N>,<N> -> cuantosGrupos() -> <N>
// ------------------------------------------------
// Algoritmo
// ------------------------------------------------
// Datos de entrada: alumnos:N, condición:N
// Datos de salida: N
// Devolver alumnos/5=cantidad de grupos de 5 que puede haber

#include <iostream>
int cuantosGrupos(int alumnos, int condicion)
{
    return alumnos / condicion;

} // cuantosGrupos()

//---------------------------------------------------
//---------------------------------------------------

int main()
{

    // int alumnos = 45;
    // int condicion= 5;
    int res = cuantosGrupos(45, 5); // llamamos a la funcion y almacenamos el resultado en la variable res

    std::cout << "El resultado es " << res << "\n"; // se muestra el mensaje por pantalla

    // Prueba automática
    //---------------------------------------------------
    //---------------------------------------------------

    if (res != 9)
    {
        std::cout << "La función no va correctamente"; // se muestra el mensaje por pantalla
    }

} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
