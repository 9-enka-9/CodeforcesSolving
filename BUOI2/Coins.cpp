#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int n, times=0;
	unsigned long long s;
	cin>>n>>s;
	while (s!=0 and n!=0){
		times+=(s/n);
//		cout<<s<<" "<<n<<" "<<times<<endl;
		s%=n;
		n--;
	}
	cout<<times;
}
