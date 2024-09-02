#include <iostream>
#include <iomanip>

int main() {
 
    double pi = 3.14159;
    double r;
    
    std::cin >> r;
    
    double a = pi * r * r;
 
    std::cout << std::fixed << std::setprecision(4) << "A=" << a << std::endl;

    return 0;
}
