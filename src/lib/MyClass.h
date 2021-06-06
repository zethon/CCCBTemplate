#pragma once
#include <string>

namespace app
{

class MyClass
{
    std::string _text;

public:
    explicit MyClass(const std::string& text);

    std::string appendIt(const std::string& extra) const;
    std::string text() const;
};

}