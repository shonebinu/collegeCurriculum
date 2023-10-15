#include <iostream>

using namespace std;

struct Node {
    struct Node *prev;
    int item;
    struct Node *next;
}

