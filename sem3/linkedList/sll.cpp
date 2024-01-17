#include <iostream>

using namespace std;

struct Node {
  int item;
  struct Node *next;
};

typedef struct Node node;

class SLL {
  public:
    node *start, *temp, *ptr;
    void create();
    void traverse();
    void search();
    void insertBeg();
    void insertEnd();
    void insertPos();
    void delBeg();
    void delEnd();
    void delPos();
  SLL() {
    start = 0;
  }
};

void SLL::create() {
  ptr = new node;
  ptr -> next = 0;
  cout << "Enter the item: ";
  cin >> ptr -> item;
  if (start == 0) {
    start = ptr;
    return;
  }

  temp = start;
  while (temp -> next != 0) 
    temp = temp -> next;
  temp -> next = ptr;
}

void SLL::traverse() {
  if (start == 0) {
    cout << "The linked list is empty" << endl;
    return;
  }

  temp = start;
  cout << "The elements are: ";
  while (temp) {
    cout << temp -> item << " ";
    temp = temp -> next;
  }
  
  cout << endl;
}

void SLL::search() {
  int value, pos = 0;
  cout << "Enter the item to be searched: ";
  cin >> value;
  temp = start;
  while (temp) {
    pos++;
    if (temp -> item == value) {
      cout << value << " is present in the list at the position " << pos << endl;
      return;
    }
    temp = temp -> next;
  }
  cout << "The item is not present in the list" << endl;
}

void SLL::insertBeg() {
  ptr = new node;
  cout << "Enter the value: ";
  cin >> ptr -> item;
  ptr -> next = start;
  start = ptr;
}

void SLL::insertEnd() {
  ptr = new node;
  // ptr -> next = 0;
  cout << "Enter the value: ";
  cin >> ptr -> item;

  temp = start;
  while (temp -> next) 
    temp = temp -> next;

  temp -> next = ptr;
}

void SLL::insertPos() {
  int pos;
  cout << "Enter the position: ";
  cin >> pos;
  if (pos == 1) {
    insertBeg();
    return;
  }
  
  temp = start;
  for (int i = 1; i < pos-1; i++) {
    temp = temp -> next;

    if (!temp) {
      cout << endl << "No such position exists";
      return;
    }
  }

  ptr = new node;
  cout << "Enter the value: ";
  cin >> ptr -> item;
  ptr -> next = temp -> next;
  temp -> next = ptr;
}

void SLL::delBeg() {
  temp = start;
  start = start -> next;
  cout << "Deleted item is: " << temp -> item;
  delete temp;
}

void SLL::delEnd() {
  ptr = start;
  while (ptr -> next -> next) 
    ptr = ptr -> next;
  temp = ptr -> next;
  ptr -> next = 0;
  cout << "Deleted item is: " << temp -> item;
  delete temp;
}

void SLL::delPos() {
  int pos;
  cout << "Enter the position to be deleted: ";
  cin >> pos;
  if (pos == 1) {
    delBeg();
    return;
  }

  ptr = start;
  for (int i = 1; i < pos-1; i++) {
    ptr = ptr -> next;
    if (!ptr -> next) {
      cout << "Invalid position";
      return;
    }
  }
  temp = ptr -> next;
  ptr -> next = temp -> next;
  cout << "Deleted item is: " << temp -> item << endl;
  delete temp;
}

int main() {
  SLL list;
  int choice;
  while(true) {
    cout << endl << "0. Exit \n1. Create \n2. Traverse \n3. Search \n4. Insert at beg \n5. Insert at end \n6. Insert at pos \n7. Delete at beg \n8. Delete at end \n9. Delete at pos \nEnter your choice: ";
    cin >> choice;
    switch(choice) {
      case 0: return 0;
      case 1: list.create(); break;
      case 2: list.traverse(); break;
      case 3: list.search(); break;
      case 4: list.insertBeg(); break;
      case 5: list.insertEnd(); break;
      case 6: list.insertPos(); break;
      case 7: list.delBeg(); break;
      case 8: list.delEnd(); break;
      case 9: list.delPos(); break;
      default: cout << "Wrong choice";
    }
  }
  return 0;
}
