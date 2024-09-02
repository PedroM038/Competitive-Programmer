#include <iostream>
#include <iomanip>

int main (void){

    double a, b, c;
    double pi = 3.14159;

    std::cin >> a >> b >> c;
    double area_triangle = (a * c) / 2;
    double area_circle = pi * c * c;
    double area_trapezium = ((a + b) * c) / 2;
    double area_square = b * b;
    double area_rectangle = a * b;

    std::cout << std::fixed << std::setprecision(3) << "TRIANGULO: " 
        << area_triangle << std::endl;

    std::cout << std::fixed << std::setprecision(3) << "CIRCULO: " 
        << area_circle << std::endl;
    
    std::cout << std::fixed << std::setprecision(3) << "TRAPEZIO: " 
        << area_trapezium << std::endl;

    std::cout << std::fixed << std::setprecision(3) << "QUADRADO: " 
        << area_square << std::endl;
    
    std::cout << std::fixed << std::setprecision(3) << "RETANGULO: " 
        << area_rectangle << std::endl;

    return 0;
}
