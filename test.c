//code to print out details of the employee
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct emp
{
   char name[10];
   char id[9];
   char insal[10];
   char experience[2];
   char accnum[10];
   char password[12];
};
void main(){
	struct emp e;
	char id;
	
	printf("enter the id of the employee you want to view");
	scanf("%s",id);
	//here will be a search code in the database files which will tell if the employee exists or not
	//if the employee exists then the result will be printed 
	FILE *p;
	p=fopen(id,"r");
	//fscanf(""); a universal structure on which the file is built will work with fscanf()
	
	printf("%s",e.name);


}