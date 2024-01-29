#include <iostream>

class Bird {
public:
    std::string name;
    int wingSpan;
};

int main() {
    Bird myBird;
    myBird.name = "Robin";
    myBird.wingSpan = 10;

    Bird& b2 = myBird; // Declaring a reference to the existing Bird object

    // Accessing the Bird object through the reference
    std::cout << "Name: " << b2.name << ", Wing Span: " << b2.wingSpan << std::endl;

    // Modifying the Bird object through the reference
    std::string hi = .name;
    b2.name = "Sparrow";
    b2.wingSpan = 8;

    // The original Bird object is now modified
    std::cout << "Name: " << myBird.name << ", Wing Span: " << myBird.wingSpan << std::endl;

    return 0;
}

