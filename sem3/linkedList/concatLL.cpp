#include <iostream>

using namespace std;

struct Node {
    int item;
    struct Node *next;
}

typedef struct Node node;

class Linklist {
    public:
        int i, value;
        node *start, *temp, *ptr;

        void create();
        void traversal();
        void concatenate(Linklist);

        Linklist() {
            start = 0;
        }
};

void Linklist::create() {
    cout << "Enter item: ";
    cin >> value;
    ptr = new node;
    ptr -> item = value;
    ptr -> next = 0;

    if (start == 0) 
        start = ptr;
    else {
        temp = start;
        while(temp -> next != 0)
            temp = temp -> next;
        temp -> next = ptr;
    }
}

void Linklist::traversal() {
    if (start == 0) {
        cout << "List is empty";
        return;
    }
    ptr = start;
    while (ptr != 0) {
        cout << ptr -> item << " ";
        ptr = ptr -> next;
    }
}

void Linklist::concatenate(Linklist ob) {
    if (start == 0) {
        ob.traversal();
        return;
    } else if (ob.start == 0) {
        traversal();
        return;
    } else {
        temp = start;
        while (temp -> next != 0) 
            temp = temp -> next;
        temp -> next = ob.start;
    }
    cout << endl << "Concatenated list is: ";
    traversal();
}

int main() {
    int m, n, i;
    Linklist a, b;
    cout << "Enter the number of nodes in first list: ";
    cin >> m;

    for (i = 1; i <= m; i++) 
        a.create();

    cout << "Enter the number of nodes in second list";
    cin >> n;

    for (i = 1; i <= n; i++)
        b.create();

    cout << "First list is: ";
    a.traversal();

    cout << "Second list is: ";
    b.traversal();

    a.concatenate(b);
}