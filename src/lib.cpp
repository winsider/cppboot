#include <{PROJECT_NAME}/{PROJECT_NAME}.hpp>

#include <iostream>
#include <memory>

HelloWorld::HelloWorld(std::string message) : m_message(std::move(message)){}

void HelloWorld::Print(std::ostream& os) const
{
    os << m_message;
}
