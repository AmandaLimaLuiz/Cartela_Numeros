#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main() {
	int cartela[10];
	int achou[10];
	int quant;
	int i,j,a;

	
	printf("Insira o numero de cartelas a serem criadas: \n");
	scanf("%d",&quant);
	fflush(stdin);
	system("cls");
	srand(time(NULL));
	
	
	for(j=0;j<quant;j++){
	
		for(i = 0; i <10; i++){
			cartela[i] = rand()%99; 
			achou[i]=cartela[i];
		}		
			
		printf("\n");
		printf("Cartela %d : ",(j+1));
			
		for(i = 1; i <11; i++){
			if(achou[i]==cartela[0]){
				cartela[0]=rand()%99;
		}	}
			for(i = 2; i <11; i++){
			if(achou[i]==cartela[1]){
				cartela[1]=rand()%99;
		}	}
			for(i = 3; i <11; i++){
			if(achou[i]==cartela[2]){
				cartela[2]=rand()%99;
		}	}
			for(i = 4; i <11; i++){
			if(achou[i]==cartela[3]){
				cartela[3]=rand()%99;
		}	}
			for(i = 5; i <11; i++){
			if(achou[i]==cartela[4]){
				cartela[4]=rand()%99;
		}	}
			for(i = 6; i <11; i++){
			if(achou[i]==cartela[5]){
				cartela[5]=rand()%99;
		}	}
			for(i = 7; i <11; i++){
			if(achou[i]==cartela[6]){
				cartela[6]=rand()%99;
		}	}
			for(i = 8; i <11; i++){
			if(achou[i]==cartela[7]){
				cartela[7]=rand()%99;
		}	}
			for(i = 9; i <11; i++){
			if(achou[i]==cartela[8]){
				cartela[8]=rand()%99;
		}	}
			for(i = 10; i <11; i++){
			if(achou[i]==cartela[9]){
				cartela[9]=rand()%99;
			}
		
		}
		for(i = 0; i <10; i++){
			if(achou[i]==cartela[1]){
				cartela[1]=rand()%99;
		}	}
		for(i = 0; i <10; i++){
		printf("%d ", cartela[i]);	
		}
		printf("\n");
	}	
	printf("\n\n ======BOA SORTE!!!=======");  

	
	return 0;
}
