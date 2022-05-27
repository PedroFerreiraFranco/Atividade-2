#include <stdio.h>
#include <stdlib.h>

int main(){
	int contm=0,cont=0;
	float num,soma,media;
	
	do{
		scanf("%f",&num);
		cont++;
			if(num>=0){
			soma+=num;
			contm++;
		}
	}while(cont<6);
	
	media = soma / contm;
	
	printf("%d valores positivos\n",contm);
	printf("%.1f\n",media);
	return 0;
}
