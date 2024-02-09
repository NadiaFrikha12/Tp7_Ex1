//Ecrire ne procédure void chargement(int *, int t[]) permettant de saisir un entier 5<=n<=20 
//et de charger un tableau t par n entiers,
//Ecrire ne procédure void affichage (int, int t[]) permettant d’afficher le éléments de t,
//Le programme principal déclarant n et un tableau statique d’entiers t[20] et d’appeler les deux
//procédures chargement et affichage.
#include<stdio.h>
#include<stdlib.h>

int main(){
	//declaration des fonctions 
	void chargement(int *, int t[]);
	void affichage (int, int t[]);
	int n,t[20]; 
	chargement(&n,t);
	affichage (n,t);
	
	return 0;
}

void chargement(int *p, int t[20]){
	do{
		printf("donner n: ");
		scanf("%d",p);
	}while ((*p<5)||(*p>20));
	
	for(int i=0; i<*p;i++){
		printf("\ndonner t[%d]:",i);
		scanf("%d",&t[i]);
	}	
}

void affichage (int n, int t[20]){
	for (int i=0;i<n;i++){
		printf("t[%d]=%d\n",i,t[i]);
	}
}
