class Solution {
public:
    bool checkOverlap(int radius, int xC, int yC, int x1, int y1, int x2, int y2) {
        long long dist = 0;
        if(xC < x1 || xC > x2) {
            dist += min(pow(x1-xC,2), pow(x2-xC,2));
        }
        if(yC < y1 || yC > y2) {
            dist += min(pow(y1-yC,2), pow(y2-yC,2));
        }

        return dist <= radius*radius;
        
    }
};