
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

using namespace std;

			int i,j,n,cheak,test,t;
	
	int main()
			{ 
				scanf("%d",&test);
				for(t=1;t<=test;t++)
				{
				
				scanf("%d",&n);
				for(i=2;i<=n;i++)
				{
					for(j=2;j<=i;j++)
					{
						if(i%j==0)
						{
							break;
						}
						
					}
					if(i==j)
					{
						printf("Case :%d %d\n",t,i);
					}
					
					
				}
				
				//~ cheak=1;
				//~ scanf("%d",&n);
				//~ 
				//~ for(i=2;i<n;i++)
				//~ {
				//~ if(n%i==0)
				//~ 
					//~ cheak=0;					
				//~ 
			    //~ }
			    //~ if(cheak==1)
					//~ printf("Prime ");
				//~ else
					//~ printf("Not Prime");
				}
				
				return 0;
			}
