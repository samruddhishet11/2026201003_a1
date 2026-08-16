#include <iostream>

void printWelcome() 
{
    std::cout << "Welcome to the Student Portal\n";
}

void greetuser()
{
    std::cout<<"Hello, user!";
}

int main() {
    printWelcome();
    greetuser();
    return 0;
}