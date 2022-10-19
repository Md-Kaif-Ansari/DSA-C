#include<stdio.h>

int linearsearch(int A[], int element, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(A[i] == element)
		{
			return i;
			
		}
	}
	return -1;
}

int main()
{
	int A[] = {32,11,67,5,77,3,2};
	int n = 7;
	int element = 67;
	int index = linearsearch(A, element, n);
	printf("Element found at index : %d ",index);
}
