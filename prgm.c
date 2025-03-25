#include <stdio.h>
int main()
{
	int choice;
	printf("select your stream :\n);
	printf("1.cse\n");
	printf("2.aiml\n");
	printf("3.ece\n");
	printf("4.mech\n");
	printf("enter your choice : ");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
			printf("you selected cse.\n");
			break;
		case 2:
			printf("you selected aiml.\n");
			break;
	}

	return 0;
}



