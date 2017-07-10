#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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