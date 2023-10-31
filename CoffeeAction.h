// CoffeeAction.h
#include <iostream>

void changeInCoins();

class CoffeeAction {
    std::string productName;
    double price;
    double payment;
    double change;

public:
    CoffeeAction(double money, char product) {

        switch (toupper(product)) {
            case 'C':
                price = 8;
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

        payment = money;
        change = payment - price;

        if (change > 0) {
            changeInCoins();
        }

    }
    void changeInCoins() {
        int total = (int) (change * 100);
        int ten = total / 1000;
        int five = (ten % 1000) / 500;
        int one = ((total % 1000) % 500) / 100;
        int half = (((total % 1000) % 500) / 100) / 50;
        int rest = ((((total % 1000) % 500) / 100) / 50) % 50;
        std::cout << "\tThis is your total change: " << change << "\n\t"
                  << "and this is a breakdown of what coins you will receive\n\t"
                  << "------------------------------------------------\n"
                  << "\tTen\tFive\tOne\tHalf\tRest\n\t"
                  << ten << "\t" << five << "\t" << one << "\t" << half << "\t" << rest << std::endl;
    }

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