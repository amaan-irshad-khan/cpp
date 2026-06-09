#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int> &arr, int n){
	int i = 0;
	for(int j = 1; j < n; j++){
		if(arr[j] != arr[i]){
			arr[i+1] = arr[j];
			i++;
		}
	}
	return i+1;
}


int main(){
	vector<int> arr = {1,1,3,3,4,4,4,5};

	int k = removeDuplicate(arr, arr.size());

	cout << "Number of uniqe elements: " << k << endl;

	cout << "Array after removal of duplicate elements: " << endl;
	for(int i = 0 ; i < k; i++){
		cout << i << endl;
	}

	cout << endl;
	return 0;
}
