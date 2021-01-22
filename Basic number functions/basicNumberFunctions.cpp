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

int factorial(int n){
    int ans=1;
    while(n>1){
        ans = ans*n;
        n--;
    }
    return ans;
}

void fibonacci(int n){
    int x=0,y=1,next;
    for(int i=1;i<=n;++i){
        cout<<x<<endl;
        next = x+y;
        x=y; y=next;
    }
    return;
}

/* A Number pattern consisting of Binomial Coeff.s
   where in  nCr n->row & r->column (0 - indexed) */
void pascal_triangle(int n){
    if(n<=0){
        cout<<"Invalid input\n";
        return;
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<=i;++j){
            int coeff = factorial(i)/(factorial(i-j)*factorial(j));
            cout<<coeff<<" ";
        }
        cout<<endl;
    }
    return;
}


int main(){
    // cout<<isPrime(23)<<endl;
    // cout<<reverse_number(5678)<<endl;
    // cout<<isArmstrong(153)<<endl;
    // fibonacci(7);
    // cout<<factorial(5);
    // pascal_triangle(5);
    return 0;
}