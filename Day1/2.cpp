#include <iostream>
using namespace std; //make names from std visible without std:: prefix

double square(double x){ //square a double precision floating point number
    return x*x;
}

void print_square(double x){
    cout << "The square of " << x << " is " << square(x) << "\n";
}

int main(){
    print_square(1.234);
    return 0;
}