#include <iostream>

using namespace std;

struct Node {
    struct Node *prev, *next;
    int item;
};

typedef struct Node node;

class DLL {
    public:
        node *start, *temp, *p, *ptr;

    DLL() {
        start = 0;
    }

    void create();
    void in_beg();
    void in_bet();
    void in_end();
    void del_beg();
    void del_end();
    void del_bet();
    void search();
    void traverse();
};

void DLL::create() {
    int i, value;
    cout << "Enter the item: ";
    cin >> value;
    ptr = new node;
    ptr -> item = value;
    if (start == 0) {
        ptr -> prev = 0;
        ptr -> next = 0;
        start = ptr;
    } else {
        temp = start;
        while (temp -> next != 0)
            temp = temp -> next;
        ptr -> prev = temp;
        temp -> next = ptr;
        ptr -> next = 0;
    }
}

void DLL::in_beg() {
    int value;
    cout << "Enter the item to be inserted: ";
    cin >> value;
    ptr = new node;
    ptr -> item = value;
    ptr -> next = start;
    ptr -> prev = 0;
    start -> prev = ptr;
    start = ptr;
}

void DLL::in_bet() {
    int i, pos, value;
    cout << "Enter the position: ";
    cin >> pos;
    if (pos == 1)
        in_beg();
    else {
        temp = start;
        for (i = 1; i < pos-1; i++) {
            temp = temp -> next;
            if (temp == 0) {
                cout << "No such node exist";
                break;
            }
        }
        if (temp != 0) {
            cout << "Enter the item: ";
            cin >> value;
            ptr = new node;
            ptr -> item = value;
            ptr -> next = temp -> next;
            temp -> next -> prev = ptr;
            ptr -> prev = temp;
            temp -> next = ptr;
        }
    }
}

void DLL::in_end() {
    int value;
    temp = start;
    while (temp -> next != 0) 
        temp = temp -> next;
    cout << "Enter the item: ";
    cin >> value;
    ptr = new node;
    ptr -> item = value;
    ptr -> next = 0;
    temp -> next = ptr;
    ptr -> prev = temp;
}

void DLL::del_beg() {
    if (start == 0)
        cout << "Empty";
    else {
        temp = start;
        start = start -> next;
        start -> prev = 0;
        cout << temp -> item << " is deleted";
        delete(temp);
    }
}

void DLL::del_end() {
    if (start == 0)
        cout << "Empty";
    else {
        ptr = start;
        while (ptr -> next -> next != 0)
            ptr = ptr -> next;
        temp = ptr -> next;
        ptr -> next = 0;
        cout << temp -> item << " is deleted";
        delete(temp);
    }
}


void DLL::del_bet() {
    int i, pos;
    cout << "Enter the position: ";
    cin >> pos;
    if (pos == 1) 
        del_beg();
    else {
        ptr = start;
        for (i = 1; i < pos-1; i++) {
            ptr = ptr -> next;
            if (ptr == 0) {
                cout << "Position not exist";
                break;
            }
        }
        if (ptr != 0) {
            temp = ptr -> next;
            ptr -> next = temp -> next;
            temp -> next -> prev = ptr;
            cout << temp -> item << " is deleted";
            delete(temp);
        }
    }
}

void DLL::search() {
    int value, flag = 0;
    cout << "Enter the item to be searched: ";
    cin >> value;
    ptr = start;
    while (ptr != 0) {
        if (ptr -> item == value) {
            flag = 1;
            break;
        }
        ptr = ptr -> next;
    }
    if (flag == 1)
        cout << "Item is present in the list";
    else 
        cout << "Item is not present";
}

void DLL::traverse() {
    if (start == 0) {
        cout << "The list is empty" << endl;
        return;
    }
    cout << "The forward traversal is: " << endl;
    temp = start;
    while (temp != 0) {
        cout << temp -> item << endl;
        temp = temp -> next;
    }
    cout << "The backward traversal is: " << endl;
    ptr = start;
    while (ptr -> next != 0)
        ptr = ptr -> next;
    while (ptr != 0) {
        cout << ptr -> item << endl;
        ptr = ptr -> prev;
    }
}

int main() {
    int ch;
    DLL ob;
    while (true) {
        cout << endl << "\tMENU";
        cout << endl << "1. Creation";
        cout << endl << "2. Insertion at beginning";
        cout << endl << "3. Insertion at specified position";
        cout << endl << "4. Insertion at end";
        cout << endl << "5. Deletion at beginning";
        cout << endl << "6. Deletion at specified position";
        cout << endl << "7. Deletion at end";
        cout << endl << "8. Search";
        cout << endl << "9. Traverse";
        cout << endl << "10. Exit";
        cout << endl << "Enter your choice: ";
        cin >> ch;
        switch(ch) {
            case 1: ob.create(); break;
            case 2: ob.in_beg(); break;
            case 3: ob.in_bet(); break;
            case 4: ob.in_end(); break;
            case 5: ob.del_beg(); break;
            case 6: ob.del_bet(); break;
            case 7: ob.del_end(); break;
            case 8: ob.search(); break;
            case 9: ob.traverse(); break;
            case 10: return 0;
            default: cout << "Invalid choice";
        }
    }
    return 0;
}
