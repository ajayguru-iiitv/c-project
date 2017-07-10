#include<stdio.h>


int main()
{
	FILE *ptr;
	char temp[10000];

    ptr =fopen("hotels.txt","r");
    while(!feof(ptr))
    {
    	fscanf(ptr," %[^\t\n]s\n",temp);
    	printf("\n%s\n",temp);
	}
}
