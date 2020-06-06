#include <sstream>
#include <gtest/gtest.h>
#include <{PROJECT_NAME}/{PROJECT_NAME}.hpp>

class Test_{PROJECT_NAME} : public ::testing::Test
{

};

TEST_F(Test_{PROJECT_NAME}, TestHelloWorld)
{
    auto hw = HelloWorld("message");
    std::stringstream ss;
    hw.Print(ss);
    ASSERT_EQ(ss.str(), "message");
}
