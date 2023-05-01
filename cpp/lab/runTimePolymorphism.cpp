#include <iostream>
#include <cstring>

using namespace std;

class Media {
    protected:
        char title[50];
        float price;
    public:
        Media(char *s, float a) {
            strcpy(title, s);
            price = a;
        }
        virtual void display() {}
};

class Book: public Media {
    int pages;
    public:
        Book(char *s, float a, int p): Media(s, a) {
            pages = p;
        }
        void display() {
            cout<<"Title: "<<title<<endl<<"Pages: "<<pages<<endl<<"Price: "<<price<<endl;
        }
};

class Tape: public Media {
    float time;
    public:
        Tape(char *s, float a, float t): Media(s, a) {
            time = t;
        }
        void display() {
            cout<<"Title: "<<title<<endl<<"Time: "<<time<<endl<<"Price: "<<price<<endl;
        }
};

int main() {
    char *title = new char[20];
    float price, time;
    int pages;
    cout<<"Enter the title, price and pages: ";
    cin>>title>>price>>pages;
    Book book1(title, price, pages);
    cout<<"Enter the title, price and time: ";
    cin>>title>>price>>time;
    Tape tape1(title, price, time);
    Media *list[2];
    list[0] = &book1;
    list[1] = &tape1;
    list[0] -> display();
    list[1] -> display();
    return 0;
}

