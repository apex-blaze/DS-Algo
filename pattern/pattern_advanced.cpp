#include<bits/stdc++.h>
using namespace std;

/* Advanced Pattern Problems*/
void inverted_number_pattern(int n){
    if(n<=0){
        cout<<"Invalid input\n";
        return;
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n-i+1;++j){
            cout<<j;
        }
        cout<<endl;
    }
}

void zero_one_pattern(int n){
    if(n<=0){
        cout<<"Invalid input\n";
        return;
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=i;++j){
            if(i%2 == j%2){
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
}

void rhombus_pattern(int n){
    if(n<=0){
        cout<<"Invalid input\n";
        return;
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=2*n-i;++j){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        } cout<<endl;
    }
}

void pyramid_number_pattern(int n){
    if(n<=0){
        cout<<"Invalid input\n";
        return;
    }
    for(int i=1;i<=n;++i){
        int c=1;
        for(int j=1;j<=n;++j){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<c<<" ";
                c++;
            }
        }
        cout<<endl;
    }
}

void palindromic_pattern(int n){
    if(n<=0){
        cout<<"Invalid input\n";
        return;
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n+i-1;++j){
            if(j<=n-i){
                cout<<" ";
            }
            else if(j<=n){
                cout<<n-j+1;
            }
            else{
                cout<<j-n+1;
            }
        }
        cout<<endl;
    }
}

void horizontal_mirror_star_pattern(int n){
    if(n<=0){
        cout<<"Invalid input\n";
        return;
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n+i-1;++j){
            if(j<=n-i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=2*n-i;++j){
            if(j<=i-1){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}

// For rows = 3
void zig_zag(int n){
    if(n<=0){
        cout<<"Invalid input\n";
        return;
    }
    for(int i=1;i<=3;++i){
        for(int j=1;j<=n;++j){
            if((i+j)%4 == 0 || (i == 2 && j%4 == 0)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    // inverted_number_pattern(5);
    // zero_one_pattern(5);
    // rhombus_pattern(5);
    // pyramid_number_pattern(5);
    // palindromic_pattern(5);
    // horizontal_mirror_star_pattern(5);
    // zig_zag(9);
    return 0;
}