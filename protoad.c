#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void add_employee(select);
void fire_employee(select);
void add_partner(select);
void remove_partner(select);
void add_project(select);
void remove_project(select);
void view_employee(select);
void pay_salary(select);

//structure of the employee file 
struct emp
{
   char name[10];
   char id[9];
   char insal[10];
   char experience[2];
   char accnum[10];
   char password[12];
};

//structure of the partner
struct par
{
	
   char name[10];
   char location[10];
   char theme[10];
};
int main(){
	struct emp e;
	int x;
	printf("\t\t\t\t\tWelcome Admin\n");
	printf("\n\n\n\n");
	printf("input the options to enter");
	printf("\t1. add employee\n");
	printf("\t2. fire employee\n");
	printf("\t3. add partner\n");
	printf("\t4. remove partner\n");
	printf("\t5. view employee\n");
	printf("\t6. pay salary\n");
	scanf("%d",&x);
	switch (x){
		case 1:
				add_employee(select);

				break;
		case 2:
				fire_employee(select);

				break;
		case 3:
				add_partner(select);

				break;
		case 4: 
				remove_partner(select);

				break;
		case 5:
				view_employee(select);
				break;
		case 6:
				pay_salary(select);
				break;

	}
	return 0;
}

//function to add employee
void add_employee(int x){
	char file_name[20];
   
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
}

//function to fire employee
void fire_employee(select){
	FILE *idy,*his;
	int status;
	printf("enter the id you want to fire\n");
	char id[100],ch;
	scanf("%s",&id);
	idy = fopen(id,"r");
	his = fopen("history.txt","w");
	while(!feof(idy)){
		fscanf(idy,"%c",&ch);
		fprintf(his,"%c",ch);
	}
	printf("record added\n");
	fclose(idy);
	fclose(his);
	status = remove(id);
	if(status == 0){
		printf("the employee has been fired\nhis accounts are now transferred to the trash file");
	}
	else if(status == 1){
		printf("there seems some error\ncouldn't fire employee");
	}
}

//function to add partner 
void add_partner{

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

//function to add remove partner
void remove_partner{

}

//function to delete the project
void main(){
	int status;
	printf("enter the project you want to delete\n");
	char pname[100];
	gets(pname);
	status = remove(pname);
	if(status == 0){
		printf("the project has been deleted\n");
	}
	else if(status == 1){
		printf("error\n");
	}
}
//function to view employee
void 
