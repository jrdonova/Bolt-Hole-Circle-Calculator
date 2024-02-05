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
    Bolt_Hole_Pattern();
    void Bolt_Hole_Circle(int holenum, float inputSize, float inputFirstHoleAngle, float inputXOffset, float inputYOffset, vector<float> &vecX, vector<float> &vecY);
    void Bolt_Hole_Square( float inputSize, float inputFirstHoleAngle, float inputXOffset, float inputYOffset, vector<float> &vecX, vector<float> &vecY);
    void Bolt_Hole_Hex( float inputSize, float inputFirstHoleAngle, float inputXOffset, float inputYOffset, vector<float> &vecX, vector<float> &vecY);
    bool operator == (const Bolt_Hole_Pattern& rhs);
    bool operator <= (const Bolt_Hole_Pattern& rhs);
    bool operator >= (const Bolt_Hole_Pattern& rhs);

};


#endif //M1OEP_JRDONOVA_BOLT_HOLE_PATTERN_H
