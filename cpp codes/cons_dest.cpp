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

/*
#include <iostream>
#include <cstring> // For strcpy

class Person {
public:
    char* name;   // Pointer to dynamically allocated memory for the name
    int age;      // Age of the person
    double* scores; // Pointer to dynamically allocated array for scores
    int scoreCount; // Number of scores

    // Constructor
    Person(const char* n, int a, int count) {
        age = a;
        scoreCount = count;
        name = new char[strlen(n) + 1]; // Allocate memory for the name
        strcpy(name, n); // Copy the name into allocated memory
        
        scores = new double[scoreCount]; // Allocate memory for scores
        for (int i = 0; i < scoreCount; ++i) {
            scores[i] = 0.0; // Initialize scores to 0
        }

        std::cout << "Constructor called for " << name << std::endl;
    }

    // Destructor
    ~Person() {
        delete[] name;   // Clean up the dynamically allocated memory for name
        delete[] scores; // Clean up the dynamically allocated array for scores
        std::cout << "Destructor called for " << name << std::endl;
    }
};

int main() {
    {
        Person p("Alice", 25, 5); // Stack allocation
        // Destructor will be called automatically when 'p' goes out of scope
    } // Destructor for 'p' is called here

    Person* ptr = new Person("Bob", 30, 3); // Heap allocation
    delete ptr; // Destructor for 'ptr' is called, cleaning up resources

    return 0;
}*/