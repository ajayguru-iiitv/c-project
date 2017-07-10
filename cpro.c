#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void admin();
void add_employee(char n[]);
void employee();
void vhotel(char n[]);
void visitor();
void add_project();
void customer();
void view_project();
void give_feedback();
void about();



//structure for project
struct project
{
	char name[100];
	char venue[100];
	char mem1[100];
	char mem2[100];
	char mem3[100];
	char mem4[100];
	char mem5[100];

};
//structure for visitors text file 
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

// structure for employee database file
struct emp
{
   char name[10];
   char id[9];
   char insal[10];
   char experience[2];
   char accnum[10];
   char password[12];
   char project[100];
   char address[100];
   int rating;
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
        employee();
		break;
		case 3:
		//customer();
		case 4:
		visitor();
		break;
		case 5:
		about();
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
	fprintf(p,"%s\n",name);
	fclose(p);
	printf("\n\t\tpress 1 to veiws all the hotels \n\n interested in us press 2 to sign-up \n\n");
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
	printf("\t%s\n\t these are the hotels you asked for\n",n);
	char ch;
	
	FILE *p;
 p=fopen("hotels.txt","r+");
while(!feof(p)){
		fscanf(p,"%c",&ch);
		printf("%c",ch);
	}
	fclose(p);
	printf("enter 1 to make a booking \n enter 2 to go to the main menu");
	int a,b;
	scanf("%d",&a);
	switch(a){
	case 1:
	system("cls");
	printf("enter your name to create a project\n");
	char name[100];
	void add_project(name);
	break;
	case 2:
	system("cls");
	main();
}
	
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
   		
   		break;
   		case 2:
   		main();
   		break;
	}
   }
   else{
   	system("cls");
  	
  	
  	char ch[100];
while(!feof(n)){
		fscanf(p,"%s",&ch);
		printf("%s",ch);
	}
	fclose(check);
	fclose(n);
}
}

//printing details about the company
void about(){
	FILE *ptr;
	char temp[10000];

    ptr =fopen("about.txt","r");
    while(!feof(ptr))
    {
    	fscanf(ptr," %[^\t\n]s\n",temp);
    	printf("\n%s\n",temp);
	}
	fclose(ptr);
}
//

//the code for employee
void employee(){
	printf("please enter ID\n");
	char id[30],str[60];
	gets(id);
	FILE *p=NULL;
	p=fopen(id,"a+");
	if(p==NULL){
		printf("ID does not exists please re enter\n");
		void employee();
	}
	//code for password coming soon
	FILE *pass;
	pass = fopen("");
	/*printf("enter password\n");
	char pass[30];
	gets(pass);
	if()*/ 
	system("cls");
printf("Welcome %s\nplease enter to continue\n",id);
printf("1. view assigned project\n 2. veiw rating\n 3. view and/or modify account");
int select;
scanf("%d",&select);
switch(select){
	//code to view and modify project details 
	case 1:
	printf("%s\n",e.project);
	printf("\nmodify project database");
	system("cls");
	FILE *pro;
	pro = fopen(e.project,"a+");
	char new[1000];
	gets(new);
	fprintf(pro,"%s\n",new);
	fclose(pro);
	break;
	// code to view rating
	case 2:
	printf("%d\n",e.rating);
	break; 
	// code to view and modify account 
	case 3:
	char ch;
	while(!feof(p)){
		fscanf(p,"%c",&ch);
		printf("%c",ch);
	}
	printf("Press to change following\n1. name\n2. address\n3. experience");
	int select1;
	scanf("%d",&select1);
	switch(select1){
		case 1:
		char name[100];
		printf("enter you new name\n");
		gets(name);
		fprintf(p,"%s\n",e.name);
		break;
		case 2:
		char address[100];
		gets(address);
		fprintf(p,"%s\n",);
	}
}


}
/*this code makes new projet which creates a new .dat file and enters the following structure entry
this file is made by visitor
this file can be editted by employee to update project status
this file can be seen by customer to view project
*/
void add_project(){
	struct project e;

	FILE *p;
	p = fopen("project.txt","r+");
	printf("enter the name of the event\n");
	scanf();
}
void customer(){
	printf("press 1 to view your project\npress 2 to give feed back\npress 3 to give rating");
	int select;
	scanf("%s",&select);
	switch(select){
		case 1:
		printf("enter the name of project file\n");
		char name[100];
		scanf("%s",name);
		void view_project(name);
		break;
		case 2:
		void 
	}
}

/*this code is used to read the project*/
void view_project(){
	FILE *p;
	p = fopen();

}