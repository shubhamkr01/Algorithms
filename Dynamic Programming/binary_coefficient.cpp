//Binary coefficient calculation using dynamic programming

#include <iostream>

using namespace std;

int C[100][100];


void initial(int n, int k){
    
    for(int i=0; i<n+1; i++){
        for(int j=0; j<k+1; j++){
            C[i][j]=-1;
        }
    }
    
    C[1][0]=1;
    C[1][1]=1;
}

int bincoff(int n, int k){
    if(C[n][k]==-1){
        C[n][k] = bincoff(n-1,k-1) + bincoff(n-1, k);
    }
    
    return C[n][k];
}


int main(){
    int n,k;
    cin>>n>>k;
    initial(n,k);
    cout<<bincoff(n,k)<<endl;
    return 0;
}
