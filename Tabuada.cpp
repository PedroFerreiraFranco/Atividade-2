#include <stdio.h>

int main(){
	
	int num,mult,cont=1;
	
	scanf("%d",&num);
	if(num>2&&num<1000){
	do{
	mult = cont*num;
	printf("%d x %d = %d\n",cont, num, mult);
	cont++;
}while(cont<=10);
}
	
}
