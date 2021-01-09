#include<bits/stdc++.h>
using namespace std;

/*Some Example '*' Pattern Functions*/

void rectanglePattern(int rows,int cols){
    if(rows<= 0 || cols <=0){
      cout<<"Invalid Input\n";
      return;
    }
      
    for(int i=0;i<rows;++i){
      for(int j=0;j<cols;++j){
          cout<<"* ";
      }
      cout<<endl;
  }
}

void hollowRectanglePattern(int rows,int cols){
    if(rows<= 0 || cols <=0){
      cout<<"Invalid Input\n";
      return;
    }

    for(int i=0;i<rows;++i){
        for(int j=0;j<cols;++j){
            if(i==0 || i==rows-1 || j==0 || j==cols-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void invertedHalfPyramid(int n){
    if(n<=0)
    {
        cout<<"Invalid Input\n";
        return;
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<n-i;++j){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void halfPyramidAfter180Rotation(int n){
    if(n<=0)
    {
        cout<<"Invalid Input\n";
        return;
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n-i-1;++j){
            cout<<"  ";
        }
        for(int k=0;k<i+1;++k){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void halfPyramidUsingNumbers(int n){
    if(n<=0)
    {
        cout<<"Invalid Input\n";
        return;
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=i;++j){
            cout<<i;
        }
        cout<<endl;
    }
}

void floydTriangle(int n){
    if(n<=0)
    {
        cout<<"Invalid Input\n";
        return;
    }
    int k=1;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=i;++j){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}

void butterfly(int n){
    if(n<=0)
    {
        cout<<"Invalid Input\n";
        return;
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=2*n;++j){
            if(j<=i || j>=2*n-i+1){
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
    for(int i=n;i>=1;--i){
        for(int j=1;j<=2*n;++j){
            if(j<=i || j>=2*n-i+1){
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int main(){
    // int x,y;
    // cin>>x>>y;
    // rectanglePattern(x,y);
    // hollowRectanglePattern(x,y);
    // invertedHalfPyramid(6);
    // halfPyramidAfter180Rotation(7);
    // halfPyramidUsingNumbers(8);
    // floydTriangle(7);
    butterfly(5);
    return 0;
}