#include <iostream>
#include <string>

// The const keyword is sort of a fake keyword, mostly because it doesn't do much to change the code
// It helps with visibility and helps "enforce" rules, i.e. that the data is constant.

int main()
{
    const int MAX_AGE = 90;
    const std::string NAME = "AchroDev"; // A const isn't necessarily a "variable", just think of it as a value that will not change

    const int *a = new int; // Declaring a new integer variable on the heap, now as a const

    *a = 2;              // Since a is now a const int *, you can no longer mutate the data
    a = (int *)&MAX_AGE; // Although you can't change the data of the pointer, you can still change the pointer itself
    std::cout << *a << std::endl;

    std::cin.get();
}
