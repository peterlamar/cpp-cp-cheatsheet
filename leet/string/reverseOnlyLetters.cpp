/*
Input: s = "Test1ng-Leet=code-Q!"
Output: "Qedo1ct-eeLg=ntse-T!"
*/
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l = 0;
        int r = s.size()-1;
        while (l<r){
            if (!isalpha(s[l])){
                l += 1;
            }
            else if (!isalpha(s[r])){
                r -= 1;
            }
            else{
                swap(s[l], s[r]);
                l += 1;
                r -= 1;
            }
        }
        return s;
    }
};