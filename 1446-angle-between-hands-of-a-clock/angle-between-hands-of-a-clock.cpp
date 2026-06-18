class Solution {
public:
    double angleClock(int hour, int minutes) {
    double hourAngle = (hour % 12) * 30 + minutes * 0.5;
    double minAng = minutes*6;
    double diff = abs(hourAngle-minAng);

    return min(diff, 360.0-diff);   
    }
};