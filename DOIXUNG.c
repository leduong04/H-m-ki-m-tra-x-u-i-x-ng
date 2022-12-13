#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
int Doixung(int i, int n, char a[])
{
	int ktr=1;
	for(i=0; i<(strlen(a)/2); i++)
	{
		if(a[i]!=a[strlen(a)-i-1])
		{
			ktr=0; 
			break;
		}
	}
	if(ktr==1)
	{
		printf("A co doi xung");
	}
	else 
	{
		printf("A ko doi xung");
	}
}


int main()
{
	int i,j,n,k;
	
	char a[10000];
	printf("A = ");
	gets(a);
	Doixung(i, n, a);
	return 0;
}
