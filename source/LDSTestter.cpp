#include <iostream>
#include "Stack/StackBase.h"

int main(int argc, char const *argv[])
{
    LDS::Stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    int top;
    stack.pop(top);

    std::cout << top << std::endl;
    return 0;
}
