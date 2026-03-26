#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint(int min, int max) {
    return (rand() % (max - min + 1)) + min;
}

int main(){
	srand(time(NULL));

	printf("Entrez votre pari:\n");
		int pari;
		scanf("%d", &pari);
	
	printf("Entre votre chiffre(0-51):\n");
		int bet;
		scanf("%d", &bet);

	int chiffre = randint(0,51);
	printf("Le chiffre gagnant est:%d\n",chiffre);

	if (chiffre == bet) {
		pari = pari * 2;
		printf("Vous avez gagné, vous avez: %d crédits\n",pari);
	} else {
		printf("Perdu\n");
	};

	return 0;

}
