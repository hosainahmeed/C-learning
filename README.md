# C++ Learning Exercises

This repository contains my practice code while learning C++ fundamentals. Below are code examples demonstrating various concepts I've learned.

## Table of Contents
- [Variable Swapping](#variable-swapping)
- [Constants](#constants)
- [Naming Conventions](#naming-conventions)
- [Mathematical Operations](#mathematical-operations)
- [Sales Tax Calculator](#sales-tax-calculator)
- [Temperature Converter](#temperature-converter)
- [Circle Area Calculator](#circle-area-calculator)
- [Data Types](#data-types)
- [Brace Initialization](#brace-initialization)

## Variable Swapping
```cpp
#include <iostream>

int main() {
    int a = 2;
    int b = 3;
    int temp = a;
    a = b;
    b = temp;

    std::cout << a;  // Output: 3
    return 0;
}
```
## Naming Conventions
```cpp
#include <iostream>
int main() {
    const double pi = 3.14;
    // pi = 3; // Error: Cannot assign to const variable
    std::cout << pi;
    return 0;
}
```
## Naming Conventions
```cpp
int file_size;    // snake_case
int FileSize;     // PascalCase
int fileSize;     // camelCase
int iFileSize;    // Hungarian notation
```
## Mathematical Operations
```cpp
#include <iostream>

int main() {
    double x = 10;
    int y = 3;
    
    // Various operations
    int addition = x + y;
    int subtraction = x - y;
    int multiplication = x * y;
    double division = x / y;
    
    // Shortcuts
    x += 5;  // equivalent to x = x + 5
    x++;     // increment
    x--;     // decrement
    
    std::cout << division;  // Output: 3.33333
    return 0;
}
```
## Sales Tax Calculator
```cpp
#include <iostream>
using namespace std;

int main() {
    double sales = 95000;
    double state_tax = sales * (4 / 100.0);
    double county_tax = sales * (2 / 100.0);
    double total_tax = state_tax + county_tax;
    
    cout << "State Tax: $" << state_tax << endl;
    cout << "County Tax: $" << county_tax << endl;
    cout << "Total Tax: $" << total_tax << endl;
    
    return 0;
}
```
## Temperature Converter
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Enter temperature in Fahrenheit: ";
    double fahrenheit;
    cin >> fahrenheit;
    
    double celsius = (fahrenheit - 32) * 5 / 9;
    cout << "Temperature in Celsius: " << celsius << endl;
    
    return 0;
}
```
## Circle Area Calculator
```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Enter circle radius: ";
    double radius;
    cin >> radius;
    
    const double PI = 3.14;
    double area = PI * pow(radius, 2);
    cout << "Circle area: " << area << endl;
    
    return 0;
}
```
## Data Types
```cpp
#include <iostream>
using namespace std;

int main() {
    // Fundamental data types
    short s;          // 2 bytes
    int i;            // 4 bytes
    long l;           // 4 bytes
    long long ll;     // 8 bytes
    float f;          // 4 bytes
    double d;         // 8 bytes
    long double ld;   // 8 bytes
    bool b;           // true/false
    char c;           // 1 byte
    
    // Using auto
    auto price = 99.99;       // double
    auto interest = 3.57F;    // float
    auto size = 90000L;       // long
    auto valid = false;       // bool
    
    return 0;
}
```
## Brace Initialization
```cpp
#include <iostream>
using namespace std;

int main() {
    // Traditional initialization
    int number = 1.2;  // Implicit conversion to 1
    
    // Brace initialization (more type-safe)
    int number2{2};    // Exact type matching
    // int number3{1.2}; // Error: narrowing conversion
    
    // Empty braces initialize to zero
    int number4{};
    cout << number4;   // Output: 0
    
    return 0;
}
```
