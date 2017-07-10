#include <stdio.h>//creating an account for the employee
struct acc
{
	char name[100];
	char id[100];
};
void main(){
	printf("enter the id of the employee and add 'acc' afer the id\n");
	char id[100];
	scanf("%d",&id);
	
		struct acc e;
	FILE *p;
	p = fopen(id.txt,"r+");
	printf("enter name\n");
	scanf("%s",e.name);
	fprintf(id, "%s\n",e.name);
	fprintf(id,"%s\n",e.id);
	fclose(p);
}