#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n){
 int ans=0,x=1;
 while(n>0){
     ans = ans + (n%10)*x;
     x=x*2;
     n=n/10; 
}
 return ans;
}

int octalToDecimal(int n){
    int ans=0,x=1;
    while(n>0){
        ans = ans + (n%10)*x;
        x=x*8;
        n=n/10;
    }
    return ans;
}

int hexadecimalToDecimal(string s){
    int ans=0,x=1;
    int n = s.size();
    for(int i=n-1;i>=0;--i){
        if(s[i]>='0' && s[i]<='9'){
            ans = ans + x*(s[i]-'0');
        }
        else if(s[i]>='A' && s[i]<='F'){
            ans = ans + x*(s[i]-'A' + 10);
        }
        x=x*16;
    }
    return ans;
}

string decimalToBinary(int n){
    string s;
    while(n>0){
        char c=n%2+'0';
       s+=c;
       n=n/2;
    }
    reverse(s.begin(),s.end());
    return s;
}
string decimalToOctal(int n){
    string s;
    while(n>0){
        char c=n%8+'0';
       s+=c;
       n=n/8;
    }
    reverse(s.begin(),s.end());
    return s;
}
string decimalToHexadecimal(int n){
    string s;
    while(n>0){
        char c;
        int r = n%16;
        if(r>=0 && r<=9){
            c = r+'0';
        }
        else if(r>=10 && r<=15){
            c = r-10 + 'A';
        }
       s+=c;
       n=n/16;
    }
    reverse(s.begin(),s.end());
    return s;
}


int main(){
    // cout<<binaryToDecimal(100)<<endl;
    // cout<<octalToDecimal(27)<<endl;
    // cout<<hexadecimalToDecimal("1CF")<<endl;
    // cout<<decimalToBinary(8)<<endl;
    // cout<<decimalToOctal(100)<<endl;
    // cout<<decimalToHexadecimal(100)<<endl;
    return 0;
}