
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
};

void main()
{   int select_a;
   char file_name[20];
   printf("press 1 to add employee \npress 2 to view employee");
   scanf("%d",&select_a);

   printf("enter id\n");
   scanf("%s",file_name);
   struct emp e;
   FILE *p;
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
   fprintf(p,"%s\n%s\n%s\n%s\n%s\n%s\n", e.name, e.id, e.insal, e.experience, e.accnum,e.password);
   fclose(p);
    p = fopen(file_name,"r+");
    printf("%s\n",e.name);
    printf("%s\n",e.id);
    fclose(p);
   }