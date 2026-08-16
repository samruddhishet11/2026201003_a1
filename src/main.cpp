#include <iostream>
#include <string>
void runLogin();

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
    std::cout<<"5. Exit the student portal.\n";
}

int main() {
    printWelcome();
    greetuser();
    showmenu();
    std::string c;

    std::cout<<"Choose an option:";
    std::getline(std::cin, c);
    if (c == "1") 
    void runLogin(); 
    else if (c == "2")
    std::cout << "Profile will be available in the next feature branch.\n";
    else if (c == "3")
    std::cout << "Dashboard will be available in the next feature branch.\n";
    else if (c == "4")
    std::cout << "Settings will be available in the next feature branch.\n";
    else if (c == "5") 
    std::cout << "Bye\n";
    else
    std::cout << "Please choose a number from 1 to 5.\n";
    return 0;
}