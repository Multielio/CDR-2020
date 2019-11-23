#include "Vector2.h"
class Robot{

    public:
        Robot(Vector2 initLoc,float initAngle);
        Vector2 getNearestPointToPath();
        Vector2 getLookAheadPoint();
        float getCurvature();
        void updateVlVr();
        float getVNormHere();


    private:
        Vector2 location;
        float angle;
        Vector2 vitesse;
        float lookDistance;
        float robotWidth;










};