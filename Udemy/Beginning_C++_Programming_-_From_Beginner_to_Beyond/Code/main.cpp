#include <iostream>
#include <climits>
using namespace std;
int main() {
    cout << "sizeof: " << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "long long: " << sizeof(long long) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "long double: " << sizeof(long double) << endl;
    cout << "=================<climits>==================" << endl;
    cout << "climits minimum vals" << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LLONG_MIN << endl;
    cout << "climits maximum vals" << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LLONG_MAX << endl;
    cout << "=================sizeof variable names==================" << endl;
    int age {21};
    cout << "age is " << sizeof(age) << endl;
    double wage {22.24};
    cout << "wage is " << sizeof(wage) << endl;
    return 0;
}
/* OUTPUT: 
sizeof: 
char: 1 
int: 4
unsigned int: 4
short: 2
long: 4
long long: 8
float: 4
double: 8
long double: 16
=================<climits>==================
climits minimum vals
char: -128
int: -2147483648
short: -32768
long: -2147483648
long long: -9223372036854775808
climits maximum vals
char: 127
int: 2147483647
short: 32767
long: 2147483647
long long: 9223372036854775807
=================sizeof variable names==================
age is 4
wage is 8
*/
