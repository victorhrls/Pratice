

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

    // percorrer as linhas 

    for(int i =0;i<N;i++){
        for(int j=0;j<N;j++){
            soma_l += quadrado[i][j] ;
            soma_c += quadrado[j][i];
        }
    }

    for (int i =0;i<N;i++){
        soma_d += quadrado[i][i]; // principal
        soma_d2 += quadrado[i][N-1-i];
    }

    soma_l = soma_l/3;
    soma_c = soma_c/3;

    total = soma_l;


    //basta comparar
    cout << "Soma das linhas = " << soma_l << endl;
    cout << "Soma das colunas = " << soma_c << endl;
    cout << "Soma da diagonal principal = " << soma_d << endl;
    cout << "Soma da diagonal secundária = " << soma_d2 << endl;

    
    if( soma_l == soma_c == soma_d == soma_d2){
        cout << "entrou aqui" << endl;
        cout << soma_d << endl;
    }else{
        cout << "-1" << endl;
    } 

    
    return 0;
}