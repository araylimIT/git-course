#include "coffe.h"
#include "latte.h"
#include "espresso.h"
#include "decoratorchocolate.h"
#include "decoratormilk.h"
#include "coffe.h"
#include "espresso.h"
#include "latte.h"
#include <iomanip>
#include <string>

#include <iostream>
using namespace std;


void DisplayMenu() {
    cout << "\n\n           MENU\n\n";
    cout << "1) Coffe\n";
    cout << "2) Coffe with milk\n";
    cout << "3) Coffe with chocolate and milk\n";
    

    cout << "4) Latte\n";
    
    cout << "5) Latte with milk\n";
    cout << "6) Latte with chocolate and milk\n";

    cout << "7) Espresso\n";
    cout << "8) Espresso with milk\n";
    cout << "9) Espresso with chocolate and milk\n";
    
    cout << "Enter your choice : ";
}

void c() {
    Coffe cofeee;
    cout << cofeee.price();
}
void cm() {
    DecoratorMilk CoffeWithMilk(new Coffe());
    std::cout << CoffeWithMilk.price() << std::endl;
}
void cmc() {
    DecoratorChocolate CofeeWithChocolateandMilk(new DecoratorMilk(new Coffe()));
    std::cout << CofeeWithChocolateandMilk.price() << std::endl;
}


void e() {
    Espresso esp;
    cout << esp.price();
}
void em() {
    DecoratorMilk EspWithMilk(new Espresso());
    std::cout << EspWithMilk.price() << std::endl;;
}
void emc() {
    DecoratorChocolate EspWithChocolateandMilk(new DecoratorMilk(new Espresso()));
    std::cout << EspWithChocolateandMilk.price() << std::endl;
}


void l() {
    Latte lat;
    cout << lat.price();
}
void lm() {
    DecoratorMilk LatteWithMilk(new Latte());
    std::cout << LatteWithMilk.price() << std::endl;
}
void lmc() {
    DecoratorChocolate LatteWithChocolateandMilk(new DecoratorMilk(new Latte()));
    std::cout << LatteWithChocolateandMilk.price() << std::endl;;
}

int main()
{
    int choice;
    
    string confirm;

    do {
        DisplayMenu();
        cin >> choice;
        cout << "\nIt will cost you : $ ";

        switch (choice) {
        case 1:
            c();
            break;
        case 2:
            cm();

            break;

        case 3:

            cmc();
            break;
        case 4:
            e();
            break;

        case 5:
            em();
            break;

        case 6:
            emc();
            break;
        case 7:
            l();
            break;

        case 8:
            lm();

            break;

        case 9:
            lmc();

            break;

        default: cout << "invalid";
            break;
        }



        cout << "\n\nPress Y or y to confritm your order\nIf you want to change your order press N or n: ";
        cin >> confirm;
    } while (confirm == "n" || confirm == "N");
    return 0;
}
