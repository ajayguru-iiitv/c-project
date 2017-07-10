//this code creates a new partner hotel by creating a new database
/*the information we require is name location theme provided and current projects from our clients*/
#include <stdio.h>
#include <string.h>
struct emp
{
   char name[10];
   char location[10];
   char theme[10];
};

void main()
{
	char file_name[20];
	
	printf("enter the name of the partner\n");
	scanf("%s",file_name);
   struct emp e;
   FILE *p;
   p = fopen(file_name,"w+");
   
   printf("Enter Name\n");
   	scanf("%s",e.name);
   printf("Enter Location\n");
   	scanf("%s",e.location);
   printf("Enter theme\n");
   	scanf("%s",e.theme);
   fprintf(p,"%s \n %s \n %s\n", e.name, e.location, e.theme);
   fclose(p);
   }