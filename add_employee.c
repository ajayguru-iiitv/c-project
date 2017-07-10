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
   char project[20];
};

void main()
{
   char file_name[20];
   
   printf("enter id\n");
   scanf("%s",file_name);
   struct emp e;
   FILE *p;
   p = fopen(file_name,"a");
   
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
   fprintf(p,"%s\n%s\n%s\n%s\n%s\n%s\n", e.name, e.id, e.insal, e.experience, e.accnum,e.password);
   fclose(p);
   printf("press 1 to change name\n");
   int a;
   scanf("%d",&a);
   switch (a){
      case 1:
      printf("");
      FILE *q;
      printf("enter new name\n");
      char new_name[100];
      scanf("%s",&new_name);
      strcpy(e.name,new_name);
      fprintf(p,"%s\n",e.name);
       fclose(q);
      break;
   }
  
   }