#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct emp
{
   char name[10];
   char id[9];
   char insal[10];
   char experience[2];
   char accnum[10];
   char password[12];
};
int main(){
	struct emp e;
	FILE *p;
	char a[255],id[10];
	printf("enter the id you want to read \n");
	scanf("%s",id);
    p = fopen(id,"a+");
    printf("%s\n",e.name);
    fclose(p);
}