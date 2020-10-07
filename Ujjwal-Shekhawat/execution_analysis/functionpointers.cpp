#include<iostream>

void hello() {
    std::cout << "Hello world" << std::endl;
}

int main() {
    auto function = hello;
    function();

    return 0;
}

// Refer to functors