#include<bits/stdc++.h>
using namespace std;

int main(){
	int h,m,k;
	cin>>h>>m>>k;
	m=(m+k)%28;
	h=(h+k/28)%28;
	cout<<setfill('0')<<setw(2)<<h<<"h:"<<setfill('0')<<setw(2)<<m<<"m";
}
