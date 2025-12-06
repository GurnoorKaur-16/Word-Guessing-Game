#include<stdio.h>
#include<string.h>
int main()
{
	char word[30]={"crow"};		//1//
	char guess[30];
	int i,s;
	char showword[30];
	int found=0;
	printf("\t\t\t\t Welcome To The Word Guessing Game :-)");
	printf("\n\n\t\t\t\tYou Have Only Six Chances To Guess The Word:-)");
	//hint//
	printf("\n\n Hint-> The Word Is A bird Name,It Is Of four Letters");		//2//
	printf("\n\n ALL THE BEST!!");
	printf("\n\n Enter Your Word:");
	scanf("%s",&guess);
	strlwr(guess);	
	strlen(guess);
	if(strlen(guess)>4)
	{
		printf("Please Enter Only Given No. Of Letters!!");
	}
	
	for(i=1;i<=6;i++)
	{
		
			
		if (strcmp(word,guess)==0)
		{
				printf("CONGRATULATIONS,YOU GUESSED IT CORRECTLY!!");
				found=1;
				break;
		}
	else 
	{
		
		for(s=0;s<6;s++)
		
		if(word[s]==guess[s])
		{
			showword[s]=guess[s];
		}
	else
	{
		showword[s]='*';
	}
	
}
				printf("%s",showword);

	      	    printf("\nINNCORRECT WORD \n\nNEXT ATTEMPT:%d",i);
				printf("\n\n Enter Your Word:");
				scanf("%s",&guess);
	
	if(strlen(guess)>4)
	{
		printf("Please Enter Only Given No. Of Letters!!");
	}
	
}
	
	if(found==0)
	{
	printf("\nYOU GUESSED IT INCORRECT,CORRECT WORD IS 'crow'");		//3//
	}
	
	
	return 0;
}
