#include <iostream>

using namespace std;

class Array {
	public:
		int array[10];
		int n;
		void traversal();
		void insertion(int, int);
};

void Array::traversal() {
	int i;
	for (i = 0; i < n; i++) 
		cout<<array[i]<<" ";
	cout<<endl;
}

void Array::insertion(int num, int pos) {
	int i;
	for (i = n-1; i >= pos-1; i--)
		array[i+1] = array[i];
	array[pos-1] = num;
	++n;
}

int main() {
	int i, pos, num;
	Array object;
	cout<<"Enter the array size: ";
	cin>>object.n;
	cout<<"Enter the array elements: ";
	for (i = 0; i < object.n; i++) {
		cin>>object.array[i];
	}
	cout<<"Enter the required number and position: ";
	cin>>num>>pos;
	cout<<"Before insertion: "<<endl;
	object.traversal();
	cout<<"After insertion: "<<endl;
	object.insertion(num, pos);
	object.traversal();
	return 0;
}
