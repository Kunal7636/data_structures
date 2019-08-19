#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void check(char str1[],char str2[]){
	int l1=strlen(str1);
	int f;
	char str3[100];
	char per[100];
	int count=0;
	int k;
	int max=0;
	
	int l2=strlen(str2);
	for(int i=0;i<l2;i++){
		 k=0;
		f=i;
		for(int j=0;j<l1;j++){
			if(str2[i]==str1[j]){
				str3[k]=str2[i];
				count++;
				k++;
				i++;
			}
			else
			{
				if(count>max)
				{
					strcpy(per,str3);
					max=count;

				}
				count=0;
				i=f;
				k=0;
			}
		}

	}

for(int i=0;i<max;i++)
	cout<<per[i];
cout<<endl<<"Lenght of string "<<max;


}
int main(void){
	char str1[100];
	char str2[100];
	cin>>str1;
	cin>>str2;
 	check(str1,str2);
	return 0;

}
