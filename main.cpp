//
// Created by jackr on 1/30/2024.
//

#include "Bolt_Hole_Pattern.h"
#include <iostream>
#include <vector>
#include <string>
#include <ostream>
#include <fstream>

using namespace std;
// int get_int_from_user();
// double get_float_from_user();
// Obtains user input for the calculations
void get_parameters();
// Obtains which pattern type the user wants
void get_menu_option(int &selection);
// Prints the locations of each hole
void print_locations(vector<float> vector1, vector<float> vector2);

int selection;
vector<float> xOffsetList;
vector<float> yOffsetList;
Bolt_Hole_Pattern layout;
int numHoles;
float size, firstHoleAngle, xOffset, yOffset;
int main() {
    cout << "---------------------" << endl << "Bolt Hole Pattern Calculator" << endl << "---------------------" << endl;
    get_menu_option(selection);
    switch (selection) {
        case 1: {
            //Bolt_Hole_Pattern::type = Bolt_Hole_Pattern::circle;
            get_parameters();
            layout.Bolt_Hole_Circle(numHoles, size, firstHoleAngle, xOffset, yOffset, xOffsetList, yOffsetList);
            break;
        }
        case 2: {
           // Bolt_Hole_Pattern::type = Bolt_Hole_Pattern::square;
            get_parameters();
            layout.Bolt_Hole_Square(size, firstHoleAngle, xOffset, yOffset, xOffsetList, yOffsetList);
            break;
        }
        case 3: {
           // Bolt_Hole_Pattern::type = Bolt_Hole_Pattern::hex;
            get_parameters();
            layout.Bolt_Hole_Hex(size, firstHoleAngle, xOffset, yOffset, xOffsetList, yOffsetList);
            break;
        }
    }
    print_locations(xOffsetList, yOffsetList);
    cout << "Enter some parameters for a square pattern! " << endl;
    Bolt_Hole_Pattern layout2;
    selection = 2;
    get_parameters();
    layout.Bolt_Hole_Square(size, firstHoleAngle, xOffset, yOffset, xOffsetList, yOffsetList);
    if  (layout == layout2) {
        cout << "Your pattern is the same size as the square pattern!" << endl;
    }
    else {
        if (layout <= layout2) {
            cout << "Your pattern is less than or equal too a square pattern" << endl;
        }
        if (layout >= layout2) {
            cout << "Your pattern is greater than or equal too a square pattern" << endl;
        }
    }

return 0;
}

void print_locations(vector<float> xOffsetListInput, vector<float> yOffsetListInput) {
    cout << "Here are the x-positions of your holes: " ;
    for (int i = 0; i < xOffsetListInput.size(); i++ ) {
        cout << xOffsetListInput[i];
        if (i < (xOffsetListInput.size() - 1)) {
            cout << ", ";
        }
    }
    cout << endl;
    cout << "Here are the y-positions of your holes: " ;
    for (int i = 0; i < yOffsetListInput.size(); i++ ) {
        cout << yOffsetListInput[i];
        if (i < (yOffsetListInput.size() - 1)) {
            cout << ", ";
        }
    }
    cout << endl;
}

void get_menu_option(int &selection) {
    cout << "Please select from the following options: " << endl;
    cout << "1. Bolt Hole Circle" << endl;
    cout << "2. Bolt Hole Square" << endl;
    cout << "3. Bolt Hole Hexagon" << endl;
    cout << "Please enter 1, 2, or 3: ";
    //selection = get_int_from_user();
    int input;
    cin >> input;
    selection = input;

}
void get_parameters() {
    if (selection == 1) {
        cout << "Please enter the number of holes in your pattern: ";
        cin >> numHoles;
        cout << endl;
    }
    cout << "Please enter the opposite hole distance of your pattern: ";
    cin >> size;
    cout << endl;
    cout << "Please enter the counterclockwise angle in degrees your first hole is offset from the x-axis: ";
    cin >> firstHoleAngle;
    cout << endl;
    cout << "Please enter the x-position offset of the center of you bolt hole pattern: " ;
    cin >> xOffset;
    cout << endl;
    cout << "Please enter the y-position offset of the center of your bolt hole pattern: ";
    cin >> yOffset;
    cout << endl;
}



