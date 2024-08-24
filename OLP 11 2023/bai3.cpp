#include<bits/stdc++.h>
using namespace std;

void sieve(int lim, bool isPrime[]){
	for (int i=2;i<=sqrt(lim);i++){
		for (int j=i*i; j<=lim; j+=i){
			isPrime[i]=false;
		}
	}
}

bool isdiv5(int n){
	int s=n%10;
	n/=10;
	while (n!=0){
		s+=(n%10);
		n/=10;
	}
	return s%5==0;
}

int main(){
	int t;
	cin>>t;
	int l[t+1],r[t+1];
	bool isPrime[3000000];
	int lim=3000000;
	sieve(lim,isPrime);
	int s=0;
	for (int i=0;i<t;i++){
		cin>>l[i]>>r[i];
		for (int j=l[i];j<=r[i];j++){
			if (isPrime[j] and isdiv5(j)){
				s++;
			}
		}
		cout<<s;
	}
	
}
