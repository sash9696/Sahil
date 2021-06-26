#include <iostream>

using namespace std;

//Time complexity - O(n)

int maxSumSubArray(int array[], int n) {
	int current_sum = 0;
	int max_sum = 0;

	for (int i=0; i<n; i++) {
		current_sum += array[i];
		if (current_sum > max_sum) {
			max_sum = current_sum;
		}
		if (current_sum < 0) {
			current_sum = 0;
		}
	}
	return max_sum;
}

int main() {
	int n;
	cout<<"Size: \n";
	cin>>n;
	int array[n];
	cout<<"Array elements: \n";
	for (int i=0; i<n; i++) {
		cin>>array[i];
	}

	cout<<"Max sum is "<<maxSumSubArray(array, n)<<endl;

	return 0;
}