#ifndef PISTON_HPP
#define PISTON_HPP


#include "../types.h"

class Piston {
public:
  Piston(const Vec3f& basePosition,
               float pistonHeight,
               float pistonRadiusTop,
               float pistonRadiusBottom,
               float crankPinHeight,
               float crankPinRadiusTop,
               float crankPinRadiusBottom,
               float rodHeight,
               float rodLength,
               float rodWidth);
  void draw() const;
  void update(float crankAngle);

private:
  Vec3f basePosition;
  float pistonHeight;
  float pistonRadiusTop;
  float pistonRadiusBottom;
  float crankPinHeight;
  float crankPinRadiusTop;
  float crankPinRadiusBottom;
  float rodHeight;
  float rodLength;
  float rodWidth;
};

void drawPistonHead(float pistonRadiusTop,
                    float pistonRadiusBottom,
                    float pistonHeight,
                    int slices,
                    int stacks);
void drawConnectingRod(Dimensions3f dimension,
                       Translate3f translate,
                       Rotate4f rotate,
                       Scale3f scale);
void drawCrankPin(float radiusTop,
                  float radiusBottom,
                  float height,
                  int slices,
                  int stacks);

#endif
