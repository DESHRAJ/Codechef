#include<iostream>
#include<string>
#include<algorithm>
//#include<conio.h>

using namespace std;

int main(){
	int T,flag=0,len,i;
	string str,str_temp,temp;
	
	cin>>T;
	while(T){
        flag = 0;
		cin>>str;
		len = str.length();
		for(i=0;i<len;i++){
			temp = str[i];
			str.erase(i,1);
			str_temp = str;
			reverse(str_temp.begin(),str_temp.end());
			if(str == str_temp){
                   //cout<<str_temp<<" "<<str<<endl;
				flag = 1;
				break;
			}
			else{
				str.insert(i,temp);
				//cout<<str_temp<<" "<<str<<endl;
                }
		}
		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		T--;
		}
		return 0;
	}
