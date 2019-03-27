#include <iostream>

using namespace std;

bool sonAmigos(int n1,int n2);
int sumaDivisores(int numero);

int main(){

    if(sonAmigos(284,220)){
        cout<<"Son amigos"<<endl;
    }
    else{
        cout<<"NO son amigos"<<endl;
    }
    return 0;
}

bool sonAmigos(int n1,int n2){
    if(sumaDivisores(n1) == n2 && sumaDivisores(n2)==n1){
        return true;
    }
    else{
        return false;
    }
}

int sumaDivisores(int numero){
    /** 10 -> 1 2 3 4 5 6 7 8 9 **/
    int acumulador = 0;
    for(int i=1;i<=numero/2;i++){
        if(numero%i==0){
            acumulador = acumulador + i;
        }
    }
    return acumulador;
}
