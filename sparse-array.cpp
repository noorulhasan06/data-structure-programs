#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int q;
    cin>>q;
    string query[q];
    for(int i=0; i<q; i++)
        cin>>query[i];
    
    map<string,int> str;
    for(int i=0; i<n; i++)
        str[arr[i]]++;
    for(int i=0; i<q; i++)
        cout<<str[query[i]]<<endl;
    return 0;
}
