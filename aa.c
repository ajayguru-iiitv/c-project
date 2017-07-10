#include <stdio.h>
int main(){
	FILE *n,*d;
	int i=-1;
	char ch[100];
n=fopen("names.txt","r");
d = fopen("marks.dat","a");
while(!feof(n)){
	
	printf("%s\n",ch);
	i = i+1 ;
}
fclose(n);
printf("%d\n",i);
return 0;
}