
#include <stdio.h>
#include <string.h>
struct emp
{
   char name[10];
   char id[9];
   char insal[10];
   char experience[2];
   char accnum[10];
   char password[12];
   char rating[2];
};

int main()
{  struct emp e; 
     FILE *p;
     FILE *q;
     FILE *r;
  int select_a;
   char file_name[100];
   printf("press 1 to add employee \npress 2 to view employee");
   scanf("%d",&select_a);
   switch(select_a){
case 1:
   printf("enter id\n");
   scanf("%s",file_name);
   

   p = fopen(file_name,"w+");
   
   printf("Enter Name\n");
      scanf("%s",e.name);
   printf("Enter id\n");
      scanf("%s",e.id);
   printf("Enter initial salary\n");
      scanf("%s",e.insal);
   printf("enter experience\n");
      scanf("%d",e.experience);
   printf("enter account number\n");
      scanf("%s",e.accnum);
   printf("enter password\n");
      scanf("%s",e.password);
    printf("enter rating\n");
      scanf("%s",e.rating);
   fprintf(p,"%s\n%s\n%s\n%s\n%s\n%s\n%s", e.name, e.id, e.insal, e.experience, e.accnum,e.password,e.rating);
   fclose(p);
   break;
case 2:
     printf("enter id\n");
   scanf("%s",file_name);
   q= fopen(file_name,"a+");
    printf("%s\n",e.name);
    printf("%s\n",e.id);
    fclose(q);
    break;
case 3:
r=fopen(file_name.txt,"r");
int temp;
temp = fscanf("%s",e.rating);
break;
  }
    return 0;
   }