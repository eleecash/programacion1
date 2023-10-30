// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 30/10/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: Diseña una función que dados a,b y n >=2, copie en un array los n primeros valores de esta sucesión:
// a, b, a+b, (a+b)+b,(a+b+b)+(a+b),...
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// N:a, N:b, N:n -> sucesion() -> [N]
// ------------------------------------------------

#include <iostream>

void sucesion (int n, int a, int b){
 
  int lista[n]={}; //declaramos un array de n posiciones
    lista[0]=a; //la primera posición del array es igual a a
    lista[1]=b; //la segunda posición del array es igual a b
    for (int i = 2; i < n; i++) //recorremos el array desde la posición 2 hasta la posición n
    {
        lista[i]= a+b; //la posición i del array es 5
        a= b; // a ahora vale 3
        b= lista[i]; // b ahora vale 5 y así sucesivamente 
    }

} // sucesion()

int main(){

    int n = 7;
    int a = 2;
    int b = 3;

    sucesion(n, a, b); 
    
    //se muestra el mensaje por pantalla
    std::cout << "Los" << n << "primeros números de la sucesión son: " << "\n"; 
    for (int i = 0; i < n; i++) 
    {
        std::cout << "\n"; 
    }
    // Prueba automática
        //---------------------------------------------------
        //---------------------------------------------------

        int sucesivamente[2]= {2, 0}; //declaramos un array de dos posiciones y le damos valores que darían como resultado 
        int lista[i]; 
        for (int i = 0; i < 2; i++) //recorremos el array
        {
            if (lista[i] != sucesivamente[i]) //si el valor de la posición i del array pr es diferente al valor de la posición i del array listares
            {
                std::cout << "La función no va correctamente"; //se muestra el mensaje por pantalla
            }
        }


} // main()

