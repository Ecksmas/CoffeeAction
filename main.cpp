#include <iostream>
#include "CoffeeAction.h"

using namespace std;

int main() {

    double userCash;
    char userChoice;

    do {

        cout << "\tPlease input cash and chose an option\n"
                "\tC(offee)\t\t8.00kr\n"
                "\tE(spresso)\t\t9.50kr\n"
                "\tO(Chocholate)\t\t7.50kr\n"
                "\tL(Caffe Latte)\t\t9.00kr\n"
                "\tP(Cappuccino)\t\t9.50kr\n";

        cin >> userCash >> userChoice;

        CoffeeAction coffeeAction(userCash, userChoice);

        if (coffeeAction.getChange() >= 0) {
            cout << "\n\tEnjoy your " << coffeeAction.getProductName() << endl;
            break;
        }

        cout << "\tNot enough money, try again." << endl;

    } while (true);
}


