#include <iostream>

#include "util.h"

template<class T>
int
arrSize(T* arr)
{
    return sizeof(arr)/sizeof(arr[0]);
}

void
println(std::string msg)
{
    print(msg);
    std::cout << std::endl;
}

void
print(std::string msg)
{
    std::cout << msg;
}