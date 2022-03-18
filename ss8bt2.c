#include<stdio.h>
int main(){
	char ch;
	printf("Enter the desired character : ");
	scanf("%c",&ch);
	switch(ch){
	case'A':
	case'a':
		printf("Ada");
		break;
	case'B':
	case'b':
		printf("Basic");
		break;
	case'C':
	case'c':
		printf("CODBOL");
		break;
	case'D':
	case'd':
		printf("dBASE |||");
		break;
	case'f':
	case'F':
		printf("Fortran");
		break;
	case'p':
	case'P':
		printf("Pascal");
		break;
	case'v':
	case'V':
		printf("Visual C++");
		break;
	default:
		printf(" Not match any of the above letters");
		break;
		}
		}
		
