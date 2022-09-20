

#include <iostream>

#define MAX 11

using namespace std;



int main(){

    int quadrado[MAX][MAX],N;

    int aux;

    cin >> N; // quantas linhas/colunas será

    for(int i =0;i<N;i++){
        for(int j =0;j<N;j++){

            cin >> quadrado[i][j]; // declara as variaveis da matriz

        }
    }

    int soma_l=0,soma_c=0,soma_d=0,soma_d2 =0 ;
    int total;

    //linhas

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            soma_l += quadrado[i][j];
            soma_c += quadrado[j][i];
        }
    }

    cout << "Soma das linhas " << soma_l << endl; 
    cout << "Soma das colunas " << soma_c << endl;
    
    return 0;
}