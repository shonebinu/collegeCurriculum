#include <iostream>

using namespace std;

struct Node {
    int item;
    struct Node *next;
};

typedef struct Node node;

class SL {
    public:
        node *start, *ptr, *temp;

        void create();
        void traversal();
        void sort();

        SL() {
            start = 0;
        }
};

void SL::create() {
    int i, value;
    cin >> value;
    ptr = new node;
    ptr -> item = value;
    ptr -> next = 0;
    if (start == 0)
        start = ptr;
    else {
        temp = start;
        while (temp -> next != 0) 
            temp = temp -> next;
        temp -> next = ptr;
    }
}

void SL::traversal() {
    ptr = start;
    while (ptr != 0) {
        cout << ptr -> item << endl;
        ptr = ptr -> next;
    }
}

void SL::sort() {
    int p;
    temp = start;
    while (temp != 0) {
        ptr = temp -> next;
        while (ptr != 0) {
            if (temp -> item > ptr -> item) {
                p = temp -> item;
                temp -> item = ptr -> item;
                ptr -> item = p;
            }
            ptr = ptr -> next;
        }
        temp = temp -> next;
    }
}

int main() {
    int n, i;
    SL ob;
    cout << "Enter the number of nodes in list: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (i = 1; i <= n; i++) 
        ob.create();
    
    cout << "\nList before sorting:";
    ob.traversal();
    ob.sort();
    cout << "\nSorted list is:";
    ob.traversal();
    return 0;
}
