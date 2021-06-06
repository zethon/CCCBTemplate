#include <boost/test/unit_test.hpp>
#include <boost/test/data/test_case.hpp>

#include "../src/lib/MyClass.h"

BOOST_AUTO_TEST_SUITE(MyClass)

BOOST_AUTO_TEST_CASE(file_pattern)
{
    app::MyClass test("test");
    BOOST_TEST(test.appendIt("test") == "test test");
    BOOST_TEST(test.text() == "test");
}

BOOST_AUTO_TEST_SUITE_END()    