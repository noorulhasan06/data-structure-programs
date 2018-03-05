#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n1;
    long int s1=0, s2=0, s3=0;
    int n2;
    int n3;
    cin >> n1 >> n2 >> n3;
    vector<int> h1(n1);
    for(int h1_i = n1-1;h1_i >=0;h1_i--){
       cin >> h1[h1_i];
    }
    vector<int> h2(n2);
    for(int h2_i = n2-1;h2_i >= 0;h2_i--){
       cin >> h2[h2_i];
    }
    vector<int> h3(n3);
    for(int h3_i = n3-1;h3_i >= 0;h3_i--){
       cin >> h3[h3_i];
    }
    
    map<int,bool> m1,m2,m3;
    int sum=0;
    for(int i=0;i<n1;i++){
        sum+=h1[i];
        m1[sum]=true;
    }
    for(int i=0, sum=0;i<n2;i++){
        sum+=h2[i];
        if(m1[sum])
            m2[sum]=true;
    }
    int rem=0;
    for(int i=0, sum=0;i<n3;i++){
        sum+=h3[i];
        if(m2[sum]){
            m3[sum]=true;
            rem = sum;
        }
    }
    cout<<rem;
    return 0;
}
