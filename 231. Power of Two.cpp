class Solution {
public:
    bool isPowerOfTwo(long long int n) {
        return n > 0 && int(log10(n) / log10(2)) == log10(n) / log10(2) ? true : false;
    }
};
