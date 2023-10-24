#include <iostream>
#include <iomanip>

int num1 = 123;
int num2 = 4567;

double pi = 3.141592653589793;

int main(){

    std::cout << num1 <<std::endl <<num2 << std::endl;
    std::cout << std::setprecision(10) << pi << std::endl;  
    std::cout << "Primeira linha." << std::endl;
    std::cout << "Segunda linha." << std::endl;

}