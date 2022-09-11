#include <iostream>
#define MAX 10

using namespace std;

//Imprimir a fita quadriculada na entrada

int main(){

    int N; //numero de quadrados da fita
    int total;
    int fita[MAX],valor_e=0,valor_d=0;

    cin >> N;

    for(int i =0;i<N;i++) {
        cin >> fita[i];  //adiciona os numeros na fita

    }

    /*for(int p=0;p<N;p++){
        cout <<  "O valor do termo" << p<< " é" <<  " " << fita[p]<< endl;
    }*/

    for(int j=0;j<N;j++){
        if(fita[j]==-1){
            //Devo procurar o 0 mais proximo
            valor_d =0;
            valor_e =0;
            total =0;
            for(int k=j+1;j<N-1;j++){
                //direita
                if(fita[k]!=0){
                    valor_d++;
                }else{
                    valor_d++;
                    break; //achou
                }
                cout << "O valor a direita é = " << valor_d<<endl;
            for(int m=j-1;j>=0;j--){

                if(fita[m]!=0){
                    valor_e++;
                }else{
                    valor_e++;
                    break; // achou
                }
                cout << "O valor a esquerda é = " << valor_e<<endl;
            }
        
        
                
               

            //pegar o menor valor
            if(valor_d>=valor_e){
                total = valor_e;
            }else{
                total = valor_d;
            }
            //Valor maior q 9
            if(total >=9){
                total = 9;
            }

            cout << total << " ";


        }
        }else{
            cout << 0 << " ";  // se o valor for zero, imprime direto
        }

    }

    return 0;

}
