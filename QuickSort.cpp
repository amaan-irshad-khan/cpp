#include<bits/stdc++.h>
using namespace std;


int partition(vector<int> &nums, int low, int high){
	int pivot = nums[low];
	int i = low;
	int j = high;

	while(i<j){
		while(nums[i] <= pivot && i <= high-1){
			i++;
		}

		while(nums[j] > pivot && j >= low+1){
			j--;
		}
		if(i < j){
			swap(nums[i] , nums[j]);
		}

	}

	swap(nums[low] , nums[j]);
	return j;
}


void qS(vector<int> &nums, int low ,int high){
	if(low < high){
		int  pIndex = partition(nums , low , high);
		qS(nums, low, pIndex-1);
		qS(nums, pIndex+1, high);
	}
}


int main(){
	vector<int> nums = {4, 6, 2, 5, 7, 9, 1, 3};
	qS(nums, 0 , nums.size() - 1);

	for(int x : nums){
		cout << x << " ";
	}
	cout << endl;

	return 0;
}


