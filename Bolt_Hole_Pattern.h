//
// Created by jackr on 1/30/2024.
//

#ifndef M1OEP_JRDONOVA_BOLT_HOLE_PATTERN_H
#define M1OEP_JRDONOVA_BOLT_HOLE_PATTERN_H
#include <vector>
#include <cmath>
using namespace std;

class Bolt_Hole_Pattern {
private:
    int numHoles;
    float size, firstHoleAngle, xOffset, yOffset;
public:
   // enum  Pattern { circle , square , hex };
   // Pattern type;
    // Default contructor
    Bolt_Hole_Pattern();
    // Calculates cartesian hole postion of a bolt hole circle
    void Bolt_Hole_Circle(int holenum, float inputSize, float inputFirstHoleAngle, float inputXOffset, float inputYOffset, vector<float> &vecX, vector<float> &vecY);
    // Calculates cartesian hole postion of a bolt hole square
    void Bolt_Hole_Square( float inputSize, float inputFirstHoleAngle, float inputXOffset, float inputYOffset, vector<float> &vecX, vector<float> &vecY);
    // Calculates cartesian hole postion of a bolt hole hexagon
    void Bolt_Hole_Hex( float inputSize, float inputFirstHoleAngle, float inputXOffset, float inputYOffset, vector<float> &vecX, vector<float> &vecY);
    // Overloaded operators that compare the hole numbers of different patterns
    bool operator == (const Bolt_Hole_Pattern& rhs);
    bool operator <= (const Bolt_Hole_Pattern& rhs);
    bool operator >= (const Bolt_Hole_Pattern& rhs);

};


#endif //M1OEP_JRDONOVA_BOLT_HOLE_PATTERN_H
