#include <iostream>
#define PI 3.14

using namespace std;

class Shape {
  float volume;

  public:
    void findVolume(float side) {
      volume = side*side*side;
    }

    void findVolume(float height, float radius) {
      volume = PI * radius * radius * height / 3;
    }

    void findVolume(float length, float width, float height) {
      volume = length * height * width;
    }

    void display() {
      cout<<"Volume = "<<volume<<endl<<endl;
    }
};


int main() {
  
  Shape cube, cone, cuboid;
  float side, height, radius, length, width, heightCuboid;

  cout<<"CUBE: "<<endl<<endl;
  cout<<"Enter the side length: ";
  cin>>side;
  cube.findVolume(side);
  cube.display();

  cout<<"CONE: "<<endl<<endl;
  cout<<"Enter the height and radius: ";
  cin>>height>>radius;
  cone.findVolume(height, radius);
  cone.display();

  cout<<"CUBOID: "<<endl<<endl;
  cout<<"Enter the length, width and height: ";
  cin>>length>>width>>heightCuboid;
  cuboid.findVolume(length, width, heightCuboid);
  cuboid.display();
  

  return 0;
}
