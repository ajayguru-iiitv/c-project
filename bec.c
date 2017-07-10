#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void admin();
void employee();
void vhotel(char n[]);
void add_customer(char n[]);
void customer();
void visitor();
struct visit
{
	char name[30];
	char gender[30];
	char age[30];//ek coupon dedo
	char location[30];
	char mail[30];
	char password[30];
	char phone[10];
};

int main(){
	int select;

	printf("\t\t\t---Welcome to event management---\n");
	printf("\n\n\n Enter choice to login as\n\n1. admin\n2. employee\n3. customer\n4. visitor");
	scanf("%d",&select);
	switch (select){
		case 1:
        //admin();
        puts("admin");
		break;
		case 2:
        //Employee();
        puts("Employee");
		break;
		case 3:
		//customer();
		case 4:
		visitor();
		break;

	}
	return 0;
}

void visitor(){
	int select,select1;
	//saving the names of people who visit the company
	printf("hi there !! tell us your name\n");
	char name[100];
	scanf("%s",name);
	FILE *p;
	p=fopen("visitorhistory.txt","a+");
	fprintf(p, "%s\n",name);
	fclose(p);
	printf("\n\t\tpress 1 to veiws all the hotels \n\t\t interested in us press 2 to sign-up \n\t\tpress any key to go to main menu");
	scanf("%d",&select1);
	switch(select1){
		case 1:
		{vhotel(name);
		break;}
		case 2:
		{add_customer(name);
		break;}
	}


}
//function to view hotel
void vhotel(char n[]){
	printf("these are the hotels %s",n);//a way to sort the hotels by city
	char ch[100];
	FILE *p;
 p=fopen("hlist.txt","r+");
while(!feof(p)){
		fscanf(p,"%s",&ch);
		printf("%s",ch);
	}
	fclose(p);
}
//function to signup the visitor into customer
void add_customer(char n[]){
   struct visit e;
   FILE *p;
   p = fopen(n,"w+");

   printf("Enter Name\n");
      scanf("%s",e.name);
   printf("Are you a guy or a girl\n");
      scanf("%s",e.gender);
   printf("how old are you\n");
      scanf("%s",e.age);
   printf("enter your location\n");
      scanf("%d",e.location);
   printf("enter your email address\n");
      scanf("%s",e.mail);
   printf("enter password (max characters =)\n");
      scanf("%s",e.password);//check password
    printf("enter phone no.\n");//check length
      scanf("%s",e.phone);
   fprintf(p,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n",e.password,e.name,e.gender,e.age,e.location,e.mail,e.phone);
   fclose(p);
   system("cls");//THE USER IS REGISTERED PRINT HIS DETAILS ON THE CONSOLE
   FILE *check=NULL;
   check=fopen(n,"r+");
   if(check == NULL){
   	system("cls");
   	printf("registration unsuccessfull\n\n\n");
   	int qw;
   	printf("press 1. to retry the registration \npress 2. to go to the main menu\n");
   	scanf("%d",&qw);
   	switch(qw){
   		case 1:
   		add_customer(n);
   		break;
   		case 2:
   		main();
   		break;
	}
   }
   else{
   	system("cls");
  	FILE *read;
  	read=fopen(n,"r+");
  	char ch[100];
while(!feof(read)){
		fscanf(p,"%s",&ch);
		printf("%s",ch);
	}
	fclose(read);
}
}



On Wed, Nov 9, 2016 at 12:08 PM, AJAY GURU <201651005@iiitvadodara.ac.in> wrote:
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void admin();
void employee();
void vhotel(char n[]);
void add_customer(char n[]);
void customer();
void visitor();
struct visit
{
	char name[30];
	char gender;
	char age[30];//ek coupon dedo
	char location[30];
	char password[30];
	char mail[30];
	char phone[10];
};

int main(){
	int select;

	printf("\t\t\t---Welcome to event management---\n");
	printf("\n\n\n Enter choice to login as\n\n1. admin\n2. employee\n3. customer\n4. visitor");
	scanf("%d",&select);
	switch (select){
		case 1:
        //admin();
        puts("admin");
		break;
		case 2:
        //Employee();
        puts("Employee");
		break;
		case 3:
		//customer();
		case 4:
		visitor();
		break;

	}
	return 0;
}

void visitor(){
	int select,select1;
	//saving the names of people who visit the company
	printf("hi there !! tell us your name\n");
	char name[100];
	scanf("%s",name);
	FILE *p;
	p=fopen("visitorhistory.txt","a+");
	fprintf(p, "%s\n",name);
	fclose(p);
	printf("\n\t\tpress 1 to veiws all the hotels \n\t\t interested in us press 2 to sign-up \n\t\tpress any key to go to main menu");
	scanf("%d",&select1);
	switch(select1){
		case 1:
		{vhotel(name);
		break;}
		case 2:
		{add_customer(name);
		break;}
	}


}
//function to view hotel
void vhotel(char n[]){
	printf("these are the hotels %s",n);//a way to sort the hotels by city
	char ch[100];
	FILE *p;
 p=fopen("hlist.txt","r+");
while(!feof(p)){
		fscanf(p,"%s",&ch);
		printf("%s",ch);
	}
	fclose(p);
}
//function to signup the visitor into customer
void add_customer(char n[]){
   struct visit e;
   FILE *p;
   p = fopen(n,"w+");

   printf("Enter Name\n");
      scanf("%s",e.name);
   printf("Are you a guy or a girl\n");
      scanf("%s",e.gender);
   printf("how old are you\n");
      scanf("%s",e.age);
   printf("enter your location\n");
      scanf("%d",e.location);
   printf("enter your email address\n");
      scanf("%s",e.mail);
   printf("enter password\n");
      scanf("%s",e.password);//check password
    printf("enter phone no.\n");//check length
      scanf("%s",e.phone);
   fprintf(p,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n",e.password, e.name, e.gender, e.age, e.location, e.mail,e.phone);
   fclose(p);
   system("cls");//THE USER IS REGISTERED PRINT HIS DETAILS ON THE CONSOLE
   FILE *check=NULL;
   check=fopen(n,"r+");
   if(check == NULL){
   	system("cls");
   	printf("registration unsuccessfull\n\n\n");
   	int qw;
   	printf("press 1. to retry the registration \npress 2. to go to the main menu\n");
   	scanf("%d",&qw);
   	switch(qw){
   		case 1:
   		add_customer(n);
   		break;
   		case 2:
   		main();
   		break;
	}
   }
   else{
   	system("cls");
  	FILE *read;
  	read=fopen(n,"r+");
  	char ch[100];
while(!feof(read)){
		fscanf(p,"%s",&ch);
		printf("%s",ch);
	}
	fclose(read);
}
}