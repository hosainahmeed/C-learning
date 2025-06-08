#include <iostream>
// swap the value a to b and b to a
// int main() {
//     int a = 2;
//     int b = 3 ;
//     int temp = a ;
//     a = b ;
//     b = temp ;
//
//     std::cout << a ;
//     return 0;
// }


// int main () {
// const double pi = 3.14;
// pi =3 ; //Cannot assign to readonly type const double

//************* naming convention type *************

// int file_size ; //snake case
// int File_Size ; //pascal case
// int fileSize ; //camel case
// int iFileSize ; //hungarian notation case

//************* mathematical convention *************
// double x = 10;
// int y = 3 ;
// int z = x + y; // this is call addition
// int z = x - y; // this is call subtraction
// int z = x * y; // this is call multiplication
// double z = x / y; // this is cell division

// shortcut
// x = x + 5;
// and also we have increment and decrement
// x ++; // increment
// x --; // decreament

// std::cout << z ; // 3.33333


//     return 0 ;
// };

// problem-1 rule :z= x+10/3y assume x = 10 y =5 ans z = 1.3

// int main () {
//     double x = 10 ;
//     double y = 5 ;
//     double z = (x + 10) / (3 * y) ;
//     std::cout << z  ; // 1.333
//     return 0;
// }

// exersize  - 2
// using namespace std;
// // assume you have a store and your salse is  = $95000  sate tax = 4% and country tax = 2% and also total tax of your income
// int main () {
//     double salse = 95000;
//     double state_tax = salse * (4 / 100.0);
//     double county_tax = salse * (2 / 100.0);
//     double total_tax = state_tax + county_tax;
//     cout << state_tax << endl;
//     cout << county_tax << endl;
//     cout << total_tax << endl;
//     return 0 ;
// }