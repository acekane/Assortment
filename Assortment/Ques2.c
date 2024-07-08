#include<stdio.h>
#include<conio.h>
void main()
{
	int r;
	printf("Enter a size of Row:- ");
	scanf("%d",&r);
	int c;
	printf("Enter a size of colum:- ");
	scanf("%d",&c);
	int arr[r][c];
	int i;
	int j;
	int a=-1;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d",arr[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(a<arr[i][j])
			{
				a=arr[i][j];
			}
		}		
		printf("\n");
	}
		printf("this is a max number:- %d",a);
	printf("(%d,%d)",i,j);
	
	
	
	getch();
}
