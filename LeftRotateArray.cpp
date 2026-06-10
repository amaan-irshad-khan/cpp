#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> &arr, int n){
	int temp = 0;
	temp = arr[0];

	for(int i = 1; i < n; i++){
		arr[i-1] = arr[i];
	}
	arr[n-1] = temp;

	return arr;
}

int main(){
	vector<int> arr =  {1,2,3,4,5,6};

	vector<int>  k = rotateArray(arr, arr.size());

//	cout << "Rotated array: " <<  k << endl;

	for(int  i = 0 ; i < arr.size(); i++){
		cout << k[i] << " " ;
	}
	return 0;
}

