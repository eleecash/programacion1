// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 28/09/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: Diseña una función que calcule el cociente y el resto de la división entera de dos números naturales a/b.
// Implementa la función en c++. Sin usar el operador de la división : /, en su lugar hay que realizar restas repetidamente.
// El puntero debe apuntar a un array de dos casillas donde escribiremos el resultado en la casilla 0 el cociente y en la casilla 1 el resto.
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// N:a, N:b -> combinatorio() -> [N:cociente, N:resto]
// ------------------------------------------------
// ------------------------------------------------

#include <iostream>

void dividir(int a, int b, int *pr)
{

    int cociente = 0; //inicializamos el cociente a cero
    int resto = 0;    //inicializamos el resto a cero
    int i = 0;        //inicializamos el contador a cero

    //utilizamos while porque no sabemos cuantas veces se va a repetir el bucle
    while (a >= b)
    {
        a = a - b;  //restamos a el valor de b
        cociente++; //sumamos uno al cociente si se cumple la condición de que a sea mayor o igual que b
    }
    resto = a;        //el resto es igual a a porque a es menor que b
    pr[0] = cociente; //guardamos el cociente en la primera posición del array
    pr[1] = resto;    //guardamos el resto en la segunda posición del array

} //dividir()
//---------------------------------------------------
//---------------------------------------------------
int main()
{
    
        int pr[2]; //declaramos un array de dos posiciones
    
        dividir(4, 2, &pr[0]); //llamamos a la función dividir y le pasamos los parámetros
    
        std::cout << "El cociente es " << pr[0] << "\n"; //se muestra el mensaje por pantalla
        std::cout << "El resto es " << pr[1] << "\n";    //se muestra el mensaje por pantalla
    
        // Prueba automática
        //---------------------------------------------------
        //---------------------------------------------------

        int listares[2]= {2, 0}; //declaramos un array de dos posiciones y le damos valores que darían como resultado 
        for (int i = 0; i < 2; i++) //recorremos el array
        {
            if (pr[i] != listares[i]) //si el valor de la posición i del array pr es diferente al valor de la posición i del array listares
            {
                std::cout << "La función no va correctamente"; //se muestra el mensaje por pantalla
            }
        }

} //main()