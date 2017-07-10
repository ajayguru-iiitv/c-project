//view
#include <stdio.h>
struct acc
{
	char name[100];
	char id[100];
};
int main(){
	char ida[100];
	printf("enter ida\n");
	FILE *p;
 p=fopen(ida,"r");
while(!feof(p)){
		fscanf(ida,"%c",&ch);
		printf("%c",ch);
	}
	fclose(p);
}