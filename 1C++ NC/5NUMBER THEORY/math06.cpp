#include<bits/stdc++.h>
using namespace std;

//H�m ki?m tra s? nguy�n t?
bool nt(int n){
    if (n<2) return false;
    for (int i=2;i*i<=n;i++){
    	if (n%i==0) return false;
	}
	return true;
}
//H�m t?ng ch? s? nguy�n t? v� c�c ch? s? l� s? nguy�n t?, check lu�n 2 y�u c?u n�y trong c�ng 1 h�m v� n� d?u t�ch t?ng ch? s?
bool csnt(int n){
    int s=0;
    while (n){
    	if (n%10!=2 and n%10!=3 and n%10!=5 and n%10!=7) return false;
    	s+=n%10;
    	n/=10;
	}
	return nt(s);
}

int main(){
    int a, b; cin >> a >> b;
    int dem = 0;
    for(int i = a; i <= b; i++){
        if(csnt(i) && nt(i)){
            ++dem;
        }
    }
    cout << dem << endl;
}

