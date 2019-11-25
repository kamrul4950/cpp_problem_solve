#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#define max_number 100
using namespace std;

int main()
		{
			char c[max_number];
			printf("Please Enter the value:\n");
			scanf("%s",c);
			//printf("%s",c);
			int i,j;
			j=strlen(c);
			printf("The langht is : %d\n",j);
			printf("The Forward system:\n\n\n");
			for(i=0;i<j;i++)
			{
				printf("Forward string :%d = %c\n",i,c[i]);
			}
			printf("The Backward system:\n\n\n");
			
			for(i=j-1;i>=0;i--){
			printf("The backwrd system: %d = %c\n",i,c[i]);
			}
			
			
			
			return 0;
		}
