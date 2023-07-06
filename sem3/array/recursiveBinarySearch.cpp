#include <iostream>

using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
	if (l <= r) {
		int mid = (l + r) / 2;
		if (arr[mid] == x) return mid;
		if (x < arr[mid]) return binarySearch(arr, l, mid-1, x);
		return binarySearch(arr, mid+1, r, x);
	}
	return -1;
}

int main() {
	int arr[] = {2, 4, 5, 10, 30};
	int x = 10;
	int n = sizeof(arr)/sizeof(arr[0]);
	int result = binarySearch(arr, 0, n-1, x);
	if (result == -1) cout<<"Element is not present in the array"<<endl;
	else cout<<"Element is present at the index "<<result<<endl;
	return 0;
}
