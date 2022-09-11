#include <iostream>

#include <cmath>


using namespace std;


int main(){

    int N;

    cin >> N;

    int i;

    double valor;

    double matriz[10005];

    for (i=0;i<N;i++){
        cin >> valor;
        matriz[i] = valor;
        
    }

	for(int j=0;j<N;j++){
        double raiz;

        raiz = sqrt(matriz[j]);
        //cout.setf;
        cout.precision(4);
		cout << fixed << raiz << endl;
	}



    return 0;
}