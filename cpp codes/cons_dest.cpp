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
    Sample1() { std::cout << "Constructor called." << std::endl; }
    ~Sample1() { std::cout << "Destructor called." << std::endl; }
};

int main() {
   

    return 0;
}

int main() {
    // for class Sample2

    {
        Sample1 s1; // Constructor called, s1 goes out of scope -> Destructor called
    }

    Sample* s2 = new Sample(); // Constructor called
    delete s2; // Destructor called




// for class Sample1
    Sample1* s = new Sample1(); // Constructor called

    delete s; // Memory for 's' is deallocated, but no destructor is called

    return 0;
}