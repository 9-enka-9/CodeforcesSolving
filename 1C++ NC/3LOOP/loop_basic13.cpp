#include<bits/stdc++.h>
using namespace std;

int main (){
	long long n;
	cin>>n;
	if (n>=0){
		int s=0;
		while (n>0){
			if (n%10%2==0){
				s+=n%10;
			}
			n/=10;
		}		
		cout<<s;
	} else {
		cout<<"NEGATIVE";
	}

}
