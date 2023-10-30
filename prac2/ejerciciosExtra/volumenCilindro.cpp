// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 27/09/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: Función que calcule el volumen de un cilindro.
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// radio:<R>, altura:<R> -> volumenCilindro() -> <R>
// ------------------------------------------------
// Algoritmo
// ------------------------------------------------
// Datos de entrada: r:R, h:R
// Datos de salida: R
// Devolver pi * r^2 * h

#include <iostream>
#include <math.h> //añadimos la libreria math.h para usar sus herramientas, en nuestro caso elevado (pow)

double volumenCilindro(double h, double r)
{
    double pi = M_PI;
    return pi * pow(r, 2) * h; // formula para calcular el volumen de un cilindro

} // volumenCilindro()

//-------------------------------------------------
//-------------------------------------------------

int main()
{

    // double r = 9;
    // double h= 2;
    double res = volumenCilindro(2, 9); // llamamos a la funcion y almacenamos el resultado en la variable res

    std::cout << "El resultado es " << res << "\n"; // se muestra el mensaje por pantalla

    // Prueba automática
    //---------------------------------------------------
    //---------------------------------------------------

    if (res != 508)
    {
        std::cout << "La función no va correctamente"; // se muestra el mensaje por pantalla
    }

} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
