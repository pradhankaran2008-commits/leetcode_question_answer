class Solution {
public:
    int secondHighest(string s) {
        int a[10] = {0};

        for(int i = 0; i < s.length(); i++) {
            if(s[i] >= '0' && s[i] <= '9') {
                int n = s[i] - 48;
                a[n] = 1;
            }
        }

        int count = 0;

        for(int i = 9; i >= 0; i--) {
            if(a[i] == 1) {
                count++;

                if(count == 2)
                    return i;
            }
        }

        return -1;
    }

};