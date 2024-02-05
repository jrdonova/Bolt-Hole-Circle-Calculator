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
int get_int_from_user();
double get_float_from_user();
void get_parameters();
int get_menu_option();
int selection;
vector<float> xOffsetList;
vector<float> yOffsetList;
Bolt_Hole_Pattern layout;
int numHoles;
float size, firstHoleAngle, xOffset, yOffset;
int main() {
    cout << "---------------------" << endl << "Bolt Hole Pattern Calculator" << endl << "---------------------" << endl;
    get_menu_option();
    switch (selection) {
        case 1: {
            Bolt_Hole_Pattern::type = Bolt_Hole_Pattern::circle;
            get_parameters();
        }
        case 2: {
            Bolt_Hole_Pattern::type = Bolt_Hole_Pattern::square;
            get_parameters();
        }
        case 3: {
            Bolt_Hole_Pattern::type = Bolt_Hole_Pattern::hex;
            get_parameters();
        }
    }
    cout << "The x-postions of your holes are as follows: " ;

}
//hi
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
void get_paramters() {
    if (Bolt_Hole_Pattern::type == Bolt_Hole_Pattern::circle) {
        cout << "Please enter the number of holes in your pattern: ";
        cin >> numHoles;
        cout << endl;
    }
    cout << "Please enter the counterclockwise angle in degrees your first hole is offset from the x-axis: ";
    cin >> firstHoleAngle;
    cout << endl;
    cout << "Please enter the x-position offset of the center of you bolt hole pattern" ;
    cin >> xOffset;
    cout << endl;
    cout << "Please enter the y-position offset of the center of your bolt hole pattern: ";
    cin >> yOffset;
    cout << endl;
}



