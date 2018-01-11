//
// Copyright 2018 Mohammed Nafees
//

// std
#include <iostream>

// WDOC
#include "./unique_ptr.h"

struct foo {};

int main(int argc, char const *argv[]) {
    mn::unique_ptr<int> intptr(new int);
    mn::unique_ptr<foo> fooptr(new foo);
    std::cout << "I won't leak since I use a smart pointer!" << std::endl;
    return 0;
}
