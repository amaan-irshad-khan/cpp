#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> a(5);
//	a.push_back(43,23);
	a.push_back(3);
	a.push_back(5);
	a.push_back(78);
	a.push_back(2);
	cout << "element at second index: " << a.at(1) << endl;
	cout << "print a" << endl;
	for(int i:a){
		cout << i << " ";
	}
	cout << "capacity" << a.capacity();
	cout << "front " << a.front();
	cout << " back " << a.back();

}
