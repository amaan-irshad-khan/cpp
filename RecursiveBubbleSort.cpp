#include<bits/stdc++.h>
using namespace std;

void bS(int arr[] , int n){
	if(n==1) return;
	for(int i = 0; i < n-1; i++){
		if(arr[i] > arr[i+1]){
			swap (arr[i] , arr[i+1]);
		}
	}
	bS(arr , n-1);
}


int main(){
	int arr[] = {9,4,3,5,1,2};
	int n = sizeof(arr) / sizeof(arr[0]);

	bS(arr, n);

	for(int i = 0 ; i <= n-1; i++){
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}
