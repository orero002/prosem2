#include <iostream>
using namespace std;

class Addition {
public:
    // Data members
    double num1, num2, num3;

    //  calculating the product
    int product() {
        return num1 * num2 * num3;
    }
};

int main() {
    
    Addition I1;

    I1.num1 = 22;
    I1.num2 = 30;
    I1.num3 = 50;

    // display the product
    cout << "The product is " << I1.product() << endl;

    return 0;
}
