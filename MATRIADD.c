/*addition of matrices*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,a[9][9],b[9][9],c[9][9];
	//clrscr();
	printf("enter limit n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter a[%d][%d] elements:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter b[%d][%d] elements:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n\tA matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n\n\n");
	}
	printf("\n\tB matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n\n\n");
	}
	for(i=0;i<n;i++)
	{
    	for(j=0;j<n;j++)
    	{
        	c[i][j]=a[i][j]+b[i][j];
    	}
	}
	printf("\n\tAddition of matrices:\n");
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        printf("\t%d", c[i][j]);
	    }
	    printf("\n\n\n");
	}
	getch();
	return 0;
}
