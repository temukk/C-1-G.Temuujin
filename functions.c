#include "myinclude.h"
#include <stdio.h>

void read(int A[], int n)
{
        int i;
        for (i = 0; i < n; i++)
                scanf("%d", &A[i]);
}

void print(int A[], int n)
{
        int i;
        for (i = 0; i < n; i++)
                printf("%d ", A[i]);
        printf("\n");
}

int max(int A[], int n)
{
    int i,max = A[0];
    for(i=0; i<n; i++)
    {
    	if(A[i] > max)
    	{
    		max = A[i];
		}
	}
	return max;
}

int min(int A[], int n)
{
    int i,min = A[0];
    for(i=0; i<n; i++)
    {
    	if(A[i] < min)
    	{
    		min = A[i];
		}
	}
	return min;       
}

void copy(int A[], int n, int B[])
{
    int i;
	for(i=0; i<n; i++)
	{
		B[i] = A[i];
    }       
}

int find(int A[], int n, int x)
{
	int i;
    for(i=0; i<n; i++)
	{
		if(x==A[i])
		{
			return i;
		}
    }
    return -1;
}

int make_set(int A[], int n, int B[])
{
     int i, j, c, t=0;
	for(i=0; i<n; i++)
	{
		c=0;
		for(j=i; j>=0; j--)
		{
			if(A[i]!=A[j])
			{
				c++;
			}
		}
					if(c>1)
			{
				B[i]=A[i];
				t++;
			}
    }
	 return t;
}

int union_set(int A[], int n, int B[], int m)
{
        int i, j, s = n, c;
        for(i=0; i<m; i++)
		{
			c = 0;
			for(j=0; j<s; j++)
			{
				if(A[j]== B[i])
				{
					c++;
					break;
				}
			}
			if(c == 0)
			{
				A[s] = B[i];
				s++;
			}
		}
   return(s);
}

int intersection_set(int A[], int n, int B[], int m, int C[])
{
	int i, j, k=0;
	for(i=0; i<n; i++)
	{
		int c=0;
		for(j = 0; j<m; j++)
		{
			if(A[i] == B[j])
			{
				c++;
				break;
			}
		}
		if(c != 0)
		{
			C[k] = A[i];
			k++;
		}
	}
	return k;
}


