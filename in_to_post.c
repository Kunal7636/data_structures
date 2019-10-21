#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int checkpre(char a1)
	{
	
                        if(a1=='+'||a1=='-')
			{
				return 1;
			}
			if(a1=='*'||a1=='-')
			{
				return 2;
			}
			else
				return 0;
	}
int main(int argc,char* argv[])
{
	char* str;
	str=argv[1];
	char arr[100];
	int k=0;
	int c;
	int c2;
	char h;
	int l=strlen(str);
	for(int i=0;i<l;i++)
	{
		char a1=str[i];
		if(a1>='a'&&a1<='z'||a1>='A'&&a1<='Z')
         	{
                       printf("%c",a1);
		}
		else{
		      		 if(k==0)
					{
	        			    arr[k]=a1;
		   				 k++;

					}
	         	else
        			{
				c=checkpre(a1);
				h=arr[k-1];
	           		c2=checkpre(h);
				if(c2>c||c==c2)
					{
	
						while(k!=0)
							{
							
				       				printf("%c",arr[k-1]);
				       				 k--;
							}
						arr[k]=a1;
						k++;
					}
				else
					{
						arr[k]=a1;
						k++;
					}
				}
		}

	}
while(k!=0)
             {

             printf("%c",arr[k-1]);
             k--;
             }

	return 0;
}

