#include <stdio.h>

int main(){
	
	int senha=2002,num;
	
	while(num!=senha){	
	scanf("%d",&num);
	if(num!=senha){
		printf("Senha Invalida\n");
			
			}
	else
		printf("Acesso Permitido\n");
	}
	return 0;
}


