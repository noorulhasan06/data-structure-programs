#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,Q;
    int lastAnswer = 0;
    cin>>N;        // No. of sequences
    cin>>Q;         // No. of Queries
    vector< vector<int> > arr(Q, vector<int>(3));  //input
    vector< vector<int> > seqList(N, vector<int>(0));  //seqList of sequences
    for(int i=0; i<Q; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<Q; i++){
        if(arr[i][0]==1){
            int index = (arr[i][1]^lastAnswer)%N;
            seqList[index].push_back(arr[i][2]);
        } else{
            int index = (arr[i][1]^lastAnswer)%N;
            lastAnswer = seqList[index][arr[i][2]%seqList[index].size()];
            cout<<lastAnswer<<endl;
        }
    }
    /*for(int i=0; i<N; i++){  // printing sequences
        for(int j=0; j<seqList[i].size(); j++){
            cout<<seqList[i][j]<<" ";
        }
        cout<<"\n";
    }*/
    return 0;
}
