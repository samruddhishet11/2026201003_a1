#include <iostream>
#include<string>

void showLoginWelcome() 
{
    std::cout<<"\nStudent Login\n";
    std::cout<<"Please enter your student credentials.\n";
}

std::string getusername() 
{
    std::string uname;
    std::cout << "Username: ";
    std::getline(std::cin, uname);
    return uname;
}

bool isUnamevalid(const std::string& uname) {
    return uname.length() >= 3;
}