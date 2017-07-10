#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char ch[100];
	FILE *p;
 p=fopen("hlist.txt","r+");
while(!feof(p)){
		fscanf(p,"%s",&ch);
		printf("%s",ch);
	}
	fclose(p);
	return 0;
}