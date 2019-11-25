#include<stdio.h>
#include<bits/stdc++.h>
 using namespace std;
 
 
 int main ()
		{
			//~ int a=10;
			//~ 
			//~ start:
			//~ printf("%d ",a);
			//~ a--;
			//~ if(a>=1)
			//~ goto start;
			//~ int i,a;
			//~ i=1;
			//~ do
				//~ {
					//~ scanf("%d",&a);
					//~ printf("%d ",a);
					//~ i++;
					//~ 
				//~ }
			//~ 
			//~ while (i<=5);
			int a,b,n,i,m,temp;
			scanf("%d",&m);
			for(i=1;i<=m;i++)
			{
			
			scanf("%d%d",&a,&b);
			for(n=a;n<=b;n++)
			{
			
				printf("%d  ",n);
				
			}
			if(a>b)
			{
				temp=a;
				a=b;
				b=temp;
				for(n=a;n<=b;n++)
			printf("%d  ",n);
			}
			
			
		}
			return 0;
		}
