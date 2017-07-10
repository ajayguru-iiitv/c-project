#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	printf("welcome Mr. #username\n\n\t\tplease select from the following to continue");
	printf("1. market and partners\n2. View Balance Sheet\n3. decide profit\n4. projects\n5. employee\n6. team\n7. Security\n8. payments");
	int select;
	scanf("%d",&select);
	switch(select){
		case 1
		/*view market
		list of all the hotels tied. up
		all the offers we are making
		add a partner 
		terminate a partner*/
		printf("\n\n\n\tselect the following to enter \n1. view the market\n2. view all the tie ups\n3. add a partner\n4. terminate a partner\n5. edit market");
		int selc1;
		scanf("%d",&selc1);
			switch(selc1){
				case 5
				FILE *fp;
				fp=fopen("market.txt","r+");
				fp fscanf("market.txt");
				fclose(fp);
				break;
			}
		break;
		case 2
		/*view hisaab*/
		break;
		case 3
		/*decide profit*/
		break;
		case 4
		/*view projects
		add something
		message the customer
		kill
		change team
		ask for morefunds*/
		break;
		case 5
		
		/*view employee
		pay add terminate promote demote*/
		break;
		case 6
		/*assign team
		pay a team bonus
		bookmark team*/
		break;
		case 7
		/*security
		veiw customer's password 
		view employees password
		restet new pass word 
		change you password
		*/
		break;
		case 8;
		/*payments 
		undo a payment */
		break;
	}

}