// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 24/10/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: hacer una función de entrada que le pida al usuario un número hasta que el usuario introduzca un número positivo
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// <N> -> pedirNumero() -> <N>
// ------------------------------------------------

#include <iostream>


int pedirNumero(int usuario)
{
   
   while (usuario<0)
   {
    std::cout<<"INTRODUCE UN NÚMERO POSITIVO, HIJODEPUTA";
    std::cin>> usuario; 

   }
   
   return usuario;
    
    
}
// pedirNumero()

//---------------------------------------------------
//---------------------------------------------------

int main()
{
    int usuario;
    int res = pedirNumero(usuario);

    // Prueba automática
    //---------------------------------------------------
    //---------------------------------------------------

    if(res<0)
    {
       std::cout<<"la funcion va mal";  // se muestra el mensaje por pantalla
    }
   

    std::cout << "El número que has introducido es " << res << "\n"; // se muestra el mensaje por pantalla

} // main()

//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
//---------------------------------------------------
