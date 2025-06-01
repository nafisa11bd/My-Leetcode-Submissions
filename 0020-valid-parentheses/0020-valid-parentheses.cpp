class Solution {
public:
    bool isValid(string s) {
        stack<char> chars;

        for (char c : s) {
            if (c == '{' || c == '(' || c == '[') {
                chars.push(c);
            } else {
                if (chars.empty()) {
                    return false;
                }

                char top = chars.top();
                chars.pop();
                if (top == '(' && c != ')' || top == '{' && c != '}' ||
                    top == '[' && c != ']') {
                    return false;
                }
            }
        }

        return chars.empty();
    }
};