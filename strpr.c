#include <stdio.h>
int main(){
	  char ch,passa[8];
    int i;
  for(i=0;i<8;i++)
 {
  ch = getch();
  passa[i] = ch;
  ch = '*';
  printf("%c",ch);
 
}
return 0;}