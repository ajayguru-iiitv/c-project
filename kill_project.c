#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
	int status;
	printf("enter the project name you want to delete\n");
	char project_name[100];
	gets(project_name);
	status = remove(id);
	if(status == 0){
		printf("the project has been terminated\n");
	}
	else if(status == 1){
		printf("there seems some error\ncouldn't kill project");
	}
}