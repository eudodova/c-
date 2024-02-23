//
// Created by egitau on 2/22/2024.
//
#include <iostream>
#include <climits>

using namespace std;
int main() {
    int int_max{INT_MAX}; //max int
    long long long_long_max{LONG_LONG_MAX};
    unsigned long long ulong_long_max{ULLONG_MAX};
    cout << "INT_MAX " << int_max << endl;
    cout << "LONG_LONG_MAX " << long_long_max << endl;
    cout << "ULLONG_MAX " << ulong_long_max << endl;

    //palielina par viens --> kas notiek?
    int_max++;
    long_long_max++;
    ulong_long_max++;

    cout << "INT_MAX " << int_max << endl;
    cout << "LONG_LONG_MAX " << long_long_max << endl;
    cout << "ULLONG_MAX " << ulong_long_max<< endl; //tā kā unsigned, tad nākamā vērtība ir 0

    cout << "INT baitos = " << sizeof(int_max) << endl;
    cout << "LONG_LONG baitos = " << sizeof(long_long_max) << endl;
    cout << "ULLONG baitos = " << sizeof(ulong_long_max) << endl;
    return 0;
}
