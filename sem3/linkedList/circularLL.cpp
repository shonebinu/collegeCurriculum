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

void CLL::del_bet() {
    int i, pos;
    cout << "Enter the position: ";
    cin >> pos;
    if (pos == 1) {
        del_beg();
        return;
    }
    ptr = last -> next;
    for (i = 1; i < pos-1; i++) {
        ptr = ptr -> next;
        if (ptr == last) {
            cout << "Invalid position";
            break;
        }
    }
    if (ptr != last) {
        if (ptr -> next == last)
            del_end();
        else {
            temp = ptr -> next;
            ptr -> next = temp -> next;
            cout << temp -> item << " is deleted";
            delete(temp);
        }
    }
}

void CLL::search() {
    int flag = 0;
    cout << "Enter the item to be searched: ";
    cin >> value;
    ptr = last -> next;
    while (ptr != last) {
        if (ptr -> item == value) {
            flag = 1;
            ptr = ptr -> next;
        }
    }
    if (last -> item == value) 
        flag = 1;

    if (flag == 1)
        cout << "Item present in the list";
    else 
        cout << "Item not present";
}

void CLL::traverse() {
    if (last == 0) {
        cout << "The list is empty" << endl;
        return;
    }
    ptr = last -> next;
    cout << "The list is: " << endl;
    while (ptr != last) {
        cout << ptr -> item << endl;
        ptr = ptr -> next;
    }
    cout << last -> item;
}

int main() {
    int ch;
    CLL ob;
    cout << endl << "\tMENU";
    while (true) {
        cout << endl << "1. Creation";
        cout << endl << "2. Insertion at beginning";
        cout << endl << "3. Insertion in between";
        cout << endl << "4. Insertion at end";
        cout << endl << "5. Deletion from beginning";
        cout << endl << "6. Deletion from end";
        cout << endl << "7. Deletion from a specified position";
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
            case 6: ob.del_end(); break;
            case 7: ob.del_bet(); break;
            case 8: ob.search(); break;
            case 9: ob.traverse(); break;
            case 10: return 0;
            default: cout << "Invalid choice";
        }
    }
    return 0;
}