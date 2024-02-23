//
// Created by egitau on 2/22/2024.
//
#include <iostream>
#include <climits>
#include <iomanip>

using namespace std;
int main() {
    int a = 12;
    double b = 1.123456789;
    string c = "Hello";

    cout << "|" << setw(6) << setfill('*')<< a
         << "|" << setw(12) << setfill(' ') << fixed << setprecision(2)<< b
         << "|" << setw(6)<< c
         << "|" <<endl;


    cout << hex << a << endl; //izvada vērtību hex sistēmā
    cout << dec << a << endl; //izvada vērtību dec sistēmā
    cout << (a > 10) << endl;
    cout << boolalpha << (a > 10) << endl;
    cout << noboolalpha << (a > 10) << endl;



    return 0;
}
