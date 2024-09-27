#include <iostream>

// The const keyword is sort of a fake keyword, mostly because it doesn't do much to change the code
// It helps with visibility and helps "enforce" rules, i.e. that the data is constant.

int main()
{
    int a = 5; // Without signifying that the data is a constant variable
    a = 2;     // it allows you to change that data later on

    std::cin.get();
}
