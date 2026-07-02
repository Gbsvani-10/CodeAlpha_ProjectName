/*Matrix Multiplication*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[9][9],b[9][9],s[9][9],i,j,k,m,n,r,c;
	//clrscr();
	printf("enter order of A matrix:");
	scanf("%d%d",&m,&n);
	printf("enter order of B matrix");
	scanf("%d%d",&r,&c);
	if(n==r)
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
			{
				printf("\t%d",a[i][j]);
			}
			printf("\n\n\n");
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("enter b[%d][%d] elements:",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("\t%d",b[i][j]);
			}
			printf("\n\n\n");
		}
		printf("Matrix multiplication:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<c;j++)
			{
				s[i][j]=0;
				for(k=0;k<n;k++)
					s[i][j]=s[i][j]+a[i][k]*b[k][j];
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("\t%d",s[i][j]);
			}
			printf("\n\n\n");
		}
	}
	else
		printf("\n\tMatrix multiplication is not possible!!!");
	getch();
	return 0;
}
