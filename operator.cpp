#include <iostream>
class MyClass {
private:
    int value;
public:
    MyClass() : value(0) {}
    MyClass(int val) : value(val) {}

    // Overloading arithmetic operators
    MyClass operator+(const MyClass& other) const {
        return MyClass(value + other.value);
    }

    MyClass operator-(const MyClass& other) const {
        return MyClass(value - other.value);
    }

    MyClass operator*(const MyClass& other) const {
        return MyClass(value * other.value);
    }

    MyClass operator/(const MyClass& other) const {
        if (other.value == 0) {
            std::cerr << "Error: Division by zero\n";
            return MyClass();
        }
        return MyClass(value / other.value);
    }

    // Overloading comparison operators
    bool operator==(const MyClass& other) const {
        return value == other.value;
    }

    bool operator!=(const MyClass& other) const {
        return !(*this == other);
    }

    bool operator<(const MyClass& other) const {
        return value < other.value;
    }

    bool operator>(const MyClass& other) const {
        return value > other.value;
    }

    bool operator<=(const MyClass& other) const {
        return !(*this > other);
    }

    bool operator>=(const MyClass& other) const {
        return !(*this < other);
    }

    // Overloading unary operators
    MyClass operator-() const {
        return MyClass(-value);
    }

    MyClass operator+() const {
        return *this;
    }

    MyClass operator++() {
        ++value;
        return *this;
    }

    MyClass operator++(int) {
        MyClass temp = *this;
        ++(*this);
        return temp;
    }

    MyClass operator--() {
        --value;
        return *this;
    }

    MyClass operator--(int) {
        MyClass temp = *this;
        --(*this);
        return temp;
    }

    // Overloading assignment operators
    MyClass& operator=(const MyClass& other) {
        if (this != &other) {
            value = other.value;
        }
        return *this;
    }

    MyClass& operator+=(const MyClass& other) {
        value += other.value;
        return *this;
    }

    MyClass& operator-=(const MyClass& other) {
        value -= other.value;
        return *this;
    }

    MyClass& operator*=(const MyClass& other) {
        value *= other.value;
        return *this;
    }

    MyClass& operator/=(const MyClass& other) {
        if (other.value == 0) {
            std::cerr << "Error: Division by zero\n";
            return *this;
        }
        value /= other.value;
        return *this;
    }

    // Overloading stream operators
    friend std::ostream& operator<<(std::ostream& os, const MyClass& obj) {
        os << obj.value;
        return os;
    }

    friend std::istream& operator>>(std::istream& is, MyClass& obj) {
        is >> obj.value;
        return is;
    }
};

int main() {
    MyClass a(5);
    MyClass b(3);

    // Arithmetic operations
    MyClass c = a + b;
    MyClass d = a - b;
    MyClass e = a * b;
    MyClass f = a / b;

    std::cout << "Addition: " << c << std::endl;
    std::cout << "Subtraction: " << d << std::endl;
    std::cout << "Multiplication: " << e << std::endl;
    std::cout << "Division: " << f << std::endl;

    // Comparison operations
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;

    // Unary operations
    std::cout << "Negative of a: " << -a << std::endl;
    std::cout << "Post-increment of a: " << a++ << ", a: " << a << std::endl;
    std::cout << "Pre-increment of a: " << ++a << std::endl;
    std::cout << "Post-decrement of a: " << a-- << ", a: " << a << std::endl;
    std::cout << "Pre-decrement of a: " << --a << std::endl;

    // Assignment operations
    MyClass g = a;
    g += b;
    MyClass h = a;
    h -= b;
    MyClass i = a;
    i *= b;
    MyClass j = a;
    j /= b;

    std::cout << "Assignment addition: " << g << std::endl;
    std::cout << "Assignment subtraction: " << h << std::endl;
    std::cout << "Assignment multiplication: " << i << std::endl;
    std::cout << "Assignment division: " << j << std::endl;

    // Stream operations
    MyClass k;
    std::cout << "Enter a number: ";
    std::cin >> k;
    std::cout << "You entered: " << k << std::endl;

    return 0;
}
