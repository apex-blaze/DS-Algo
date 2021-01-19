#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n==2) return true;
    for(int i=2;i<= sqrt(n);++i){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int reverse_number(int n){
    int reverse=0,last_digit;
    while(n>0){
       last_digit = n % 10;
       n = n/10;
       reverse = reverse * 10 + last_digit;
    }
    return reverse;
}

bool isArmstrong(int n){
    int sum=0,last_digit;
    int given_number = n;
    while(n>0){
        last_digit = n%10;
        sum = sum + int(pow(last_digit,3)+0.5);
        n = n/10;
    }
    
    if(sum==given_number) return true;
    else return false;
}

int main(){
    // cout<<isPrime(23)<<endl;
    // cout<<reverse_number(5678)<<endl;
    // cout<<isArmstrong(153)<<endl;
    
    return 0;
}