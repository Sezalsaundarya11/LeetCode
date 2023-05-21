class Solution {
public:
    double angleClock(int hour, int minutes) {
        
        if(hour>=12)
            hour-=12;
        
        double x = 11*0.5*minutes;
        double y = 30*hour;
        
        double angle =fabs(x-y);
        angle = min(360-angle,angle);
        
        return angle;
    }
};