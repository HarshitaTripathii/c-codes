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

class Sample1 {
public:
        int* data;

        Sample1() {
            data = new int[10]; // Dynamically allocate an array of integers
            std::cout << "Constructor called." << std::endl;
        }

        // Destructor to clean up allocated memory
        ~Sample1() {
            delete[] data; // Free the dynamically allocated array
            std::cout << "Destructor called." << std::endl;
}
};

int main() {
    // for class Sample1
    Sample* s = new Sample(); // Constructor called

    delete s; // Destructor will be called here




// for class Sample
    Sample* s = new Sample(); // Constructor called

    delete s; // Memory for 's' is deallocated, but no destructor is called
    // not an efficient way
    // Memory allocated for data is still leaked.

    return 0;
}