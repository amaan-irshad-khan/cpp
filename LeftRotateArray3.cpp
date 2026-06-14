#include<bits/stdc++.h>
using namespace std;

void lR(int arr[] , int n, int d){

	reverse(arr, arr+d);
	reverse(arr+d, arr+n);
	reverse(arr, arr+n);
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0 ; i< n; i++){
		cin >> n;
	}
	int d;
	cin >> d;
	lR(arr, n, d);
	for(int i = 0 ; i < n; i++){
		cout << arr[i];
	}

	return 0;
}
