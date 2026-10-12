#include <iostream>
#include <vector>
#include <string>

using namespace std;

class stack {
    private:
    vector<int> st;

    public:
    void push(string value) {
        st.push_back(stoi(value));
    }

    int pop() {
        int val = st.back();
        st.pop_back();
        return val;
    }

    // Changed to accept the vector directly instead of reading from cin
    int evaluate(const vector<string>& tokens) {
        for(string token : tokens) {
            if(token == "+" || token == "-" || token == "*" || token == "/") {
                int b = pop();
                int a = pop();

                int ans;

                if(token == "+")
                    ans = a + b;
                else if (token == "-") // Fixed typo: tokens -> token
                    ans = a - b;
                else if(token == "*")
                    ans = a * b;
                else
                    ans = a / b;

                st.push_back(ans); 
            } else {
                push(token); 
            }
        }
        return pop();
    }
}; 

int main() {
    vector<string> tokens = {"5", "6", "2", "+", "*", "4", "-"};
    
    stack evaluator;
    int result = evaluator.evaluate(tokens);
    
    cout << "Result: " << result << endl; // Should output 36
    
    return 0;
}