#include <iostream>

// Function to reverse the bits of a 32-bit unsigned integer
uint32_t reverseBits(uint32_t n) {
    uint32_t reversed = 0;
    for (int i = 0; i < 32; i++) {
        reversed = (reversed << 1) | (n & 1);
        n >>= 1;
    }
    return reversed;
}

// Function to calculate the ticket price based on reversed bits


int main() {
    uint32_t n;
    std::cout << "Enter the 32-bit unsigned integer: ";
    std::cin >> n;

    uint32_t price = reverseBits(n);
    std::cout << "Price of each ticket: " << price << std::endl;

    return 0;
}
