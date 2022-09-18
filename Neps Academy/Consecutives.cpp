#include <iostream>

using namespace std;

int main(){
    int N,seqAtual =1,seqMaior =1,num,anterior;

	cin >> N;

	for (int i =0;i<N;i++)
	{
		cin >> num;
		if(i>0){
			if(anterior == num) seqAtual++;
			if(anterior !=num || i == N-1){
				if(seqAtual > seqMaior) seqMaior = seqAtual;
				seqAtual = 1;
			}
		}

		anterior = num;
	}

	cout << seqMaior << endl;


    return 0;
}