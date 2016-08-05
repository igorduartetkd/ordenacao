
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void selectionSort(int *vetor, int tamanho){
	int menor, auxiliar;
	
	for(int i = 0; i<tamanho; i++){
		menor = i	;
		for(int j = i+1; j<tamanho; j++){
			if(vetor[j] < vetor[menor]){
				menor = j;
			}
		}
		//funçao troca
		auxiliar = vetor[i];
		vetor[i] = vetor[menor];
		vetor[menor] = auxiliar;
	}
}

int main(){
	int vetor[] = {5, 10, 3, 4, 1};
	
	selectionSort(vetor, 5);

	for(int i = 0; i<5; i++){
		printf("%d, ", vetor[i]);
	}
}


