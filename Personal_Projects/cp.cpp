#include <iostream>
using namespace std;


int main ()
{

    int num; 
    cout << "Enter a number: ";
    cin >> num;

    cout << "the number of kilobytes is: " << num << "\n";
    cout << "the numer of bytes is: " << num * 1024 << "\n";
    cout << "the number of bits is: " << num * 1024 * 8 << "\n";

}

