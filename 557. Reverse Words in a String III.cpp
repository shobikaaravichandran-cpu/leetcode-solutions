/*

Problem : 557. Reverse Words in a String III
Platform: LeetCode
Difficulty: Easy

Approach:
- Traverse the string.
- Identify each word using spaces.
- Reverse each word individually.
- Return the modified string.

Time Complexity : O(n)
Space Complexity: O(1)

*/

class Solution {
public:
    string reverseWords(string s) {
        int start = 0;

        for (int i = 0; i <= s.length(); i++) {
            if (i == s.length() || s[i] == ' ') {
                reverse(s.begin() + start, s.begin() + i);
                start = i + 1;
            }
        }

        return s;
    }
};
