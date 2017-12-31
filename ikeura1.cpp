////


#include<stdio.h>

int main(void){
	
	int i,n;
	int m=1;
	int a=10;
	int b=10;

	for(i=0;i<a;i++){

		for(n=1;n<b;n++){
			printf(" ");
		}
		printf("*");
		for(n=1;n<m;n++){
			printf("**");
		}
		m++;
		b--;
		printf("\n");
	}
}
