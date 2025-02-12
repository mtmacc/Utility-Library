# Utility Library

## Overview
Utility Library is a C++ library that provides a collection of useful utility functions for random number generation, character manipulation, encryption, decryption, and array operations. The library simplifies common operations and enhances productivity in C++ development.

## Features
- **Random Generation Functions:**
  - Generate random numbers within a range.
  - Generate random characters (uppercase, lowercase, digits, special characters, mix).
  - Generate random words and keys.
- **Swap Functions:**
  - Swap integers, doubles, strings, and DateLibrary objects.
- **Array Functions:**
  - Shuffle integer and string arrays.
  - Fill arrays with random numbers, words, and keys.
- **Text Processing:**
  - Encrypt and decrypt text with a custom key.
  - Generate tabulated spaces for formatting.

## Installation
1. Clone the repository:
   ```bash
   git clone https:https://github.com/mtmacc/Utility-Library.git
   ```
2. Include the header file in your C++ project:
   ```cpp
   #include "clsUtility.h"
   ```
3. Compile with:
   ```bash
   g++ main.cpp -o my_program
   ```

## Usage
Example usage of some core functions:
```cpp
#include "clsUtility.h"
#include <iostream>
using namespace std;

int main() {
    clsUtility::Srand();
    cout << "Random Number: " << clsUtility::RandFunction(1, 100) << endl;
    cout << "Random Char: " << clsUtility::RandomChar(clsUtility::SLetter) << endl;
    cout << "Encrypted Text: " << clsUtility::EncryptText("Hello", 3) << endl;
    cout << "Decrypted Text: " << clsUtility::DecryptText("Khoor", 3) << endl;
    return 0;
}
```

## Requirements
- C++11 or later
- A C++ compiler (GCC, Clang, MSVC)

## Contribution
Contributions are welcome! Fork the repository, enhance the code, and submit a pull request.

## License
This project is open-source and available under the MIT License.

## Contact
For any inquiries or suggestions, feel free to reach out via GitHub.

