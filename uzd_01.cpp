//
// Created by egitau on 2/22/2024.
//
#include <iostream>
#include <iomanip>

using namespace std;
int main() {

    char input;
    cout << "Ievadi vienu rakstzīmi ==> " << endl;
    cin >> input;

    cout << "character = " << input << endl;
    cout << dec << "decimal  number = " << int(input) << endl;
    cout << oct << "octal number = " << int(input) << endl;
    cout << hex << "hexadecimal number = " << int(input) << endl;

    return 0;
}