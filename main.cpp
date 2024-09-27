#include <iostream>
#include <string>

// The const keyword is sort of a fake keyword, mostly because it doesn't do much to change the code
// It helps with visibility and helps "enforce" rules, i.e. that the data is constant.

int main()
{
    const int MAX_AGE = 90;
    const std::string NAME = "AchroDev"; // A const isn't necessarily a "variable", just think of it as a value that will not change

    int *a = new int; // Declaring a new integer variable on the heap

    *a = 2;              // Since it isn't a const, a can be dereferenced and the value reassigned.
    a = (int *)&MAX_AGE; // The actual pointer can also be reassigned to something like a reference to MAX_AGE, but you will have to cast the value to a normal int *
                         // this IS NOT recommended as you are breaking the const promise.
    std::cout << *a << std::endl;

    std::cin.get();
}
