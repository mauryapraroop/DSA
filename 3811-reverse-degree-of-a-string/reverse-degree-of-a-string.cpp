class Solution {
public:
    int reverseDegree(string s) {
    int ans=0;
    for (int i=0; i<s.length(); i++) {
        int value;
        switch (s[i]) {
            case 'a': value = 26; break;
            case 'b': value = 25; break;
            case 'c': value = 24; break;
            case 'd': value = 23; break;
            case 'e': value = 22; break;
            case 'f': value = 21; break;
            case 'g': value = 20; break;
            case 'h': value = 19; break;
            case 'i': value = 18; break;
            case 'j': value = 17; break;
            case 'k': value = 16; break;
            case 'l': value = 15; break;
            case 'm': value = 14; break;
            case 'n': value = 13; break;
            case 'o': value = 12; break;
            case 'p': value = 11; break;
            case 'q': value = 10; break;
            case 'r': value = 9; break;
            case 's': value = 8; break;
            case 't': value = 7; break;
            case 'u': value = 6; break;
            case 'v': value = 5; break;
            case 'w': value = 4; break;
            case 'x': value = 3; break;
            case 'y': value = 2; break;
            case 'z': value = 1; break;
        }

        ans=ans+value*(i+1);
    }

    return ans;
    }
};