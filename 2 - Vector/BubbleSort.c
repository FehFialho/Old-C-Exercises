// Lesson 29 - (04/29/2025)
#include <stdio.h>

int main(){ // Bubble Sort!
	int vetor[5] = {5,4,3,2,1};
	int aux;
	
	for(int i = 0; i <5; i++){ // Iterate through all indices.
		for(int j = 0; j < 4; j++) { // Compare adjacent indices.
			if(vetor[j] > vetor[j+1] ){
				aux = vetor[j];
				vetor[j]= vetor[j+1];
				vetor[j+1] = aux;
			}
		}
	}
	
	for(int i=0; i<5;i++){
		printf("%d", vetor[i]);
	}
	
}