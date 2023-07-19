#include <iostream>
#include <functional>
std::function<void(int, const std::string&)> myFuncObj;
void theFunc(int i, const std::string& s)
{
    std::cout << s << ": " << i << std::endl;
}
int main(int argc, char* argv[])
{
    myFuncObj = theFunc;
    myFuncObj(10, "hello world");
}