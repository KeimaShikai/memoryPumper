#include <cstdlib>
#include <iostream>
#include <ctime>

int main()
{
    std::srand(unsigned(std::time(0)));
    int firstVal, secondVal, trueResult, yourResult;
    int counter = 0;
    const int countBorder = 11;
    while (true)
    {
        if (counter >= countBorder) break;
        firstVal = rand() % 50 + 50;
        secondVal = rand() % 5 + 5;
        trueResult = firstVal * secondVal;
        std::cout << firstVal << " * " << secondVal
                  << " = ";
        std::cin >> yourResult;
        if (yourResult != trueResult)
        {
            std::cout << "You're wrong, dundun!\n"
                      << "Real answer is " << trueResult
                      << std::endl;
        }
        else
        {
            ++counter;
            std::cout << "Nice move!\n";
            std::cout << "There is " << countBorder - counter
                      << " left.\n";
        }
    }
    std::cout << "Good boy!\n";
    return 0;
}
