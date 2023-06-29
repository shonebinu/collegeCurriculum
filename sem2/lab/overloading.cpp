#include <iostream>

using namespace std;

class Shape {
    public:
        float volume(float side) {
            return side*side*side;
        }
        float volume(float radius, float height) {
            return 3.14159*radius*radius*height;
        }
        float volume(float length, float width, float height) {
            return length*width*height;
        }
};

int main() {
    Shape s;
    float cubeVolume = s.volume(5.0);
    float cylinderVolume = s.volume(3.0, 7.0);
    float boxVolume = s.volume(2.0, 4.0, 6.0);

    cout << "Volume of cube: " << cubeVolume << endl;
    cout << "Volume of cylinder: " << cylinderVolume << endl;
    cout << "Volume of rectangular box: " << boxVolume << endl;
}