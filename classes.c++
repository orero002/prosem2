//classes and objects
# include <iostream>
using namespace std;

class cylinder{

    public:
    // data members
    double radius, height;

    int volume(){
        return (3.142 * radius * radius * height);
    }
   double surface_area (){

    return 2 * (2 * 3.142 * radius * radius) + (2 * 3.142 * radius * height);
   }

};
int main (){
    // Creating an object (c1, c2);
    cylinder C1;

    C1. radius =14;
    C1. height =50;

    

    cout<<"the volume is "<<C1. volume()<<endl;
    cout<<"the surfave area is "<<C1. surface_area()<<endl;


    return 0;
}