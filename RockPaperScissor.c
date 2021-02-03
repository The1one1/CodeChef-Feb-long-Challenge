#include<stdio.h>
int main()
{
	char n1[30],n2[30];
	int b=0,a[2];
		printf("Enter first participant's name:");
		scanf("%s",n1);
		printf("Enter second participant's name:");
		scanf("%s",n2);
		printf("Ebter participant's move\n");
		printf("0 means Rock\n2 means scissors\n5 means Paper\n");
		
		while(b<2)
		{
			printf("Enter %dst participant's move: ",b+1);
			scanf("%d",&a[b]); 
			b++;
		}
		if(a[0]==0&&a[1]==2)
		printf("THe winner is %s\n",n1);
		else if(a[0]==2&&a[1]==0)
		printf("THe winner is %s\n",n2);
		else if(a[0]==2&&a[1]==5)
		printf("THe winner is %s\n",n1);
		else if(a[0]==5&&a[1]==2)
		printf("THe winner is %s\n",n2);
		else if(a[0]==5&&a[1]==0)
		printf("THe winner is %s\n",n1);
		else if(a[0]==0&&a[1]==5)
		printf("THe winner is %s\n",n2);
		else if(a[0]==0&&a[1]==2)
		printf("THe winner is %s\n",n1);
		else if(a[0]==a[1])
		printf("It's a draw!!\n");
		else
		printf("Invalid move detected..\n");
}
	

