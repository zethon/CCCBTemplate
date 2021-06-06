#include <iostream>
#include "../lib/MyClass.h"

int main()
{
    app::MyClass obj("Hello");
    std::cout << obj.appendIt("library world!!") << '\n';
    
    return 0;
}