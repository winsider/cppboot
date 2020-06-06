#include <gtest/gtest.h>
#include <{PROJECT_NAME}/{PROJECT_NAME}.hpp>

class Test_{PROJECT_NAME} : public ::testing::Test
{

};

TEST_F(Test_{PROJECT_NAME}, TestSomething)
{
    ASSERT_TRUE(true);
//    HelloWorld(const std::string message);
//    void Print(std::ostream &os) const;

}
