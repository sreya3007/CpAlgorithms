#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//to calculate a^n value in lesser time complexity
//in o(logn) complexity

int power(int a, int n){
    int res=1;

    while(n){
        if(n%2){
            res=res*a;
            n--;
        }
        else{
            a=a*a;
            n=n/2;
        }
    }
    return res;
}


//MODULAR EXPONENTIATION

int power(int a, int n, int p){
    int res=1;

    while(n){
        if(n%2){
            res=(res*a)%p;
            n--;
        }
        else{
            a=(a*a)%p;
            n=n/2;
        }
    }
    return res;
}
