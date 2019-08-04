//To find maximum occouring element and removing duplicates

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

void fun1(string str,string str2,int size){
	string maxele;
        int count,i,j,max=0;
	for(int i=0;i<size;i++){
                count=1;
                for(j=i+1;j<size;j++){
                        if(str[i]!=' '&&str[i]==str[j]){
                                count++;
                                str[j]=' ';
                        }

                }
                if(count>max){
                        max=count;
                        maxele=str[i];       //putting the max element
                }
                if(str[i]!=' ')
                {
                        str2=str2+str[i];      //concatinating with empty string
                }
        }

     cout<<str2<<endl;
     cout<<"max element is "<<maxele<<" has occoured  "<<max<<" times .";
}
int main(void){
	string str;                  //original string
	string str2;                 // empty string
	cin>>str;
        int size = str.length();                
	fun1(str,str2,size);                  
return 0;
}
