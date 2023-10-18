#include <iostream>

using namespace std;

struct Node {
    int item;
    struct Node *next;
};

typedef struct Node node;

class CLL {
  public:
    node *last, *temp, *ptr;
    int i, value;

    CLL() {
        last = 0;
    }  

    void create();
    void in_beg();
    void in_bet();
    void in_eng();
    void del_beg();
    void del_bet();
    void del_end();
    void search();
    void traverse();
};

void CLL::create() {
    cout << "Enter the item: ";
    cin >> value;
    ptr = new node;
    ptr -> item = value;
    if (last == 0) {
        last = ptr;
        ptr -> next = last;
    } else {
        ptr -> next = last -> next;
        last -> next = ptr;
        last = ptr;
    }
}

void CLL::in_beg() {
    int value;
    cout << "Enter the item to be inserted: ";
    cin >> value;
    ptr = new node;
    ptr -> next = last -> next;
    last -> next = ptr;
}

void CLL::in_bet() {
    int i, pos;
    cout << "Enter the position: ";
    cin >> pos;
    if (pos == 1) {
        in_beg();
        return;
    }
    temp = last -> next;
    for (i = 1; i < pos-1; i++) {
        temp = temp -> next;
        if (temp == last -> next) {
            cout << "Invalid position";
            break;
        }
    }
    if (temp != last -> next) {
        if (temp == last) 
            in_end();
        else {
            cout << "Enter the item: ";
            cin >> value;
            ptr = new node;
            ptr -> item = value;
            ptr -> next = temp -> next;
            temp -> next = ptr;
        }
    }
}


void CLL::in_end() {
    int value;
    cout << "Enter the item: ";
    cin >> value;
    ptr = new node;
    ptr -> item = value;
    ptr -> next = last -> next;
    last -> next = ptr;
}

void CLL::del_beg() {
    if (last == 0) {
        cout << "Empty";
        return;
    }
    temp = last -> next;
    if (last -> next == last)
        last = 0;
    else 
        last -> next = temp -> next;
    cout << "Deleted item is " << temp -> item;
    delete(temp);
}

void CLL::del_end() {
    if (last == 0) {
        cout << "Empty";
        return;
    }
    temp = last;
    if (last -> next == last)
        last = 0;
    else {
        ptr = last -> next;
        while (ptr -> next != last)
            ptr = ptr -> next;
        ptr -> next = temp -> next;
        last = ptr;
    }
    cout << "Deleted item is: " << temp -> item;
    delete(temp);
}

void CLL::del_beg() {
    int i, pos;
}