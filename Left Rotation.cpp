#include <bits/stdc++.h>

using namespace std;

vector <int> leftRotation(vector <int> a, int d) {
    int index;
    vector <int> b(a.size());
    for(int i=0; i<a.size(); i++)
        b[i]=a[i];
    for(int i=0, n=a.size(); i<n; i++){
        index = (i - d%n + n)%n;
        a[index]=b[i];
    }
    return a;
}

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector <int> result = leftRotation(a, d);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
