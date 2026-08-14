class Solution {
public:
    double angleClock(int hour, int minutes) {

        double h = 0.5 * hour * 60 + minutes * 0.5;
        double m = minutes * 6;
        double ang = m - h;
        return min(abs(ang), 360 - abs(ang));
    }
};