#include <iostream>
#include "CoffeeAction.h"

using namespace std;

int main() {

    double userCash;
    string userChoice;
    char cleanUserChoice;

    do {

        cout << "\tPlease input cash and chose an option\n"
                "\tC(offee)\t\t8.00kr\n"
                "\tE(spresso)\t\t9.50kr\n"
                "\tO(Chocholate)\t\t7.50kr\n"
                "\tL(Caffe Latte)\t\t9.00kr\n"
                "\tP(Cappuccino)\t\t9.50kr\n";

        cin >> userCash >> userChoice;

        cleanUserChoice = userChoice.at(0);

        CoffeeAction coffeeAction(userCash, cleanUserChoice);

        if (coffeeAction.getChange() >= 0 && !coffeeAction.getProductName().empty()) {
            cout << "\n\tEnjoy your " << coffeeAction.getProductName() << "." << endl;
            break;
        } else {
            cout << "\n\tYou have chosen a invalid character or not entered enough money, please try again.\n" << endl;
        }

    } while (true);
}


