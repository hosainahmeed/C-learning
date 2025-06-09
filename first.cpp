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

// using namespace std;
//
// int main () {
//     cout << "Enter a value :" << endl;
//     double value ;
//     cin >> value;
//
//     double z  = value * 2;
//     cout << "The Result is : " << z << endl;
//     return 0;
// }


// exercise -3 write a program to convert a temperature from celcius  rule is == C = (°F - 32) × 5/9

// using namespace std;
//
// int main() {
//     cout << "welcome , please check your temperature " << endl;
//     double fahrenheit;
//     cout << "please enter fahrenheit : " << endl;
//     cin >> fahrenheit;
//     double converted_celsius = (fahrenheit - 32) * 5 / 9;
//     cout << "Your temperature is " << converted_celsius << " celcius" << endl;
//     return 0 ;
// }

// floor form cmath

// #include <cmath>
// using namespace std;
//
// int main() {
//     double result = floor(1.2);
//     cout << result << endl;
//     return 0;
// }

// pow from cmath

// #include <cmath>
//
// int main() {
//     double result = pow(2, 3);
//     std::cout << result << std::endl;
//     return 0;
// }

//Exercise --write a program to calculate the area of circle
// #include <cmath>
// using namespace std;
//
// int main() {
//     double radius;
//     cout << "please enter the circle radius: ";
//     cin >> radius;
//     const double PI = 3.14;
//     double circle_radius = PI * pow(radius, 2);
//     cout << circle_radius << endl;
//     return 0;
// }

// Fandamental data types
//types
/*short ---- 2bytes
 * int ----- 4bytes
 * long ---- 4bytes
 * long long -- 8bytes
 * float ---- 4
 * double ---- 8 bytes
 * long double -- 8 bytes
 * bool  ---------- true/false
 * char -------- 1
 */
// new interesting things cal auto and also see all the types in code

// using namespace std;
//
// int main () {
//     double price = 99.99;
//     float priceInterest = 3.57F;
//     long fileSize = 900000L;
//     char letter = 'a';
//     // bool isValid = false;
//     // this is also showing isValid is a boolean type
//     // so you can use the auto in complex situation
//     auto isValid = false;
// }


// new thing {} -- brace lets see in code first
// using namespace std;
//
// int main() {
//     int number = 1.2;
//     cout << number << endl;
//     /*if i print this
//      * its acctually printing 1 , but you can see this 1.2 is not valid of int
//      * so how should we avoid this type of cinario , here comes the brac --{}
//      */
//     int number2{2};
//     /*now you can see this showing compiler error
//      *so you cant compile that
//      *and also one more benifit to use this if you use like this -- int number2 {}
//      *if you leave that without any assign this accutually showing 0 instead of giving
//      *a random number
//      */
//     cout << number2 << endl;
//     return 0;
// }
