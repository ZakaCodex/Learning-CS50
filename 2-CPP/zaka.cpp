#include <iostream>
using namespace std;
int sum();
int main()
{
    int a, b;
    cout << "Enter two numbers: \n";
    cout << "number 1: ";
    cin >> a;
    cout << "number 2: ";
    cin >> b;
    cout << "Sum: " << a + b << endl;
    cout << "Sum (from function): " << sum() << endl;
    return 0;
}
int sum()
{

    int num1, num2;
    num1 = 10;
    num2 = 20;
    return num1 + num2;
}