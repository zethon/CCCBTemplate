#include "MyClass.h"

namespace app
{

MyClass::MyClass(const std::string& text)
    : _text{text}
{
}

std::string MyClass::appendIt(const std::string& extra) const
{
    return _text + " " + extra;
}

std::string MyClass::text() const
{
    return _text;
}

}