#include<bits/stdc++.h>
using namespace std;

//ham kiem tra xem 1 s? c� nhi?u ch? s? ch?n hon l? hay ko?
bool chanle(int n){
    int c1=0,c2=0;
    while (n!=0){
    	if (n%10%2==0) c2++;
    	else c1++;
    	n/=10;
	}
	return c2>c1;
}

//H�m ki?m tra t?ng c?a 1 s? c� ph?i c� nhi?u ch? s? ch?n hon l? ko?
bool check(int n){
    //T�nh t?ng ch? s? c?a
    //G?i h�m chanle v� truy?n t?ng v�o d? check xem t?ng c�
    //th?a m�n hay kh�ng, n?u c� tr? v? true, ngu?c l?i tr? 
    //v? false
    int s=0;
    while (n!=0){
    	s+=n%10;
    	n/=10;
	}
	return chanle(s);
}

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        if(check(i)){
            cout << i << " ";
        }
    }
}

