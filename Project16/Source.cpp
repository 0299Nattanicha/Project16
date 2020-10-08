#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int auksorn(char a[])
{
	int i=0,sum=0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'a'&& a[i]<='z')
		{
			sum++;
		}
			i++;
	}
	return sum;
}
int main()
{
	char a[100];
	scanf("%s",a);
	printf("auksorn pim lek = %d", auksorn(a));
	return 0;
}
