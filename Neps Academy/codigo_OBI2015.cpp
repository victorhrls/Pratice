#include <iostream>


#define MAX 10000

using namespace std;

// uma soluçao é usar PILHA
int seq[MAX];

int main(){
	
	int tamanho;
	
	cin >> tamanho;

	for (int i =0;i<tamanho;i++){
        cin >> seq[i];
		}

    int contagem = 0;
	
	for (int j = 0; j<tamanho-2; j ++){

		
        if(seq[j] == 1 and seq[j+1] ==0 and seq [j+2]==0){
            contagem++;
                
        
}

}
    cout << contagem << endl;
    return 0;

}