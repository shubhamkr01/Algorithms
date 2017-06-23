//CPP program to find the n-th fibonacci no. using dynamic programming (bottom-up approach)

#include <iostream>
using namespace std;

int fib(int n){   // function to find the n-th fibonacci
    int f[n];
    f[0]=1;
    f[1]=1;
    for(int i=2; i<=n; i++)
        f[i] = f[i-1] + f[i-2];
    return f[n-1];
}

int main() {    // main/driver function 
	int n;
	cin>>n;
	cout<<fib(n);
	return 0;
}
