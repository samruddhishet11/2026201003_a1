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

void runLogin() {
    showLoginWelcome();
    std::string uname = getusername();
    if(isUnamevalid(uname)) 
        std::cout<<"Login successful. Welcome,"<<uname<<".\n";
    else 
        std::cout<<"Username must contain at least 3 characters.\n";
}