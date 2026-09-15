class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stack1;
        stack<char> stack2;

        for (char ch : s) {
            if (ch != '#') {
                stack1.push(ch);
            }
            else if (!stack1.empty()) {
                stack1.pop();
            }
        }

        for (char ch : t) {
            if (ch != '#') {
                stack2.push(ch);
            }
            else if (!stack2.empty()) {
                stack2.pop();
            }
        }

        return stack1 == stack2;
    }
};