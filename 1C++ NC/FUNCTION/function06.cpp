#include<bits/stdc++.h>
using namespace std;

int sum_digit(long long n){
    int s=0;
	while (n!=0){
    	s+=n%10;
    	n/=10;
	}
	return s;
}

int main(){
    int n; cin >> n;
    long long x;
    for(int i = 1; i <= n; i++){
        cin >> x;
        cout << sum_digit(x) << " ";
    }
    return 0;
}

