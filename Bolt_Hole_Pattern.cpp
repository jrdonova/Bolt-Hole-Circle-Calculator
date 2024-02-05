//
// Created by jackr on 2/3/2024.
//
#include "Bolt_Hole_Pattern.h"
using namespace std;

    Bolt_Hole_Pattern::Bolt_Hole_Pattern() {

        numHoles = 0;
        size = 0;
        firstHoleAngle = 0;
        xOffset = 0;
        yOffset = 0;
        type = circle;
    }
    void Bolt_Hole_Pattern::Bolt_Hole_Circle(int holenum, float inputSize, float inputFirstHoleAngle, float inputXOffset, float inputYOffset,  vector<float> &vecX, vector<float> &vecY) {
        float xPos, yPos, spacing;
        numHoles = holenum;
        size = inputSize;
        firstHoleAngle = inputFirstHoleAngle;
        xOffset = inputXOffset;
        yOffset = inputYOffset;
        type = circle;
        float first_hole_radians = (firstHoleAngle * M_PI) / 180;
        float i = 0;
        for (int k = 1; k <= numHoles; k++ ) {
            xPos = (size / 2) * cos(first_hole_radians + i) + xOffset;
            yPos = (size / 2) * sin(first_hole_radians + i) + yOffset;
            spacing = 2 * M_PI / numHoles;
            i += spacing;
            vecX.push_back(xPos);
            vecY.push_back(yPos);
        }

    }
    void Bolt_Hole_Pattern::Bolt_Hole_Square( float inputSize, float inputFirstHoleAngle, float inputXOffset, float inputYOffset, vector<float> &vecX, vector<float> &vecY) {
        float xPos, yPos;
        size = inputSize;
        firstHoleAngle = inputFirstHoleAngle;
        xOffset = inputXOffset;
        yOffset = inputYOffset;
        type = square;
        float first_hole_radians = (firstHoleAngle * M_PI) / 180;
        float i = (M_PI / 4);
        for (int k = 1; k <= 4; k++ ) {
            xPos = (size / 2) * cos(first_hole_radians + i) + xOffset;
            yPos = (size / 2) * sin(first_hole_radians + i) + yOffset;
            i += (M_PI / 2);
            vecX.push_back(xPos);
            vecY.push_back(yPos);
        }
    }
    void Bolt_Hole_Pattern::Bolt_Hole_Hex( float inputSize, float inputFirstHoleAngle, float inputXOffset, float inputYOffset, vector<float> &vecX, vector<float> &vecY) {
        float xPos, yPos, spacing;
        size = inputSize;
        firstHoleAngle = inputFirstHoleAngle;
        xOffset = inputXOffset;
        yOffset = inputYOffset;
        type = hex;
        float first_hole_radians = (firstHoleAngle * M_PI) / 180;
        float i = (M_PI / 3);
        for (int k = 1; k <= 4; k++ ) {
            xPos = (size / 2) * cos(first_hole_radians + i) + xOffset;
            yPos = (size / 2) * sin(first_hole_radians + i) + yOffset;
            i += (M_PI / 3);
            vecX.push_back(xPos);
            vecY.push_back(yPos);
        }
    }

