//CPP program to find the n-th fibonacci no. using dynamic programming

#include <iostream>
using namespace std;

#define MAX 100000
int f[MAX];   // Look up table


void initial(){   // Initializing function for look up table
    for(int i=0; i<MAX; i++)
        f[i]=-1;
}

int fib(int n){   // function to find the n-th fibonacci
    if(n<=1){
        f[n]=n;
        return f[n];
    }
	if(f[n] != -1){
		return f[n];
	}
	else{
		f[n] = fib(n-1) + fib(n-2);
		return f[n];
	}
}

int main() {    // main/driver function 
	int n;
	cin>>n;
	initial();
	cout<<fib(n);
	return 0;
}
