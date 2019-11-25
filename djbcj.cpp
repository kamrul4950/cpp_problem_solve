#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;

		//int test,t,l;
		//char a[11];

int main()
		{
				   char c[1000],ch;
				   int i,count=0;
				   printf("Enter a string: ");
				   scanf("%s",c);
				   printf("Enter a character to find frequency: ");
				   scanf("%c",&ch);
				   for(i=0;c[i]!='\0';++i)
				   {
					   if(ch==c[i])
						   ++count;
				   }
				   printf("Frequency of %c = %d", ch, count);
		
			
			return 0;
		}
	
