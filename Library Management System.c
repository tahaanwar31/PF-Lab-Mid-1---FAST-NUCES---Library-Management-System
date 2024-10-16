#include <stdio.h>
#include <conio.h>
#include <limits.h>
int main()
{
	int Books[5]={1,1,1,1,0};
	int opt,flag=0,booknum,mainflag=0;
	while (mainflag==0)
	{
		printf("Library Management System\n");
		printf("1.Check Out a Book\n");
		printf("2.Return a Book\n");
		printf("3.Exit\n");
		printf("Available books:\n");
		for (int i=0;i<=4;i++)
		{
			if (Books[i]==1)
			{
				printf("Book%d\n",i+1);
			}
		}
		while (flag==0)
		{
			printf("Choose an option\n");
			scanf("%d",&opt);
			if (opt>=1 && opt<=3)
			{
				flag=1;
			}
			else
			{
				printf("Invalid Input\n");
			}
		}
		flag=0;
		switch(opt)
		{
			case 1:
				printf("Enter the book number you want to check out: \n");
				scanf(" %d",&booknum);
				if (Books[booknum-1]==1)
				{
					Books[booknum-1]=0;
					printf("You have successfully checked out \'Book%d\'\n",booknum);
				}
				else
				{
					printf("Already taken\n");	
				}
				break;
			case 2:
				printf("Enter the number of the book you want to return\n");
				scanf("%d",&booknum);
				Books[booknum-1]=1;
				printf("You have successfully returned \'Book%d\'\n",booknum);
				break;
			case 3:
				mainflag=1;
				printf("Program stopped\n");
				break;
		}
	}
}