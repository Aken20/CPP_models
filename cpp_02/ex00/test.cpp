#include <iostream>

class MyClass {
private:
    int* data;

public:
    // Constructor
    MyClass(int value) : data(new int(value)) {}

    // Destructor
    ~MyClass() {
        delete data;
    }

    // Copy Constructor
    MyClass(const MyClass& other) : data(new int(*other.data)) {}

    // Copy Assignment Operator
    MyClass& operator=(const MyClass& other) {
        if (this == &other) return *this; // self-assignment check

        // Delete the existing resource
        delete data;

        // Allocate new memory and copy the value
        data = new int(*other.data);

        return *this;
    }

    void display() const {
        std::cout << "Value: " << *data << std::endl;
    }
};

int main() {
    MyClass a(10);
    MyClass b(20);
    a = b; // Use copy assignment
    a.display(); // Should display 20

    return 0;
}
