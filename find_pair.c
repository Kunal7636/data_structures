#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
int a[argc-1];
int j=0;
int max =atoi(argv[1]);
for(int i=1;i<argc;i++){
	a[j]=atoi(argv[i]);
	if(a[j]>max)
	{
		max=a[j];
	}
	j++;
}
int lk=max+1;

int ab[lk];
for(int i=0;i<lk;i++)
{
	ab[i]=0;
}
for(int i=0;i<argc-1;i++)
{
	int temp=a[i];
	ab[temp]=ab[temp]+1;
	

}

int n;
scanf("%d",&n);

for(int i=0;i<argc-1;i++){
	int ag=n-a[i];
	if(a[i]==ag){
		if(ab[ag]>1){
			printf("The pair is : %d,%d",a[i],ag);
			printf("\n");
			ab[ag]=ab[ag]-2;
		}
	}
	else
		if(ab[ag]>0){
		printf("The pair is : %d,%d\n",a[i],ag);

		ab[ag]=ab[ag]-1;
		ab[a[i]]=ab[a[i]]-1;
		

		printf("\n");
		}
	
	

}
return 0;
}
