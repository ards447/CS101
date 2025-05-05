#include <iostream>
#include <string>
#include <stack>

std::string expandRegex(const std::string& regex) {
    std::stack<std::string> stack;
    std::string current;
    
    for (size_t i = 0; i < regex.size(); ++i) {
        if (regex[i] == '(') {
            stack.push(current);
            current.clear();
        } else if (regex[i] == ')') {
            std::string group = current;
            current = stack.top();
            stack.pop();
            ++i; 
            int repeat = regex[i + 1] - '0';
            for (int j = 0; j < repeat; ++j) {
                current += group;
            }
            ++i; 
        } else if (regex[i] == '^') {
            std::string lastChar(1, current.back());
            current.pop_back();
            int repeat = regex[i + 1] - '0';
            for (int j = 0; j < repeat; ++j) {
                current += lastChar;
            }
            ++i; 
        } else {
            current += regex[i];
        }
    }
    
    return current;
}

int main() {
    std::string regex;
    std::cin >> regex;
    std::cout << expandRegex(regex) << std::endl;
    return 0;
}