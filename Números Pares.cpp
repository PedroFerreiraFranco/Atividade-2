#include <stdio.h>

int main(){
	int cont=1,num=0;
	
	while (num>=1 && num <=100){
		num+=2;
		cont++;
		printf("%d\n",num);
	}
	return 0;
}
