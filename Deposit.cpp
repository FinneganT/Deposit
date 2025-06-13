#include <iostream>
#include <string>

int main() {

    int Amount = 0;
    std::string name;
   
    std::cout << "Hello my name Jeff lufferfeild, whats your name?\n";
    std::cin >> name;

    std::cout << "Could you enter how much you would like to deposit?\n ";
    std::cin >> Amount;

    std::cout << " Your account has " << Amount << " dollors. " << " Would you like a recite?\n ";
    
    if (Amount > 75){
        std::cout << " You are rich\n";
    }
    else if (Amount < 75) {
        std::cout << "You are poor\n";
    }
    else{
        std::cout << "Something is worng\n";
    }
    return 0;
}

