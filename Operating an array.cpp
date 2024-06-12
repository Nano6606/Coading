QUESTION LINK: 
https://www.geeksforgeeks.org/problems/operating-an-array/1

SOLUTION:

class Solution {
public:
    bool searchEle(vector<int>& a, int x) {
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] == x)
                return true;
        }
        return false;
    }

    void insertEle(vector<int>& a, int y, int yi) {
        if (yi >= 0 && yi < a.size()) {
            a.insert(a.begin() + yi, y);
            return;
        }
        cout << 0 << " ";
    }

    bool deleteEle(vector<int>& a, int z) {
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] == z) {
                a.erase(a.begin() + i);
                return true;
            }
        }
        return false;
    }
};
