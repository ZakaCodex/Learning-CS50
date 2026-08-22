#include <iostream>
using namespace std;

int main()
{

    int nums[] = {10, 20, 30, 40};

    // cout << "The first number in array is : " << nums[0] << "\n";
    // cout << "The second number in array is : " << nums[1] << "\n";
    // cout << "The third number in array is : " << nums[2] << "\n";
    // cout << "The fourth number in array is : " << nums[3] << "\n";

    cout << sizeof(nums) / sizeof(nums[0]) << endl;

    return 0;
}
