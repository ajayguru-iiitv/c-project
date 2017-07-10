#include <stdio.h>
int main(){
	char ch;
	FILE *p;
	p = fopen("hotel.txt","r");
	while(!feof(p)){
		fscanf(p,"%c",&ch);
		printf("%c",ch);
	}
	return 0;
	
}
