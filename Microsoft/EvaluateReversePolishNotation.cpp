// Microsoft series
// question1
// Ques link - https://leetcode.com/problems/evaluate-reverse-polish-notation/
// solution Link - https://leetcode.com/problems/evaluate-reverse-polish-notation/solutions/2991112/c-optimised-solution-using-stacks/

class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> st;
        for (auto x : tokens)
        {
            if (x == "+" || x == "-" || x == "/" || x == "*")
            {
                long long op2 = st.top();
                st.pop();
                long long op1 = st.top();
                st.pop();

                if (x == "+")
                {
                    st.push(op1 + op2);
                }
                if (x == "-")
                {
                    st.push(op1 - op2);
                }
                if (x == "*")
                {
                    st.push(op1 * op2);
                }
                if (x == "/")
                {
                    st.push(op1 / op2);
                }
            }
            else
            {
                int data = stoi(x);

                st.push(data);
            }
        }

        return st.top();
    }
};