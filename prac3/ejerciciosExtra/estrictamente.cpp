// ------------------------------------------------
// Autor: Elena Ruiz De La Blanca
// Fecha: 25/10/2023
// ------------------------------------------------
// ------------------------------------------------
// ENUNCIADO: -hacer una función que se le pasen dos listas y nos diga si la primera está estrictamente incluida en la segunda
// ------------------------------------------------
// Diseño
// ------------------------------------------------
// -> estrictamente() ->
// ------------------------------------------------
#include <iostream>
using namespace std;

bool listaIncluida(int *lista, int tam, int *lista2, int tam2){
    for(int i=0; i<=tam2-tam; i++){ 
        bool encontrado = true;
        for(int j=0; j<tam; j++){
            if(lista[j]!=lista2[i+j]){
                encontrado = false;
                break;
            }
        }
        if(encontrado){
            return true;
        }
    }
    return false;
}

int main(){
    int tam=3;
    int lista[tam]={2,3,4};
    int tam2=5;
    int lista2[tam2]={1,2,3,4,5};
    bool res = listaIncluida(&lista[0],tam,&lista2[0],tam2);

    cout << "Las lista 2,5,4 ";
    if (res != true){ 
        cout << "no está incluida"; 
    }
    else{ 
        cout << "está incluida";
    }

    //prueba automatica --------------

    if(res!=false){
        cout << "ESTA MAL";
    }

    int lista3[tam]={2,3,4};
    res = listaIncluida(&lista3[0],tam,&lista2[0],tam2);

    cout << "\nLas lista 2,3,4 ";
    if (res != true){ 
        cout << "no está incluida"; 
    }
    else{ 
        cout << "está incluida";
    }

    //prueba automatica --------------

    if(res!=true){
        cout << "ESTA MAL";
    }
}