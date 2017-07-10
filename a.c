#include <stdio.h>
int main()
{
	FILE *fp;
	fp = fopen("filehandling.txt","r+");
	fprintf(fp,"ddffdffdfdfakjsfsdkjdfdskjskdjkjfdndjkfnksjfn\n");
	fclose(fp);
	return 0;
}