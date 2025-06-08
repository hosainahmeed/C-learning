#include <iostream>
// swap the value a to b and b to a
int main() {
    int a = 2;
    int b = 3 ;
    int temp = a ;
    a = b ;
    b = temp ;

    std::cout << a ;
    return 0;
}
