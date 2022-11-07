#include <stdio.h>
#include <math.h>

void mediaDesv(float **vet, int n, int momento, float &media, float &desvio){
	media = 0;
	
	for (int i = 0; i < n; i++){
		media = media + vet[i][momento];
	}
	
	media = media / n;
	
	desvio = 0;

	for (int i = 0; i < n; i++){
		desvio = desvio + ((vet[i][momento] - media) * (vet[i][momento] - media));
	}
	
	desvio = sqrt(desvio / (n - 1));
	
	desvio = desvio * 2;
	media = media * 2;
}

