#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &a, int n){ // here n means size of the array
	int largest = a[0];
	int slargest = -1;

	for(int i = 1 ; i < n; i++){
		if(a[i] >  largest){
			slargest = largest;
			largest = a[i];
		}
		else if(a[i] != largest && a[i] > slargest){
			slargest = a[i];
		}
	}
	return slargest;
}



int secondSmallest(vector<int> &a, int n){
	int smallest = a[0];
	int ssmallest = INT_MAX;

	for(int i = 1; i < n; i++){
		if(a[i] < smallest){
			ssmallest = smallest;
			 smallest = a[i];

		}
		else if(a[i] != smallest && a[i] < ssmallest){
			ssmallest = a[i];
		}
	}
	return ssmallest;
}



int main(){
	vector<int> a = {1, 4, 2, 7, 5};

	cout << "Second largest: " << secondLargest(a, a.size()) << endl;
	cout << "Second smallest: " << secondSmallest(a, a.size()) << endl;

	return 0;
}
