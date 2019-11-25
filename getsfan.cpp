#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>

using namespace std;


	int main()
			{
				char string[100],c;
				int vo,co,di,wo,i,other;
				vo=co=di=wo=i=other=0;
				
				printf("Enter the value:\n");
				
				scanf("%s",string);
				
				while((c=tolower(string[i++]))!='\0')
				{
					if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
					++vo;
					
					else if(c>='a'&& c<='z')
					++co;
					else if(c>='0'&& c<='9')
					di++:
					else if(c==' ')
					++wo;
					else ++other;
				}
				
				printf("vowel: %d\n",vo);
				printf("consomant: %d\n",co);
				printf("Dight: %d\n",di);
				printf("words: %d\n",wo);
				printf("other: %d\n",other);
					
					
				}
				
				
		
