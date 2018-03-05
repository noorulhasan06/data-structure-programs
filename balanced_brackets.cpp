#include <bits/stdc++.h>
#include <vector>

using namespace std;

string isBalanced(string s) {
    vector<char> stack;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='}'){
            if(!stack.empty() && stack.back() == '{')
                stack.pop_back();
            else return "NO";
        }
        else if(s[i]==']'){
            if(!stack.empty() && stack.back() == '[')
                stack.pop_back();
            else return "NO";
        }
        else if(s[i]==')'){
            if(!stack.empty() && stack.back() == '(')
                stack.pop_back();
            else return "NO";
        }
        else{
            stack.push_back(s[i]);
        }
    }
    if(stack.empty()) return "YES";
    else return "NO";
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << endl;
    }
    return 0;
}
