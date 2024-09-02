#include <iomanip>
#include <iostream>

int main() {

    double a, b;
    double average;

    std::cin >> a >> b;
    average = (a * 3.5 + b * 7.5) / (11);
    
    std::cout << std::fixed << std::setprecision(5) << "MEDIA = " << average
            << std::endl;

  return 0;
}
