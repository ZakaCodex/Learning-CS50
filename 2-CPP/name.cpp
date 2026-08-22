#include <iostream>
#include <string>

int main()
{
std::cout << "Enter your name: ";
std::string name;
std::getline(std::cin, name);

std::cout << "Enter your age: ";
int age;
std::cin >> age;
std::cin.ignore(); // Clear the newline character from the input buffer


std::cout <<"Enter your city: ";
std::string city;
std::getline(std::cin, city);

std::cout << "Hello, " << name << "! You are " << age << " years old and you live in " << city << "." << "\n";
}