#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

	int a,b,c;
	int test,t;
	
	int main()
		{
			scanf("%d",&test);
			for(t=1;t<=test;t++)
			{
					scanf("%d%d%d",&a,&b,&c);
						if(a>b)
						{
							if(a>c)
								printf("Case %d: %d\n",t,a);
							else 
								printf("Case %d: %d\n",t,c);
							
						}
						else
						{
							if(b>c)
								printf("Case %d: %d\n",t,b);
							else
								printf("Case %d: %d\n",t,c);
						}
				}				
			
		return 0;	
		}
