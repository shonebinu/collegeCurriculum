// Merging two sorted arrays

#include <iostream>

using namespace std;

class Array {
    public:
        int a[10], b[10], c[10];
        int p, q, r;
        void merging();
        void traversal();
};

void Array::merging() {
    int m, n, x;
    m = n = x = 0;
    while (m < p && n < q) {
        if (a[m] < b[n]) {
            c[x] = a[m];
            x++;
            m++;
        } else {
            c[x] = b[n];
            x++;
            n++;
        }
    }
    while (m < p) {
        c[x] = a[m];
        x++;
        m++;
    }
    while (n < q) {
        c[x] = b[n];
        x++;
        n++;
    }
    r = p + q;
}

void Array::traversal() {
    for (int i = 0; i < r; i++)
        cout<<c[i]<<"\t";
    cout<<endl;
}

int main() {
    int i;
    Array object;
    cout<<"Enter the size of the first and second array: ";
    cin>>object.p>>object.q;
    cout<<"Enter the elements of the first array: ";
    for (i = 0; i < object.p; i++)
        cin>>object.a[i];
    cout<<"Enter the elements of the second array: ";
    for (i = 0; i < object.q; i++)
        cin>>object.b[i];
    object.merging();
    object.traversal();
    return 0;
}