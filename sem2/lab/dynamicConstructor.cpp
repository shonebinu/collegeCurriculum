#include <iostream>
#include <cstring> //change the headers according to the compiler.

using namespace std;

class String1 {
    char *name;
    int length;
    public:
        void display() {
            cout<<name<<endl;
        }
        String1(const char *s) { //may not need `const` in some compilers.
            length = strlen(s);
            name = new char[length + 1];
            strcpy(name, s);
        }
        String1() {
            length = 0;
            name = new char[length + 1];
        }
        void join(String1 &a, String1 &b) {
            length = a.length + b.length;
            delete name; // I think the course meant `delete a.name; delete b.name;`
            name = new char[length + 1];
            strcpy(name, a.name);
            strcat(name, b.name);
        }
};

int main() {
    String1 a("Nirmala"), b("College"), c;
    c.join(a, b);
    c.display();
    return 0;
}
