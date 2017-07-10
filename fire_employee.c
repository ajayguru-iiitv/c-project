#include <stdio.h>//fire employee and copy his details to a history file
#include <string.h>
#include <stdlib.h>
int main(){
	
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
return 0;}
	//not complete