#include <iostream>
#include "CoffeeAction.h"

using namespace std;

int main() {

    // Declaring variables used in the main file
    double userCash;
    string userChoice;
    char cleanUserChoice;

    // Loop the machine until a valid action has been completed
    do {

        // Prints out the visual instructions of the machine
        cout << "\n\tWelcome to the hot drinks dispensary!\n\n"
                "\tC(offee)\t\t8.00kr\n"
                "\tE(spresso)\t\t9.50kr\n"
                "\tO(Chocholate)\t\t7.50kr\n"
                "\tL(Caffe Latte)\t\t9.00kr\n"
                "\tP(Cappuccino)\t\t9.50kr\n";

        // Asks for the users cash input and option
        cout << "\n\tPlease input your cash and hit enter: ";
        cin >> userCash;

        cout << "\n\tPlease input what option you would like and hit enter: ";
        cin >> userChoice;

        // Cleans the userChoice input to ensure only one char is read and converts it into upper case
        cleanUserChoice = toupper(userChoice.at(0));

        // Creates the CoffeeAction and fills the parameters with the users input
        CoffeeAction coffeeAction(userCash, cleanUserChoice);

        // Error handling if the user did not enter enough money or an incorrect char
        if (coffeeAction.getChange() >= 0 && !coffeeAction.getProductName().empty()) {
            cout << "\n\tEnjoy your " << coffeeAction.getProductName() << "." << endl;
            break;
        } else {
            cout << "\n\tYou have chosen a invalid character or not entered enough money, please try again.\n" << endl;
        }

    } while (true);
}


