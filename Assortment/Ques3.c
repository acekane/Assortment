#include<stdio.h>
#include<conio.h>
void main()
{
	int r;
	printf("Enter a Row:- ");
	scanf("%d",&r);
	int c;
	printf("Enter a colum:- ");
	scanf("%d",&c);
	int arr[r][c];
	int i;
	int j;
	int brr[c][r];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
            brr[i][j]=arr[j][i];
		}
		printf("\n");
			}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",brr[i][j]);
		}
		printf("\n");
	}
	
	getch();
}
