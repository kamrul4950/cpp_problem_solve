#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;
				
		int mark;
		
		int main()
				{
					printf("Enter the Number:\n");
					scanf("%d",&mark);
					
					if(mark>=80)
						printf("A+");
						else if(mark>=75) printf("A");
						else if(mark>=70) printf("A-");
						else if(mark>=65) printf("B+");
						else if(mark>=60) printf("B");
						else if(mark>=55) printf("B-");
						else if(mark>=40) printf("B-");
						else if(mark>=33) printf("d");
						
						else 
						printf("FAIL");
							
					
					return 0;
				}
