//
// Created by egitau on 2/22/2024.
//
#include <iostream>
#include <climits>
#include <iomanip>

using namespace std;
int main() {

    int int_max{INT_MAX};
    int int_min{INT_MIN};


    int char_max{CHAR_MIN};
    int char_min{CHAR_MIN};
    int char_bit{CHAR_BIT};

    unsigned long long ulong_long_max{ULLONG_MAX};

    long long_max{LONG_MAX};
    long long_min{LONG_MIN};

    long long llong_max{LLONG_MAX};
    long long llong_min{LLONG_MIN};


    cout << "INT_MAX " << int_max << endl;


    cout << "|" << setw(10) <<  "tips"
            << "|" << setw(10) <<  "baiti"
            << "|" << setw(10)<< "rakstzīmes"
            << "|" << setw(27)<< "min vērtība"
            << "|" << setw(27)<< "max vērtība"
            << "|" <<endl;

    cout << "|" << setw(85) << setfill('-')
         << "|" <<endl;

    cout << "|" << setw(10) << setfill(' ') << "bool"
         << "|" << setw(10) <<  sizeof(bool)
         << "|" << setw(10)<< "?"
         << "|" << setw(25)<< "?"
         << "|" << setw(25)<< "?"
         << "|" <<endl;

    cout << "|" << setw(85) << setfill('-')
         << "|" <<endl;

    cout << "|" << setw(10) << setfill(' ') << "char"
         << "|" << setw(10) <<  sizeof(char)
         << "|" << setw(10)<< "?"
         << "|" << setw(25)<< char_min
         << "|" << setw(25)<< char_max
         << "|" <<endl;

    cout << "|" << setw(85) << setfill('-')
         << "|" <<endl;

    cout << "|" << setw(10) << setfill(' ') << "int"
         << "|" << setw(10) <<  sizeof(int)
         << "|" << setw(10)<< "?"
         << "|" << setw(25)<< int_min
         << "|" << setw(25)<< int_max
         << "|" <<endl;

    cout << "|" << setw(85) << setfill('-')
         << "|" <<endl;

    cout << "|" << setw(10) << setfill(' ') << "unsigned"
         << "|" << setw(10) <<  sizeof(ulong_long_max)
         << "|" << setw(10)<< "?"
         << "|" << setw(25)<< "?"
         << "|" << setw(25)<< ulong_long_max
         << "|" <<endl;

    cout << "|" << setw(85) << setfill('-')
         << "|" <<endl;

    cout << "|" << setw(10) << setfill(' ') << "long"
         << "|" << setw(10) <<  sizeof(long_max)
         << "|" << setw(10)<< "?"
         << "|" << setw(25)<< long_min
         << "|" << setw(25)<< long_max
         << "|" <<endl;

    cout << "|" << setw(85) << setfill('-')
         << "|" <<endl;

    cout << "|" << setw(10) << setfill(' ') << "long long"
         << "|" << setw(10) <<  sizeof(llong_max)
         << "|" << setw(10)<< "?"
         << "|" << setw(25)<< llong_min
         << "|" << setw(25)<< llong_max
         << "|" <<endl;

    cout << "|" << setw(85) << setfill('-')
         << "|" <<endl;
    return 0;
}
