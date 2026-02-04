#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double sales_tax_rate = 0.075;
    double price = -1;

    while (price < 0) {
        cout << "Enter the price of your item: ";
        cin >> price;

        if (price < 0) {
            cout << "Price must be a positive number\n" << endl;
        }

        else {
            double sales_tax = sales_tax_rate * price;
            double total_cost = price + sales_tax;

            cout << fixed << setprecision(2);
            cout << "Price of item: $" << price << endl;
            cout << "Sales Tax: $" << sales_tax << endl;
            cout << "Total Cost: $" << total_cost << endl;
        }
    }

    return 0;
}