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

