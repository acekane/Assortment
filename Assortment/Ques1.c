#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5]={2,-4,1,-3,-5};
	int i;
	for(i=0;i<=4;i++)
	{
	    if(arr[i]<0)
	    {
	    	printf("Negative elements from an Array: %d\n",arr[i]);
		}
	}
	
	
	getch();
}
