#include <iostream>
#include <string>

// The const keyword is sort of a fake keyword, mostly because it doesn't do much to change the code
// It helps with visibility and helps "enforce" rules, i.e. that the data is constant.

int main()
{
    const int a = 5;                     // Switching to a const enforces that this variable will be constant and not change
    const std::string NAME = "AchroDev"; // A const isn't necessarily a "variable", just think of it as a value that will not change
    a = 2;                               // you'll notice now that this data is immutable

    std::cin.get();
}
