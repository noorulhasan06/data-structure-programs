#include <bits/stdc++.h>

using namespace std;

int main() {
    long n;
    long m;
    cin >> n >> m;
    long int *arr = new long int[n+1]();   // If i am taking array then it is giving me segmentation fault
    for(long a0 = 0; a0 < m; a0++){
        long a;
        long b;
        long k;
        cin >> a >> b >> k;
        arr[a]+=k;
        if(b+1<=n) arr[b+1]-=k;
    }
    long int max=0;
    long int x = 0;
    for(long i=1; i<=n; i++){
        x+=arr[i];
        max = max>x?max:x;
    }
    cout<<max;
    return 0;
}
