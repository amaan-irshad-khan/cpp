#include<bits/stdc++.h>
using namespace std;

int isSorted(int n, vector<int> a){
	for(int i = 1 ; i < n; i++){
		if(a[i] >= a[i-1]){

		}
		else{
			return false;
		}
	}
	return true;
}


int main(){
	vector<int> a = {2,4,6,8,9};

	isSorted(a.size(), a);
	for(int i = 0 ; i < a.size(); i++){
		cout << a[i] << " " ;
	}

	cout << endl;

	return 0;
}
