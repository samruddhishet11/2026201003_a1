#include <iostream>
#include <string>

void printWelcome() 
{
    std::cout<<"Welcome to the Student Portal\n";
}

void greetuser()
{
    std::cout<<"Hello, user!";
}


void showmenu() 
{
    std::cout<<"\n1. Login\n";
    std::cout<<"2. View Profile\n";
    std::cout<<"3. View Dashboard\n";
    std::cout<<"4. View Settings\n";
    std::cout<<"5. Exit\n";
}

int main() {
    printWelcome();
    greetuser();
    showmenu();
    std::string c;

    std::cout<<"Choose an option:";
    std::getline(std::cin, c);
    std::cout<<"You selected option "<<c<<".\n";
    return 0;
}