#include <iostream>
#include <string>

// The const keyword is sort of a fake keyword, mostly because it doesn't do much to change the code
// It helps with visibility and helps "enforce" rules, i.e. that the data is constant.

class Entity
{
private:
    int m_X, m_Y;

public:
    // You can also use a const in methods to signify that the method will not change anything
    //
    int GetX() const
    {
        m_X = 2;
        return m_X;
    }

    // With a setter you are going to have to write to 'x' and dont' want to use a const.
    void setX(int x)
    {
        m_X = x;
    }
};

// We want to make the parameters a consts, copying objects can be really slow
void PrintEntity(const Entity &e)
{
    e = nullptr;
    std::cout << e.GetX() << std::endl;
}

int main()
{

    Entity e;

    const int MAX_AGE = 90;
    const std::string NAME = "AchroDev"; // A const isn't necessarily a "variable", just think of it as a value that will not change

    // const int *a = new int; // Declaring a new integer variable on the heap, now as a const that the data cannot be mutated
    // int const *a = new int; // The same thing as above, pay attention to where the pointer is
    // int *const a = new int;       // Declaring a new integer variable on the heap, now as a const that the pointer cannot be mutated
    const int *const a = new int; // Declaring a new integer variable on the heap, now as a const that the pointer nor data cannot be mutated

    *a = 2;              // Since a is now a const int *, you can no longer mutate the data
    a = (int *)&MAX_AGE; // Although you can't change the data of the pointer, you can still change the pointer itself
    std::cout << *a << std::endl;

    std::cin.get();
}
