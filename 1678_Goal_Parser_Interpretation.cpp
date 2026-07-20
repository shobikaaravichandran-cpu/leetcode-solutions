/*
Problem: 1678. Goal Parser Interpretation
Difficulty: Easy

Approach:
- Traverse the string.
- Replace "()" with 'o'.
- Replace "(al)" with "al".

Time Complexity: O(n)
Space Complexity: O(1)
*/class Solution {
public:
    string interpret(string command) {
        string ans = "";

        for (int i = 0; i < command.length(); i++) {
            if (command[i] == 'G') {
                ans += 'G';
            }
            else if (command[i] == '(' && command[i + 1] == ')') {
                ans += 'o';
                i++;
            }
            else if (command[i] == '(' && command[i + 1] == 'a') {
                ans += "al";
                i += 3;
            }
        }

        return ans;
    }
};
