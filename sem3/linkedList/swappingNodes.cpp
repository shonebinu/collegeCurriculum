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
        void interchange();

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
    cout << "The list is: ";
    while (ptr != 0) {
        cout << ptr -> item << endl;
        ptr = ptr -> next;
    }
}

void SL::interchange() {
    int i, p, q, data;
    cout << "Enter the positions to be interchanged: ";
    cin >> p >> q;

    temp = start;
    
    for (i = 1; i < p; i++) {
        temp = temp -> next;
        if (temp == 0) {
            cout << "Invalid position";
            break;
        }
    }
    ptr = start;
    for (i = 1; i < q; i++) {
        ptr = ptr -> next;
        if (ptr == 0) {
            cout << "Invalid position";
            break;
        }
    }
    if (ptr != 0 && temp != 0) {
        data = temp -> item;
        temp -> item = ptr -> item;
        ptr -> item = data;
        traversal();
    }
}

int main() {
    int m, i;
    SL ob;
    cout << "Enter the number of nodes in list: ";
    cin >> m;
    cout << "Enter the elements: ";
    for (i = 0; i < m; i++) 
        ob.create();
    ob.traversal();
    ob.interchange();
    return 0;
}