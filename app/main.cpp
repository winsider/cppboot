#include <iostream>
#include <{PROJECT_NAME}/{PROJECT_NAME}.hpp>

int main(int argc, char *argv[])
{
    HelloWorld hello("Hello World!");
    hello.print(std::cout);
    return 0;
}
