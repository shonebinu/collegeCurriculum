#include <iostream>

using namespace std;

struct Node {
    int item;
    struct Node *next;
};

typedef struct Node node;

class SL {
    public:
        int i, value;
        node *start, *temp, *ptr;
        void create();
        void traversal();
        void search();
        void in_beg(); // insert at beginning
        void in_end();
        void in_spec(); // insert at a specific position
        void del_beg();
        void del_end();
        void del_spec();
        
        SL() {
            start = 0;
        }
};

void SL::in_beg() {
    int value;
    cout << endl << "Enter the item to be inserted: ";
    cin >> value;
    ptr = new node;
    ptr -> item = value;
    ptr -> next = 0;
    temp -> next = ptr;
}

void SL::in_end() {
    int value;
    temp = start;
    while (temp -> next != 0) 
        temp = temp -> next;
    cout << "Enter the item to be inserted: ";
    cin >> value;
    ptr = new node;
    ptr -> item = value;
    ptr -> next = 0;
    temp -> next = ptr;
}

void SL::in_spec() {
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
                cout << endl << "No such position exists";
                break;
            }
        }
        if (temp != 0) {
            cout << endl << "Enter the item to be inserted: ";
            cin >> value;
            ptr = new node;
            ptr -> item = value;
            ptr -> next = temp -> next;
            temp -> next = ptr;
        }
    }
}

void SL::del_beg() {
    temp = start;
    start = start -> next;
    cout << "Deleted item is: " << temp -> item;
    delete(temp);
}

void SL::del_end() {
    ptr = start;
    while (ptr -> next -> next != 0) {
        ptr = ptr -> next;
    }
    temp = ptr -> next;
    ptr -> next = 0;
    cout << "Deleted item is: " << temp -> item;
    delete(temp);
}

void SL::del_spec() {
    int pos, i;
    cout << "Enter the position to be deleted: ";
    cin >> pos;
    if (pos == 1) 
        del_beg();
    else {
        ptr = start;
        for (i = 1; i < pos-1; i++) {
            ptr = ptr -> next;
            if (ptr == 0) {
                cout << "Invalid position";
                break;
            }
        }
        if (ptr != 0) {
            temp = ptr -> next;
            ptr -> next = temp -> next;
            cout << "Deleted item is: " << temp -> item;
            delete(temp);
        }
    }
}

void SL::create() {
    cout << "Enter the item: ";
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
    if (start == 0) {
        cout << endl << "The list is empty";
        return;
    }
    ptr = start;
    cout << "The list is: ";
    while (ptr != 0) {
        cout << ptr -> item << endl;
        ptr = ptr -> next;
    }
}

void SL::search() {
    int item, flag = 0;
    cout << "Enter the item to be searched: ";
    cin >> item;
    temp = start;
    while (temp != 0) {
        if (temp -> item == item) {
            flag = 1;
            break;
        }
        temp = temp -> next;
    }
    if (flag == 1)
        cout << endl << "Item is present in the list.";
    else 
        cout << endl << "Item is not present";
}

int main() {
    SL ob;
    int ch;
    while (true) {
        cout << endl << "1. Create \n2. Insertion at beginning \n3. Insertion in between \n4. Insertion at end" << endl;
        cout << "5. Deletion at beginning \n6. Deletion in between \n7. Deletion at end \n8. Search \n9. Traversal \n10. Exit" << endl;
        cout << endl << "Enter your choice: ";
        cin >> ch;
        switch(ch) {
            case 1: ob.create(); break;
            case 2: ob.in_beg(); break;
            case 3: ob.in_spec(); break;
            case 4: ob.in_end(); break;
            case 5: ob.del_beg(); break;
            case 6: ob.del_spec(); break;
            case 7: ob.del_end(); break;
            case 8: ob.search(); break;
            case 9: ob.traversal(); break;
            case 10: return 0;
            default: cout << "Wrong choice";
        }
    }
    return 0;
}