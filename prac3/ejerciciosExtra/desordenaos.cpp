//-hacer una función que se le pasen dos listas y nos diga si la primera está estrictamente incluida en la segunda
//diseño: [Z], [Z] -> listaIncluida() -> bool
//2,3,4
//1,2,3,4,5

#include <iostream>
using namespace std;

bool listaIncluida(int *lista, int tam, int *lista2, int tam2){
    for(int i=0; i<tam; i++){ 
        bool encontrado = false; //para que no se quede en true
        for(int j=0; j<tam2; j++){
            if(lista[i]==lista2[j]){ //si el elemento de la lista 1 es igual al elemento de la lista 2
                encontrado = true; //si lo encuentra
                break;// para que no siga buscando
            }
        }
        if(!encontrado){ //va cambiando si es true o false 
            return false; //si no lo encuentra
        }
    }
    return true;
}

int main(){
    int tam=3;
    int lista[tam]={2,3,4};
    int tam2=5;
    int lista2[tam2]={1,2,3,4,5};
    bool res = listaIncluida(&lista[0],tam,&lista2[0],tam2);

    cout << "Las lista ";
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