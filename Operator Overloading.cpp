#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Matrix{
public:
    vector<vector<int>> a;
    friend Matrix operator+( Matrix& x, Matrix& y );
};

Matrix operator+( Matrix& x,  Matrix& y ){
    Matrix result;
    int N = x.a.size();
    int M = x.a[0].size();
        
    for(int i=0;i<N;i++) {
            vector<int> b;
            int num=0;
            for(int j=0;j<M;j++) {                
                b.push_back(num);
            }
            result.a.push_back(b);
    }    
    
    for( int i = 0 ; i < N; i++ ){
        for( int j = 0; j < M; j++ ){
            result.a[i][j] = x.a[i][j] + y.a[i][j];
        }
    }
    
    return result;
}

 

int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}
