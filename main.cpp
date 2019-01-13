#include <cstdlib>
#include <iostream>
#include <ctime>

int main()
{
    std::srand(unsigned(std::time(0)));
    int firstVal, secondVal, trueResult, yourResult;
    while (true)
    {
        firstVal = rand() % 50 + 50;
        secondVal = rand() % 5 + 5;
        trueResult = firstVal * secondVal;
        std::cout << firstVal << " * " << secondVal
                  << " = ";
        std::cin >> yourResult;
        if (yourResult != trueResult)
            std::cout << "You're wrong, dundun!\n"
                      << "Real answer is " << trueResult
                      << std::endl;
        else std::cout << "Nice move!\n";
    }
    return 0;
}
