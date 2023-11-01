// CoffeeAction.h
#include <iostream>

void changeInCoins();

class CoffeeAction {
    // Declaration of variables used in this scope
    std::string productName;
    double price;
    double payment;
    double change;

public:
    // The action of the machine which takes two parameters from the user
    CoffeeAction(double money, char product) {

        // Switch case which handles the users choice of char which leads to the corresponding product
        // and assigns price and productName the corresponding values to further process them
        switch (product) {
            case 'C':
                price = 8.00;
                productName = "Coffee";
                break;
            case 'E':
                price = 9.50;
                productName = "Espresso";
                break;
            case 'O':
                price = 7.50;
                productName = "Chocolate";
                break;
            case 'L':
                price = 9.00;
                productName = "Caffe Latte";
                break;
            case 'P':
                price = 9.50;
                productName = "Cappuccino";
                break;
        }

        // Reassigning variable to start the change process
        payment = money;
        change = payment - price;

        // Calls the change function if change is large or equal to 0
        if (change >= 0) {
            changeInCoins();
        }

    }

    void changeInCoins() {
        // Converts the total amount of change into coins to be received
        int total = (int) (change * 100);
        int ten = total / 1000;
        int five = (total % 1000) / 500;
        int one = ((total % 1000) % 500) / 100;
        int half = (((total % 1000) % 500) % 100) / 50;
        int rest = ((((total % 1000) % 500) % 100) % 50) % 50;
        // Visual statement for the user to see what the total change is and a breakdown of coins to be received
        std::cout << "\n\tThis is your total change: " << change << "\n\t"
                  << "and this is a breakdown of what coins you will receive\n\t"
                  << "-------------------------------------\n"
                  << "\tTen\tFive\tOne\tHalf\tRest\n\t"
                  << ten << "\t" << five << "\t" << one << "\t" << half << "\t" << rest << std::endl;
    }

    // Getters & Setters

    const std::string &getProductName() const {
        return productName;
    }

    void setProductName(const std::string &productName) {
        CoffeeAction::productName = productName;
    }

    double getPrice() const {
        return price;
    }

    void setPrice(double price) {
        CoffeeAction::price = price;
    }

    double getPayment() const {
        return payment;
    }

    void setPayment(double payment) {
        CoffeeAction::payment = payment;
    }

    double getChange() const {
        return change;
    }

    void setChange(double change) {
        CoffeeAction::change = change;
    }

};