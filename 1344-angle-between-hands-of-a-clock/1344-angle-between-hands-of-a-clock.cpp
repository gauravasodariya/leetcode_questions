class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour=hour%12;
        double hourAngle=hour*30+minutes*0.5;
        double minuteAngel=minutes*6;
        double diff=abs(hourAngle-minuteAngel);
        return min(diff,360-diff);
    }
};