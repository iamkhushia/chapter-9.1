#include<stdio.h>

main()
{
	// Write a Program to convert the given string in toggle case without using any string function
	
	char name[100];
	
	int i;
	
	printf("enter the string to toggle =");
	scanf("%s",&name);
	
	for(i=0; name[i]!='\0'; i++)
	{
		if(name[i]>='a' && name[i]<='z')
	    {
		    printf("%c",name[i]-32);
	    }
	    else if(name[i]>='A' && name[i]<='Z')
	    {
	    	printf("%c",name[i]+32);
		}
	}
}