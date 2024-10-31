#include <iostream>
#include <string>

struct USERDATA
{
    std::string name;
    int age;
    void (*printUserData)(const USERDATA &);

    void print() const
    {
        std::cout << "name: " << name << "\n" << "age: " << age << std::endl; 
    }
};

void printUserData(const USERDATA &userData)
{
    std::cout << "name: " << userData.name << "\n" << "age: " << userData.age << std::endl;
}

int main()
{
    struct USERDATA a = {"나동건", 26, printUserData};

    a.printUserData(a);
    a.print();

    return 0;
}