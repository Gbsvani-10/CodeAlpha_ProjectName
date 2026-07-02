/*trace of a matrix*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[9][9],i,j,m,n,s;
	//clrscr();
	printf("enter order of A matrix");
	scanf("%d%d",&m,&n);
	if(m==n)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("enter a[%d][%d] elements",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				printf("\t%d",a[i][j]);
			printf("\n\n\n");
		}
		s=0;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==j)
				{
					s=s+a[i][j];
				}
			 } 
		}
		printf("%d",s);
	}
	else
		printf("given matrix is not a square matrix :so please try again!!!");
	getch();
	return 0;
}
