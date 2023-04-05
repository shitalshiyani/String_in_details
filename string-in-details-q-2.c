#include<stdio.h>
#include<string.h>

main()
{
	char email[100]="shitalavaiya@gmail.com";
    char pass[100]="S#P0913";
    int i;
	
	char email1[200];
	char pass1[200];
	printf("Enter Usesr Email ID=");
	scanf("%s",email1);
	printf("Enter Password=");
	scanf("%s",pass1);
	
	if (strcmp(email,email1)==0 && strcmp(pass,pass1)==0 )
	{
		
			printf("Login Successfully");
		
	}
	else
		{
			printf("Please type correct Email or Password");
		}
	
}
