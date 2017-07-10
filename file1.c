#include <stdio.h>
int main(){
	FILE *fp;
	fp=fopen("lol.txt","r");
	fprintf(fp,"gaand marale bc\n");
	fclose(fp);
	return 0;
}