# include <iostream>
# include <cstring>
using namespace std;
 void change(char str1[],char str2[],char str3[],int l1){
	int k=0;
	int l=0;
	for(int i=0;i<l1;i++){
		if(str1[i]>='A'&& str1[i]<='Z'){

			str2[k]=str1[i];
			k++;
		}
		else{
			str3[l]=str1[i];
			l++;
		}

	}
	int m=0;
          while(m<k)
	{
		str3[l]=str2[m];
		m++;
		l++;
	}
}
int main(void){
	char str1[100];
	cin.get(str1,100);
	int l1=strlen(str1);
	char str2[100];
	char str3[100];
	change(str1,str2,str3,l1);
	for(int i=0;i<l1;i++)
		cout<<str3[i];
	return 0;
}
