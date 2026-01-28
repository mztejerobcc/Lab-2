```C++
#include <iostream>

int main() {
    int a = 5, b = 12, c = 2;
    double x = 10.0, y = 3.0;

    std::cout << "Result 1: " << b / a << std::endl;
    std::cout << "Result 2: " << b % a << std::endl;
    std::cout << "Result 3: " << x / y << std::endl;
    std::cout << "Result 4: " << (a + b + c) / y << std::endl;
    std::cout << "Result 5: " << static_cast<double>(b) / a << std::endl;

    return 0;
}
```

1. What will be the exact output for "Result 1"? Why isn't it 2.4?
    The exact result is 2. Since a and b are integers, the result is rounded to the lowest integer.
2. What will be the exact output for "Result 2"? What does the % operator do?
    The exact result is 2 because 2 is the remainder of the opperation 12 ÷ 5. 
3. What will be the exact output for "Result 3"?
    The exact result will be 3.33333 because both x and y are doubles which include decimals. 
4. What will be the exact output for "Result 4"?
    The exact result will be 6.33333 because a, b, and c are all cast as doubles due to y being a double.
5. What will be the exact output for "Result 5"? How does static_cast change the 
    The exact result will be 2.4 because y is cast as a double, which causes x to also be cast as a double.
