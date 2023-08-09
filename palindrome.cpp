#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
    printf("Please Enter any String: ");
    gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
		printf("The Given String is a Palindrome");
	else
		printf("The given string is not a palindrome");
return 0;
}
