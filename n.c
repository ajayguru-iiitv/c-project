#include <stdio.h>
int main(int argc, char const *argv[])
{
	FILE *l;
	int c,count=0;
	l=fopen("names.lst","r");
	 for (c = getc(l); c != EOF; c = getc(l))
       { if (c == '\n') 
            count = count + 1;}
    fclose(l);
    printf("the line has %d names\n",count);
	return 0;
}