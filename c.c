#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//file = employee.txt
/*saves every employees entry editable by admin*/
struct emp //structure of employee
{
	char name[10];
   char id[10];
   char insal[10];
   char experience[2];
   char accnum[10];
   char password[12];
   char project[20];
};
struct visit//structure of visitor
{
	char name[30];
	char gender[30];
	char age[30];//ek coupon dedo
	char location[100];
	char mail[30];
	char password[30];
	char phone[10];
};
struct pro //structure of project
{
	char name[100];
	char event[100];
	char venue[100];
	char mem1[100];
	char mem2[100];
	char mem3[100];
	char mem4[100];
	char mem5[100];
	char suggestion[1000];
	char rating[2];
};
struct partner
{
	char name[100];
	char locaiton[100];
	char theme[100];
	char about[1000];
};


void visitor();
void vhotel();
void signup();
	void add_project(char n[]);
void customer();
	void view_project(char n[]);
	void add_suggestion(char n[]);
void employee();
	void view_profile(char n[]);
	void edit_profile(char n[]);
void admin();
	void admin_employee(char n[]);
	void add_employee(char n[]);
	void curr_employee(char n[]);
		void view_employee(char n[]);
		void fire_employee(char n[]);
		void pay_salary(char n[]);
	void admin_customer();
		void view_customer(char n[]);
		void delete_customer(char n[]);
	void admin_partner(char n[]);
		void add_partner(char n[]);
		void view_partner(char n[]);
		void delete_partner(char n[]);
	void admin_project(char n[]);
		void delete_project(char n[]);
		void view_project(char n[]);
		void edit_project(char n[]);



int main(){
	int select;

	printf("\n\t\t\t============---Welcome to event management---============\n");
	printf("\n\n\n Enter choice to login as\n\n1. admin\n2. employee\n3. customer\n4. visitor\n5. about\n");
	scanf("%d",&select);
	switch (select){
		case 1:
        //admin();
       	admin();
		break;
		case 2:
        //Employee();
       employee();
		break;
		case 3:
		//customer();
		customer();
		case 4:
		visitor();
		break;
		case 5:
		puts("about");
		break;
	}
	return 0;
}
void visitor(){
	system("cls");
	int select,select1;
	//saving the names of people who visit the company
	printf("hi there !! tell us your name\n");
	char name[100];
	scanf("%s",name);
	FILE *p;
	p=fopen("visitorhistory.txt","a+");
	fprintf(p,"%s\n",name);
	fclose(p);
	printf("press 1 to veiws all the hotels \n\n interested in us press 2 to sign-up \n\n 3. Go Back\n\n");
	scanf("%d",&select1);
	switch(select1){
		case 1:
		{vhotel(name);
		break;}
		case 2:
		{signup(name);
		break;}
		case 3:
		{
			main();
		}
	}
}

//function to view hotel
void vhotel(char n[]){
	printf("\t%s\n\t these are the hotels you asked for\n",n);
	char ch;

	FILE *p;
 p=fopen("hotels.txt","r+");
while(!feof(p)){
		fscanf(p,"%c",&ch);
		printf("%c",ch);
	}
	fclose(p);
	printf("enter 1 to make a booking \nenter 2 to go to the main menu");
	int a,b;
	scanf("%d",&a);
	switch(a){
	case 1:
	system("cls");
	printf("enter your name to create a project\n");
	char name[100];
	scanf("%s",name);
	void add_project(name);
	break;
	case 2:
	system("cls");
	main();
}

}
/*function to store the data of a visitor in customer.txt*/
void signup(){
	FILE *p;
	p=fopen("customer.txt","a");
	struct visit v;
	printf("Enter Name\n");
      scanf("%s",v.name);
   printf("Are you a guy or a girl\n");
      scanf("%s",v.gender);
   printf("how old are you\n");
      scanf("%s",v.age);
   printf("enter your location\n");
      scanf("%s",v.location);
      fflush(stdin);
   printf("enter your email address\n");
      scanf("%s",v.mail);
   printf("enter password (max characters =)\n");
      scanf("%s",v.password);//check password
    printf("enter phone no.\n");//check length
      scanf("%s",v.phone);
   fwrite(&v,sizeof(v),1,p);
   fclose(p);
   visitor();
}
/*function to add a project in a database file which is project.txt*/
void add_project(char n[]){
	struct pro e;
	FILE *p;
	p = fopen("project.txt","a+");
	printf("enter the name of the customer\n");
	scanf("%s",e.name);
	printf("enter event name\n");
	scanf("%s",e.event);
	printf("enter the team members\n");
	scanf("%s %s %s %s %s",e.mem1,e.mem2,e.mem3,e.mem4,e.mem5);
	fseek(p,0,SEEK_END);
	fwrite(&e,sizeof(e),1,p);
	fclose(p);
}
/*function to view project*/
void customer(){
	printf("press 1 to view your project\npress 2 to give feed back\npress 3 to give rating");
	int select;
	scanf("%s",&select);
	switch(select){
		case 1:
		printf("enter the name of project file\n");
		char name[100];
		scanf("%s",name);
		view_project(name);
		break;
		case 2:
		add_suggestion(name);
		break;
	}
}

void view_project(char n[]){
	FILE *p;
	struct pro s;
	p = fopen("project.txt","r+");
	while(fread(&s,sizeof(s),1,p)==1)
    {
        if(n==s.name)
        {
        printf("\t\t%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s",s.name,s.event,s.venue,s.mem1,s.mem2,s.mem3,s.mem4,s.mem5);
        }
    }
    fclose(p);
}
//to add suggections in the project
void add_suggestion(char n[]){
	FILE *p;
	struct pro s;
	p = fopen("project.txt","r+");
	while(fread(&s,sizeof(s),1,p)==1)
    {
        if(n==s.name)
        {
        printf("format to add suggestion is from: your name to:member/team and then type your suggestion");
        scanf("%s",s.suggestion);
        }
    }
fclose(p);
}
void add_rating(char n[]){
FILE *p;
	struct pro s;
	p = fopen("project.txt","r+");
	while(fread(&s,sizeof(s),1,p)==1)
    {
        if(n==s.name)
        {
        	int n;
        	scanf("%d",&n);
        	switch(n){
        		printf("enter the rating (numer out of 100) only if the project is completed\nto goto main menu press 2");
        case 1:

        scanf("%s",s.rating);
        break;
        case 2:
        main();
    	}
        }
    }
fclose(p);
}
//code for employee 
void employee(){
	printf("press 1 to view your profile \n2. change your profile\n3. view project\n4. update project");
	int select;
	scanf("%d",&select);
	switch(select){
		case 1:
		printf("enter your ID\n");
		char id[10];
		scanf ("%s",id);
		view_profile(id);
		break;
		case 2:
		change_entry();
		break;
		case 3:
		printf("enter the name of customer\n");
		char name[100];
		view_project(name);
		break;
		case 4:
		printf("enter the name of customer\n");
		char name[100];
		add_suggestion(name);
		break;
		default:
		employee();
	}
}
/*code to view the profile of the employee*/
void view_profile(char n[]){
	FILE *p;
	struct employee s;
	p = fopen("employee.txt","a+");
	while(fread(&s,sizeof(s),1,p)==1)
    {
        if(n==s.id)
        {
        	/*char name[10];
   char id[10];
   char insal[10];
   char experience[2];
   char accnum[10];
   char password[12];
   char project[20];*/
        printf("\t\t%s\n%s\n%s\n%s\n%s\n%s\n%s\n",s.name,s.id,s.insal,s.experience,s.accnum,s.password,s.project);
        }
    }
    fclose(p);
}
void edit_profile(char n[]){
	FILE *p;
	struct pro s;
	p = fopen("employee.txt","r+");
	while(fread(&s,sizeof(s),1,p)==1)
    {
        if(n==s.id)
        {
        	int n;
        	scanf("%d",&n);
        	switch(n){
        		printf("press 1. to edit your account number\n\n\npress 2. to edit your experience\n\n\n");
        case 1:
        printf("enter new account number\n");
        scanf("%s",s.accnum);
        break;
        case 2:
        printf("enter new account number\n");
        scanf("%s"s.experience);
        break;
    	}
        }
    }
fclose(p);	
main();
}
void admin(){
printf("=======-Welcome-=======\nenter the following ways\n\n1. Employee\n\n2 customer\n\n3. Partner\n\n4. Project");
int select;
scanf("%d",select);
switch(select){
	case 1:
	system("cls");
	printf("enter the name of employee\n");
	char name[30];
	scanf("%s",name);
	admin_employee();
	break;
	case 2:
	admin_customer();
	case 3:
	admin_partner();
	case 4:
	admin_project();
	default:
	main();
}

}
void admin_employee(){
	printf("Emloyee menu :\n\t1. add employee\n\t2. current employee\n\t3. to return to admin menu");
	int select;
	switch (select){
		case 1:
		system("cls");
		printf("enter the name of the new employee\n",);
		char name;
		add_employee();
		break;
		case 2:
		printf("enter the name of the employee\n",);
		char new_name;
		scanf("%s",new_name);
		curr_employee(new_name);
		break;
		case 3:
		admin();
		break;
	}
}
/*
char name[10];
   char id[10];
   int insal;
   int experience;
   char accnum[10];
   char password[12];
   char project[20];
*/
void add_employee(char n[]){
	struct emp s;
	FILE *p;
	p = fopen("employee.dat","a");
	printf("enter employee id\n");
	scanf("%s",s.id);
	printf("enter initial salary\n");
	scanf("%d",&s.insal);
	printf("enter experience in years\n");
	scanf("%d",&s.experience);
	printf("enter account number\n");
	scanf("%s",s.accnum);
	printf("enter password\n");
	scanf("%s"s.password);
	fseek(p,0,SEEK_END);
	fwrite(&s,sizeof(s),1,p);
	fclose(p);	
}
void curr_employee(char n[]){
	system("cls");
	printf("enter through the following\n\n\n1. view employee\n2. fire employee\n3. pay salary\n");
	int select;
	char name[100];
	printf("enter the name of the employee\n");
	scanf("%s",name);
		
	switch(select){
		case 1:
		view_profile(name);
		break;
		case 2:
		fire_employee(name);
		break;
		case 3:
		printf("enter the id of employee\n");
		char id[10];
		scanf("%s",id);
		pay_salary(id);
		break;

	}
}//dekhan padega isko
void fire_employee(char n[]){

	struct emp e;
	FILE *p,*copy;
	p=fopen("employee.txt","r");
	copy=fopen("COPY.txt","w");
	while(!feof(p))
	{
		fscanf(p,"%s",&e.name);
		if(strcmp(e.name,n)!=0)
		{
			fwrite(&e,sizeof(e),1,copy);

		}
	}
	remove("employee.txt");
	rename("COPY.txt","employee.txt");
}
void pay_salary(char n[]){
	FILE *p;
	struct emp s;
	p = fopen("employee.txt","r+");
	while(fread(&s,sizeof(s),1,p)==1)
    {
        if(n==s.id)
        {
        	int n;
        	scanf("%d",&n);
        	switch(n){
        		printf("press 1. to pay salary\n\n\npress 2. to cancel\n\n\n");
        case 1:
        printf("enter salary\n");
        scanf("%s",s.insal);
        break;
        case 2:
        admin();
        break;
    	}
        }
  admin();  
}
}
void admin_customer(){
	printf("enter number to enter \n\n1. View customer\n\t2. delete customer");
	int select;
	scanf("%d",&select);
	printf("enter the name of customer \n");
	char name[];
	scanf("%s",name);
	switch(select){
		case 1:
		view_customer(name);
		break;
		case 2:
		delete_customer(name);
		break;
		default:
		admin();
	}
}
	void view_customer(char n[]){
		FILE *p;
	struct employee s;
	p = fopen("customer.txt","r+");
	while(fread(&s,sizeof(s),1,p)==1)
    {
    		/*
    		char name[30];
	char gender[30];
	char age[30];//ek coupon dedo
	char location[100];
	char mail[30];
	char password[30];
	char phone[10];*/
        if(n==s.id)
        {
        printf("\t\t%s\n%s\n%s\n%s\n%s\n%s\n%s\n",s.name,s.gender,s.age,s.location,s.mail,s.password,s.phone);
        }
    }
    fclose(p);
    admin();
	}

	void delete_customer(char n[]){
	struct visit e;
	FILE *p,*copy;
	p=fopen("customer.txt","r");
	copy=fopen("COPY.txt","w");
	while(!feof(p))
	{
		fscanf(p,"%s",&e.name);
		if(strcmp(e.name,n)!=0)
		{
			fwrite(&e,sizeof(e),1,copy);

		}
	}
	remove("employee.txt");
	rename("COPY.txt","customer.txt");
	admin();
	}
void add_partner(){
	FILE *p;
	p=fopen("partner.dat","a+");
	/*
	char name[100];
	char locaiton[100];
	char theme[100];
	char about[1000];*/
	struct partner s;
	printf("enter the name of the partner\n");
	scanf("%s",s.name);
	printf("enter the location\n");
	scanf("%s",s.location);
	printf("enter the theme\n");
	scanf("%s",s.theme);
	printf("enter something about the hotel\n");
	scanf("%s"s.about);
	fseek(p,0,SEEK_END);
	fwrite(&s,sizeof(s),1,p);
	fclose(p);	
	admin();
}
void view_partner(char n[]){
	system("cls");
FILE *p;
	struct partner s;
	p = fopen("customer.txt","r+");
	while(fread(&s,sizeof(s),1,p)==1)
    {
    	/*
	char name[100];
	char locaiton[100];
	char theme[100];
	char about[1000];*/	
        if(n==s.id)
        {
        printf("\t\t%s\n%s\n%s\n%s\n",s.name,s.location,s.theme,s.about);
        }
    }
    fclose(p);
    admin();
}
void delete_partner(char n[]){
	struct partner e;
	FILE *p,*copy;
	p=fopen("partner.txt","r");
	copy=fopen("COPY.txt","w");
	while(!feof(p))
	{
		fscanf(p,"%s",&e.name);
		if(strcmp(e.name,n)!=0)
		{
			fwrite(&e,sizeof(e),1,copy);

		}
	}
	remove("partner.txt");
	rename("COPY.txt","partner.txt");
	admin();
}
void admin_project(){
	printf("enter the name\n");
	char name[100];
	scanf("%s",name);
	printf("1. view existing project\n2. edit team members\n3. update project\n4. delete project");
	int select;
	switch(select){
		case 1:
		view_project(name);
		break;
		case 2:
		puts("area under construction");
		break;
		case 3:
		add_suggestion(name);
		break;
		case 4:
		delete_project(name);
		break;
	}
}
delete_project(char n[]){
	struct pro e;
	FILE *p,*copy;
	p=fopen("project.txt","r");
	copy=fopen("COPY.txt","w");
	while(!feof(p))
	{
		fscanf(p,"%s",&e.name);
		if(strcmp(e.name,n)!=0)
		{
			fwrite(&e,sizeof(e),1,copy);

		}
	}
	remove("project.txt");
	rename("COPY.txt","project.txt");
	admin();
}
