#include <iostream>

class Integer {
private:
    int *ptr;

public:
    // Default constructor
    Integer() : ptr(new int(0)) {}

    // Parameterized constructor
    Integer(int value) : ptr(new int(value)) {}

    // Copy constructor
    Integer(const Integer &other) : ptr(new int(*other.ptr)) {}

    // Move constructor
    Integer(Integer &&other) noexcept : ptr(other.ptr) {
        other.ptr = nullptr;
    }

    // Copy assignment operator
    Integer& operator=(const Integer &other) {
        if (this != &other) {
            delete ptr;
            ptr = new int(*other.ptr);
        }
        return *this;
    }

    // Move assignment operator
    Integer& operator=(Integer &&other) noexcept {
        if (this != &other) {
            delete ptr;
            ptr = other.ptr;
            other.ptr = nullptr;
        }
        return *this;
    }

    // Getter method
    int getValue() const {
        return *ptr;
    }

    // Setter method
    void setValue(int value) {
        *ptr = value;
    }

    // Destructor
    ~Integer() {
        delete ptr;
    }
};

int main() {
    // Testing the Integer class
    Integer a; // Default constructor
    std::cout << "a: " << a.getValue() << std::endl;

    Integer b(42); // Parameterized constructor
    std::cout << "b: " << b.getValue() << std::endl;

    Integer c(b); // Copy constructor
    std::cout << "c: " << c.getValue() << std::endl;

    Integer d(std::move(b)); // Move constructor
    std::cout << "d: " << d.getValue() << std::endl;

    // Copy assignment
    a = c;
    std::cout << "a (after copy assignment): " << a.getValue() << std::endl;

    // Move assignment
    b = std::move(c);
    std::cout << "b (after move assignment): " << b.getValue() << std::endl;

    return 0;
}

