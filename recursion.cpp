#include <iostream>
using namespace std;

// ************** Linear Recursion Functions ***************
//Factorial function
int factorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}

// sum of n Natural number
int n_natural_sum(int x){
    if(x == 0){ return 0;}
    return x + n_natural_sum(x-1);
};

// ***************** Binary Recursion Function ***************
// Fibonacci series
int fibonacci(int n){
    if(n == 0){ return 0;}
    if(n == 1){ return 1;}
    return fibonacci(n-1) + fibonacci(n-2);
}



int main() {
    cout<<"Factorial of 5 is : "<<factorial(5)<<endl;
    for(int i = 0; i < 20; i++){
        cout<<fibonacci(i)<<" ";
    }
    cout<<endl;
    
    cout<< "N natural sum of 50 is : "<<n_natural_sum(50)<<endl;

    return 0;
}