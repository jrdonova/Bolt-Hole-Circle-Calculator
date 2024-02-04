//
// Created by jackr on 1/30/2024.
//

#include "Bolt_Hole_Pattern.h"
#include <iostream>
using namespace std;
int get_int_from_user();
double get_float_from_user();
int get_menu_option();
int selection;

int main() {
    cout << "---------------------" << endl << "Bolt Hole Pattern Calculator" << endl << "---------------------" << endl;
    get_menu_option();
    switch (selection) {
        case 1: {

        }
        case 2: {

        }
        case 3: {

        }
    }
}

void get_menu_option(int &selection) {
    cout << "Please select from the following options: " << endl;
    cout << "1. Bolt Hole Circle" << endl;
    cout << "2. Bolt Hole Square" << endl;
    cout << "3. Bolt Hole Hexagon" << endl;
    cout << "Please enter 1, 2, or 3: ";
    selection = get_int_from_user();
}


