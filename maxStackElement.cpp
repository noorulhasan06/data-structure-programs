#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    vector<int> stack;
    int n;
    cin>>n;
    int y;
    int x, max=0;
    for(int i=0; i<n; i++){
        cin>>y;
        if(y==1){
            cin>>x;
            if(x>max) max=x;
            stack.push_back(x);
            stack.push_back(max);
        } else if(y==2){
            stack.pop_back();
            stack.pop_back();
            max = stack.back();
        }else {
            cout<<stack.back()<<endl;
        }
    }
    return 0;
}
