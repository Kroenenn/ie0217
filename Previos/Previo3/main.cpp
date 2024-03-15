#include <iostream>
#include "sum.hpp"
using namespace std;

int main() {
    int num1 = 5;
    int num2 = 3;
    int result = sum(num1, num2);

    std::cout << "La suma de " << num1 << " y " << num2 << " es " << result << std::endl;


    return 0;
}
