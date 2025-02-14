#include <iostream>
#include <string>
using namespace std;
int main() {

    std::cout << "Tell Me Your Name And Age Please: ";
    std::string name{};
    int age{ };
    std::cin >> name >> age;
    std::cout << "Hi " << name << " Your age " << age << " years old! \n" ;
    return 0; 
