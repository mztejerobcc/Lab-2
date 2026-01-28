#include <iostream>
using namespace std;

int main() {
    int people;
    int slices_per_pizza;
    int slices_per_person;

    cout << "How many people are attending the party? ";
    cin >> people;

    cout << "How many slices are in a pizza? ";
    cin >> slices_per_pizza;

    cout << "How many slices will each person eat? ";
    cin >> slices_per_person;

    int remainder = (slices_per_person * people) % slices_per_pizza; // checks if numbers divide evenly
    int pizzas = (slices_per_person * people) / slices_per_pizza + (remainder > 0); // logic statement adds a pizza if the the numbers don't divide evenly
    int leftover_slices = (pizzas * slices_per_pizza) % (slices_per_person * people); // calculates leftover slices using number of pizzas

    // Challenge
    int whole_pizzas = (slices_per_person * people) / slices_per_pizza;
    int additional_slices = (slices_per_person * people) % slices_per_pizza;

    cout << endl;
    cout << "You will need " << pizzas << " pizzas." << endl;
    cout << "There will be " << leftover_slices << " slices leftover." << endl;

    cout << endl;
    cout << "You will use " << whole_pizzas << " whole pizzas." << endl;
    cout << "You will use " << additional_slices << " additional slices." << endl;

    return 0;
}