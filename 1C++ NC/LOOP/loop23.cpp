#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for (int i=0;i<n;i++){
		for(int j=1;j<=n;j++){
			cout<<i*n+j<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for (int i=1;i<=n;i++){
		for (int j=i;j<n+i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n-i;j++){
			cout<<"~";
		}
		for (int j=1;j<=i;j++){
			cout<<i;
		}
		cout<<endl;
	}
	cout<<endl;
	int t=1;
	for (int i=1;i<=n;i++){
		for (int j=0;j<i;j++){
			cout<<j*5+i<<" ";
		}
		cout<<endl;
	}
}
