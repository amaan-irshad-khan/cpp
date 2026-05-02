#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cout << "Enter the size of array: ";
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cout << "Enter the " << i <<  " element: ";
		cin >> arr[i];
	}

	map<long , long> mpp;
	for(int i=0; i<n; i++){
		mpp[arr[i]]++;
	}

	int q;
	cin >> q;
	while(q--){
		int num;
		cout << "Enter the Number: ";
		cin >> num;
		cout << mpp[num] << endl;
	}
	return 0;
}
