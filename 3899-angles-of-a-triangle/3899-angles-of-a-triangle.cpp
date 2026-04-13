#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
public:
   // fn check will check triangle is valid or not... 
    bool isValid(vector<int> & sides) {
        if (sides.size() < 3) return false;
        double a = sides[0];
        double b = sides[1];
        double c = sides[2];
        if (a + b <= c || b + c <= a || a + c <= b) {
            return false;
        }
        return true;
    }

    vector<double> internalAngles(vector<int>& sides) {
        
        vector<double> ans; 

        if (!isValid(sides)) {
            return ans; // Returns empty vector if invalid
        }
       //by using cosine rule we can find angles of all side .. 
        double a = sides[0];
        double b = sides[1];
        double c = sides[2];

        const double PI = acos(-1.0);

        // Law of Cosines
        double cosA = (b*b + c*c - a*a) / (2*b*c);
        double cosB = (a*a + c*c - b*b) / (2*a*c);
        double cosC = (a*a + b*b - c*c) / (2*a*b);

        // acos() returns radians, convert to degrees
        ans.push_back(acos(cosA) * (180.0 / PI));
        ans.push_back(acos(cosB) * (180.0 / PI));
        ans.push_back(acos(cosC) * (180.0 / PI));
       sort(ans.begin() , ans.end());
        return ans;
    }
};