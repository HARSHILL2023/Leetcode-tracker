#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
   
    int getCount(long long& val, int prime) {
        int count = 0;
        while (val > 0 && val % prime == 0) {
            count++;
            val /= prime;
        }
        return count;
    }

   
    int minDigitsNeeded(int c2, int c3, int c5, int c7) {
        c2 = max(0, c2);
        c3 = max(0, c3);
        c5 = max(0, c5);
        c7 = max(0, c7);

        int count8 = c2 / 3;
        c2 %= 3;
        int count9 = c3 / 2;
        c3 %= 2;

        int count6 = 0;
        if (c2 == 1 && c3 == 1) {
            count6 = 1;
            c2 = 0;
            c3 = 0;
        } else if (c2 == 2 && c3 == 1) {
           
            count6 = 1;
            c3 = 0;
            c2 = 1;
        }

        int count4 = c2 / 2;
        c2 %= 2;

        int count2 = c2;
        int count3 = c3;

        return count8 + count9 + count6 + count4 + count2 + count3 + c5 + c7;
    }

    
    string getMinSuffix(int c2, int c3, int c5, int c7, int targetLen) {
        c2 = max(0, c2);
        c3 = max(0, c3);
        c5 = max(0, c5);
        c7 = max(0, c7);

        int count8 = c2 / 3;
        c2 %= 3;
        int count9 = c3 / 2;
        c3 %= 2;

        int count6 = 0;
        if (c2 == 1 && c3 == 1) {
            count6 = 1;
            c2 = 0;
            c3 = 0;
        } else if (c2 == 2 && c3 == 1) {
            count6 = 1;
            c3 = 0;
            c2 = 1;
        }

        int count4 = c2 / 2;
        c2 %= 2;

        int count2 = c2;
        int count3 = c3;

        string res = "";
        res.append(count2, '2');
        res.append(count3, '3');
        res.append(count4, '4');
        res.append(c5, '5');
        res.append(count6, '6');
        res.append(c7, '7');
        res.append(count8, '8');
        res.append(count9, '9');

        int onesNeeded = targetLen - (int)res.length();
        if (onesNeeded < 0) return "";
        
        return string(onesNeeded, '1') + res;
    }

    void removeDigitFactors(char d, int& c2, int& c3, int& c5, int& c7) {
        int val = d - '0';
        while (val > 0 && val % 2 == 0) { c2--; val /= 2; }
        while (val > 0 && val % 3 == 0) { c3--; val /= 3; }
        while (val > 0 && val % 5 == 0) { c5--; val /= 5; }
        while (val > 0 && val % 7 == 0) { c7--; val /= 7; }
    }

    void addDigitFactors(char d, int& c2, int& c3, int& c5, int& c7) {
        int val = d - '0';
        while (val > 0 && val % 2 == 0) { c2++; val /= 2; }
        while (val > 0 && val % 3 == 0) { c3++; val /= 3; }
        while (val > 0 && val % 5 == 0) { c5++; c5 /= 5; } 
    }

public:
    string smallestNumber(string num, long long t) {
        int c2 = getCount(t, 2);
        int c3 = getCount(t, 3);
        int c5 = getCount(t, 5);
        int c7 = getCount(t, 7);

       
        if (t > 1) return "-1";

        int n = num.length();

       
        int firstZero = -1;
        for (int i = 0; i < n; ++i) {
            if (num[i] == '0') {
                firstZero = i;
                break;
            }
        }

       
        vector<int> req2(n + 1), req3(n + 1), req5(n + 1), req7(n + 1);
        req2[0] = c2; req3[0] = c3; req5[0] = c5; req7[0] = c7;

        int limit = (firstZero == -1) ? n : firstZero;

        for (int i = 0; i < limit; ++i) {
            req2[i + 1] = req2[i];
            req3[i + 1] = req3[i];
            req5[i + 1] = req5[i];
            req7[i + 1] = req7[i];

            removeDigitFactors(num[i], req2[i + 1], req3[i + 1], req5[i + 1], req7[i + 1]);
        }

       
        if (firstZero == -1 && req2[n] <= 0 && req3[n] <= 0 && req5[n] <= 0 && req7[n] <= 0) {
            return num;
        }

        
        int startPos = (firstZero == -1) ? n - 1 : firstZero;

        for (int i = startPos; i >= 0; --i) {
            int cur2 = req2[i];
            int cur3 = req3[i];
            int cur5 = req5[i];
            int cur7 = req7[i];

            int remLen = n - 1 - i;

           
            char startDigit = num[i] + 1;
            if (i == firstZero) startDigit = '1';

            for (char d = startDigit; d <= '9'; ++d) {
                int next2 = cur2, next3 = cur3, next5 = cur5, next7 = cur7;
                removeDigitFactors(d, next2, next3, next5, next7);

                if (minDigitsNeeded(next2, next3, next5, next7) <= remLen) {
                    string prefix = num.substr(0, i);
                    prefix += d;
                    string suffix = getMinSuffix(next2, next3, next5, next7, remLen);
                    return prefix + suffix;
                }
            }
        }

        
        int totalLen = max(n + 1, minDigitsNeeded(c2, c3, c5, c7));
        return getMinSuffix(c2, c3, c5, c7, totalLen);
    }
};