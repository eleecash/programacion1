//-hacer una función que se la pase un número entero n y nos devuelva los n primeros números de la serie de Fibonacci en una lista
//diseño: entero -> fibonacciLista() -> [enteros]
//0 1 1 2 3 5 8 13 21 34 55...
//ejemplo 0 1 0+1=1 1+1=2 1+2=3 2+3=5 3+5=8 5+8=13 8+13=21

#include <iostream>
using namespace std;

void fibonacciLista (int n, int *lista){
    int x=0;
    int y=1;
    lista[0]=x; 
    lista[1]=y; 
    for(int i=2; i<n; i++){
        lista[i]=x+y; //1=0+1 2=1+1 3=1+2 5=2+3 8=3+5 13=5+8 21=8+13 34=13+21
        x=y; //x=1 x=1 x=2 x=3 x=5 x=8 x=13 x=21
        y=lista[i]; //y=1 y=2 y=3 y=5 y=8 y=13 y=21 y=34
    }
}

int main(){
    int n=7;
    int lista[n];
    fibonacciLista(n,lista);
    
    cout << "Los " << n << " primeros numeros de la serie de fibonacci son: ";
    for(int i=0; i<n; i++){
        cout << lista[i] << " ";
    }

    cout << "\n";

    int fibonacci[n]={0,1,1,2,3,5,8};
    //prueba automatica
    for(int i=0; i<n; i++){
        if(lista[i]!=fibonacci[i]){
            cout << "ESTA MAL";
        }
    }
}

//como hago una raiz cubica 
