#include <stdio.h>
struct emp
{
   char name[10];
   int age;
};

void main()
{
   struct emp e;
   FILE *p,*q;
   p = fopen("new1.txt", "w+");
   q = fopen("new2.txt", "w");
   printf("Enter Name and Age");
   scanf("%s %d", e.name, &e.age);
   fprintf(p,"%s %d", e.name, e.age);
   fclose(p);
   
  
}