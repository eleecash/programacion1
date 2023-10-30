// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 24/10/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: hacer una función que se le pasen dos números enteros y devolver 
// una lista con todos los números desde el menor hasta el mayor (ambos incluidos).
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// [N]-> ordenarMayorMenor() -> [N]
// ------------------------------------------------

#include <iostream>

void listaOrdenada (int x, int y, int *lista){
    if (x>y){
        lista[0]=y;
        lista[1]=x;
    } else {
        lista[0]=x;
        lista[1]=y;
    }
}

int main(){
    int x=5;
    int y=3;
    int tam=2;
    int lista[tam];
    listaOrdenada(x,y,&lista[0]);
    
    cout << "La lista ordenada de x e y es: ";
    for(int i=0; i<tam; i++){
        cout << lista[i] << " ";
    }

    cout << "\n";

    int listaOrdenada[tam]={3,5};
    //prueba automatica
    for(int i=0; i<tam; i++){
        if(lista[i]!=listaOrdenada[i]){
            cout << "ESTA MAL";
        }
    }
}