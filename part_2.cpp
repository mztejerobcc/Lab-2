#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter your favorite number: ";
    cin >> num;

    // magic_num can be type int because (num*2 + 10) will always be an even number.
    int magic_num = (num*2 + 10) / 2 - num;

    cout << "You magic number is..." << magic_num << "!" << endl;

    return 0;
}