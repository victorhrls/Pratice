#include <iostream>

using namespace std;


#define MAX 51

int main(){

    int N ;

    cin >> N;  //celulas no tabuleiro

    int contador = 0;

    int tabuleiro[MAX];  //matriz do tabuleiro

    for (int i =0;i<N;i++){
        cin>> tabuleiro[i];  //define os 0 e 1's

    }   // definir tabuleiro

    cout << endl;
  
    for(int k =0;k<N;k++){  //vamos verificar em todo tabuleiro, devo começar com K=2

        // caso do inicio
        if(k==0){
           contador += tabuleiro[k] + tabuleiro[k+1] ;

           cout << contador << endl;

            contador = 0;
           continue;
            
        }
        if(k==N-1){
            contador += tabuleiro[k] + tabuleiro[k-1];
            cout << contador << endl;
            contador = 0;
            continue;
        }
        
        contador += tabuleiro[k-1] + tabuleiro[k] + tabuleiro[k+1];

        cout << contador << endl;

        contador = 0;



    

    }
 


    
    return 0;


    }

