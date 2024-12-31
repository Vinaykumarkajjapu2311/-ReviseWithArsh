class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        
        int nx=max(x1,min(x2,xCenter)); // finding the nearest x
        int ny=max(y1,min(y2,yCenter)); // finding the nearest y

        int dx=nx-xCenter; //calculating distance in x  from center to nearest x
        int dy=ny-yCenter; // calculating distance in y from center to nearest y

        return pow(dx,2)+pow(dy,2) <= pow(radius,2); // apply pythogorus theorem to find the actual distance and comapare it with radius 
    }
};
