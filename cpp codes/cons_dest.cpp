// codes are from ai for understanding
#include <iostream>

class Sample {
public:
    int* data;

    Sample() {
        data = new int[10]; // Dynamically allocate an array of integers
        std::cout << "Constructor called." << std::endl;
    }

    // No destructor defined
};

int main() {
    Sample* s = new Sample(); // Constructor called

    delete s; // Memory for 's' is deallocated, but no destructor is called

    return 0;
}