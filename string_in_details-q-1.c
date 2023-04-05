#include<stdio.h>
#include<string.h>

main()
{
	char password[100];
	int i,p;
	
	printf("Enter Password=");
	scanf("%s",password);
	
	if (strlen(password)>=6)
	{
		p=strlen(password);
		for (i=0;i<p;i++)
		{
			if ((password[i]>='a' && password<='z') || 
			    (password[i]>='A' && password[i]<='Z') || 
			    (password[i]>='0' && password[i]<='9'))
			printf("Password is correct");
		}
	}
	else
		printf("Please type right Password");
	
	
	
}
