# Lab-2
Repository for Lab 2 submission

# Lab 2: Expressions and Interactivity
Objective: The goal of this lab is to write interactive C++ programs that take user input, perform mathematical calculations, and produce neatly formatted output. You will practice using cin, arithmetic operators, type casting, constants, and output manipulators from the <iomanip> library.
You will be submitting this lab via GitHub. You are welcome to either use CodeSpaces to write the code OR write it up somewhere else of your choice and then add the files to your repository.

## Part 1: Warm-up & Program Analysis
Before you write any code, analyze the following C++ program. Predict what its exact output will be and write down your reasoning.
Code:
```
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

Your Task:
On a separate document (e.g., a Google Doc or a text file), answer the following questions (2 pts each):
1. What will be the exact output for "Result 1"? Why isn't it 2.4?
2. What will be the exact output for "Result 2"? What does the % operator do?
3. What will be the exact output for "Result 3"?
4. What will be the exact output for "Result 4"?
5. What will be the exact output for "Result 5"? How does static_cast change the calculation?


## Part 2: Programming Exercise 1 - Magic Number Program
Objective: Write a program that asks the user for their favorite number and then performs a series of "magic" calculations with it.
Requirements:
1. Create a new C++ project named MagicNumber.
2. Your program must first prompt the user to enter their favorite integer.
3. Read the integer from the user and store it in a variable.
4. Perform the following sequence of calculations:
- Multiply the number by 2.
- Add 10 to the result.
- Divide the result by 2.
- Subtract the original favorite number from the result.
5. Display the final result to the user with a fun message. Spoiler alert: the result will always be 5!
Example Output:
```
Please enter your favorite number: 8
Your magic number is... 5!
```

## Part 3: Programming Exercise 2 - Sales Tax Calculator
Objective: Write a program that calculates the total cost of an item after adding sales tax. This will require you to work with floating-point numbers and format your output as currency.
Requirements:
1. Create a new C++ project named TaxCalculator.
2. Declare a const double variable to hold the sales tax rate. Set its value to 0.075 (for a 7.5% tax rate).
3. Prompt the user to enter the price of an item.
4. Read the price into a double variable.
5. Calculate the amount of sales tax for the item.
6. Calculate the total cost of the item (price + sales tax).
7. Display the original price, the sales tax amount, and the final total cost.
8. Your formatting may look weird!!!! (lots of decimal places). THIS IS OK. We skipped the part in the lecture notes that covers how to nicely format decimal places and you are not required to nicely format them.
- If you are curious about how to format your numbers so that they appear like dollars and cents, there are two steps:
  * (1) #include <iomanip> at the top of your file
  * cout << fixed << setprecision(2);

Example Output:
```
Enter the price of the item: 19.99
Original Price: $19.99
Sales Tax:    $1.50
Total Cost:   $21.49

```












## Part 4: Programming Exercise 3 - Pizza Party Calculator

Objective: You are planning a pizza party and need to figure out how many pizzas to order and how many slices each person gets. This program will require you to get multiple inputs and use division and the modulus operator. 🍕
Requirements:
1. Create a new C++ project named PizzaParty.
2. Prompt the user for three pieces of information:
- The number of people attending the party (an int).
- The number of slices per pizza (an int).
- The number of slices each person is expected to eat (an int).
3. Calculate the total number of slices needed for the party.
4. Calculate the total number of whole pizzas you need to order. You can't order half a pizza, so if you need 2.1 pizzas, you must order 3. Use integer division and think about how to handle remainders to solve this.
5. Calculate the number of leftover slices there will be after everyone has eaten their share from the pizzas you ordered.
6. Display the total pizzas to order and the number of leftover slices.
Example Output:
```
How many people are attending the party? 10
How many slices are in a pizza? 8
How many slices will each person eat? 3

You will need to order 4 pizzas.
There will be 2 leftover slices.
```

Challenge (Optional):

Can you also calculate and display how many full pizzas will be eaten and how many additional slices from the last pizza will be needed? For the example above, this would be 3 full pizzas and 6 additional slices.

Submission:
When you are finished, please add all parts of your submission to a public repository in GitHub and make a commit. You will turn in the link to your repository.
