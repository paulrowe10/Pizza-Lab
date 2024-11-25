//Paul Rowe
//11/25/24
//Pizza Lab
//Extra: lets the user place another order using a do while loop
#include <iostream>
using namespace std;

//Declaration
double pizzaPrice(int toppings, char size);
void showBill(string name, char size, int toppings, double total);

int main()
{
    int toppings;
    char size;
    string name = "Paulie's Pizzeria";
    char repeat;

    //Do while loop
    do {
        cout << "Welcome to " << name << "!" << endl;
        cout << "Enter the number of toppings: ";
        cin >> toppings;
        cout << "Enter the size of your pizza (S or L): ";
        cin >> size;

        //Calling methods
        double price = pizzaPrice(toppings, size);
        showBill(name, size, toppings, price);

        cout << "Would you like to place another order? (y/n): ";
        cin >> repeat;
    } while (repeat == 'y');


    return 0;
}

//Definition
double pizzaPrice(int toppings, char size) {
    double cost;
    if (size == 'S') {
        cost = 5.99;
    }
    else if (size == 'L') {
        cost = 9.99;
    }
    else {
        cost = 0.0;
    }

    double toppingCost = toppings * 0.50;
    return cost + toppingCost;
}

void showBill(string name, char size, int toppings, double total) {
    cout << "\n----------- BILL -----------\n";
    cout << name << endl;

    if (size == 'S') {
        cout << "Size: Small" << endl;
    }
    else if (size == 'L') {
        cout << "Size: Large" << endl;
    }
    else {
        cout << "Size: Error" << endl;
    }

    cout << "Number of toppings: " << toppings << endl;
    cout << "Total price: $" << total << endl;
    cout << "\n----------------------------\n";
    cout << "Thank you. Come again soon!" << endl;

}
