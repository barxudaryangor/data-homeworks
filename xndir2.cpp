#include <iostream>

int minAmount(int n) {
    if (n == 1) 
    {
        return 1;
    } 
    
    else if (n % 2 == 0) 
    {
        return minAmount(n / 2) + 1;
    } 
    else 
    {
        return minAmount(n / 2) + 2;
    }
}

int main() {
    int input;
    std::cin >> input;
    std::cout << minAmount(input);
    return 0;
}
