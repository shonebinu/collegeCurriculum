#include <iostream>

using namespace std;

class Alpha {
    int x;
    public:
        Alpha(int i) {
            cout<<"Alpha initialized"<<endl;
            x=i;
        }
        void display() {
            cout<<x;
        }
};

class Beta {
    float y;
    public:
        Beta(int j) {
            cout<<"Beta initialized"<<endl;
            y=j;
        }
        void dis() {
            cout<<y;
        }
};

class Gamma: public Beta, public Alpha {
    int m;
    public:
        Gamma(int a, float b, int c): Alpha(a), Beta(b) {
            m=c;
            cout<<"Gamma initialized"<<endl;
        }
};

int main() {
    Gamma g(1, 12.34, 50);
    return 0;
}