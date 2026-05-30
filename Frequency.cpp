#include<bits/stdc++.h>
using namespace std;

void frequency(int arr[] , int n){
	unordered_map<int, int> map;
	for(int i = 0; i<n; i++){
		map[arr[i]]++;
	}

	int maxfreq = 0;
	int minfreq = n;
	int maxelmnt = 0;
	int minelmnt = 0;

	for(auto it : map){
		int element = it.first;
		int count = it.second;

		if(count > maxfreq){
			maxfreq = count;
			maxelmnt = element;
		}

		if(count < minfreq){
			minfreq = count;
			minelmnt = element;
		}

	}

	cout << "highest frequency elemnt: " << maxelmnt << endl;
	cout << "lowest frequency elemnt: " << minelmnt << endl; 
}

int main(){
	int arr[] = {10, 20, 15, 5, 10, 20, 15, 5, 5};
	int n = 9;

	 frequency(arr , n);

	return 0;
}
