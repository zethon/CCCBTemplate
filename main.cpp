#include <iostream>
#include <boost/format.hpp>

int main()
{
    std::cout <<boost::format("%1% %2%!") % "Hello" % "World" << '\n';
}