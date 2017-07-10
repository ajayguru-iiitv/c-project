#include <stdio.h>
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
	gets(e.id);
	FILE *p;
	p=fopen(e.id,"a+");
	printf("%s\n",e.name);
	getchar();
	return 0; 
}