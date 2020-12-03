#include <iostream>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    size_t length {str.length()};
    char line[2*str.length()-1] {};
    for (auto c : str ) {
        line[length] = c;
    }
    return 0;
}
/* OUTPUT:

*/
