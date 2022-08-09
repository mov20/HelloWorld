// Your First C++ Program
#include <iostream>

int aux_f(){
    const int i = 28*45; 
    return i;
}

int main() {
    // magic constant to print in Hello World
    // next line of strange comments

    std::cout << "Hello World! " << aux_f() << std::endl;
    return 0;
}

