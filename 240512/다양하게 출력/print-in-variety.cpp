#include <iostream>
#include <iomanip>

int main() {
    char c1[20] = "Total days in Year";
    int i1 = 365;
    char c2[20] = "Circumference rate";
    double f1 = 3.1415926535;
    std::cout << c1 << std::endl;
    std::cout << i1 << std::endl;
    std::cout << c2 << std::endl; 
    std::cout << std::setprecision(16) << f1 << std::endl;
    return 0;
}