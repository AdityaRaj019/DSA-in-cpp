#include <iostream>
#include <sstream>

int main() {
    std::stringstream ss; // Create a stringstream object

    ss << "Hello " << "World! " << 123; // Insert string and integer into the stream
    std::string output;
    ss >> output; // Extract first word

    std::cout << "Extracted Word: " << output << std::endl; // Output: Hello
    return 0;
}
// In the above example:

// ss << "Hello World! 123"; inserts a formatted string into stringstream.
// ss >> output; extracts the first word ("Hello") from the string.


// (a) Convert int to string

  #include <iostream>
  #include <sstream>

 int main() {
    int num = 123;
    std::stringstream ss;
    ss << num; // Convert int to string
    std::string str = ss.str(); // Extract as string

    std::cout << "String: " << str << std::endl; // Output: 123
     return 0;
 }

//  Convert string to int

#include <iostream>
#include <sstream>

int main() {
    std::string str = "456";
    std::stringstream ss(str);
    int num;
    ss >> num; // Convert string to int

    std::cout << "Integer: " << num << std::endl; // Output: 456
    return 0;
}

// Example: Splitting a String

#include <iostream>
#include <sstream>

int main() {
    std::string input = "Apple Banana Mango";
    std::stringstream ss(input);
    std::string word;

    while (ss >> word) { // Extract words one by one
        std::cout << "Word: " << word << std::endl;
    }

    return 0;
}

// Example: Using getline() with stringstream
// getline(ss, variable, delimiter) allows reading a string with a specified delimiter.


#include <iostream>
#include <sstream>

int main() {
    std::string input = "10,20,30,40";
    std::stringstream ss(input);
    std::string token;

    while (getline(ss, token, ',')) { // Extract tokens separated by ','
        std::cout << "Token: " << token << std::endl;
    }

    return 0;
}

// Example: Using istringstream

#include <iostream>
#include <sstream>

int main() {
    std::string data = "100 200 300";
    std::istringstream iss(data);
    int num1, num2, num3;

    iss >> num1 >> num2 >> num3;
    std::cout << "Extracted: " << num1 << ", " << num2 << ", " << num3 << std::endl;
    
    return 0;
}

// Example: Using ostringstream

#include <iostream>
#include <sstream>

int main() {
    std::ostringstream oss;
    oss << "Name: " << "John" << ", Age: " << 25;
    std::string result = oss.str();

    std::cout << result << std::endl; // Output: Name: John, Age: 25
    return 0;
}


