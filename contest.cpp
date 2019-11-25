#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#define max_number 100

using namespace std;
	
	int main()
		{
			char c[max_number];
			int i,j;
			printf("Enter the value:\n");
			scanf("%s",c);
			j=strlen(c);
			printf("the lenght is: %d",j);
			
			for(i=0;i<j;i++)
			{
				printf("the string forwading :%d = %c \n",i,c[i]);
			}
			
			printf("the backwading system");
			
			for(i=j-1;i>=0;i--)
			{
				printf("the backward value is: %d = %c\n",i,c[i]);
			}
			
			
			return 0;
		}
