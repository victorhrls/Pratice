#include <iostream>

using namespace std;


int main(){
    int N,elemento;
	int maior = 0; // pontuacao
	int atual ;  // numero atual
	int anterior =0;
	int aux = 0; // pontuacao anterior
	cin >> N;
	
	for (int i =0 ; i<N;i++)
	{
		cin >> elemento;
		atual = elemento;
		
		if ( atual == anterior)
		{
			maior +=1;
		}else{
			if(maior > aux){
			aux = maior;  // guardo o maior elemento
			maior = 1;
			}
		}
		
		anterior = atual;
		
		if(i == N-1){
			if (aux > maior){
				maior = aux;
			}
		}
	}

	cout << maior +1  << endl;
    return 0;
}