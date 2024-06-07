#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int>prime(1000001,1);


//1 represents initially marked as prime
//0 reprensts marked as composite
// maxN cyhange hoga question ke according

void sieve(){
    int maxN=1000000;
    prime[0]=0;
    prime[1]=0;

    for( int i=2 ; i<=maxN ; i++){
        if(prime[i]){
            for( int j=i*i ; j<=maxN ; j+=i){
                prime[j]=0;
            }
        }
    }
}


// basically we declare an array prime this has the data about all the numbers uptil 1000001 are prime or not prime 
// that is what this basically is 