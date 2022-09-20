#include <iostream>
#include <algorithm>


#define MAX 10005

using namespace std;

//Imprimir a fita quadriculada na entrada

int smallest(int x,int y,int z){
    return std::min({x,y,z});
} 

int main(){

    int N; //numero de quadrados da fita
    int total;
    int fita[MAX],valor_e=0,valor_d=0;

    cin >> N;

    for(int i =0;i<N;i++) {
        cin >> fita[i];  //adiciona os numeros na fita
        //Primeiro vamos trocar todos os -1 por 10
        if(fita[i]==-1) fita[i] = 10;
    }

    //percorrer da esquerda para a direita , já alterando os valores 
    //comparando com o zero mais próximo a esquerda

    for(int i = 1;i<N;i++){
        fita[i] = smallest(9,fita[i-1]+1,fita[i]);
    }

    //fazendo o analogo começando do penultimo numero

    for(int i = N-2;i>=0;i--){
        fita[i] = smallest(9,fita[i+1] +1,fita[i]);
    }


    for(int i = 0;i<N;i++){
        cout << fita[i] << " ";
    }




    

    return 0;

}
