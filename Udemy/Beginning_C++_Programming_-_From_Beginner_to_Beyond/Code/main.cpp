#include <iostream>
using namespace std;
int main() {
    char name[] {"Frank"};
    char *char_ptr1 = &name[0];
    char *char_ptr2 = &name[3];
    cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;
    return 0;
}
/* OUTPUT:
In the string Frank, n is 3 characters away from F
*/
