#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<char>>&s)
{
    int N = s.size();
    // Consider all squares one by one
    for (int x = 0; x < N / 2; x++) {
        // Consider elements in group
        // of 4 in current square
        for (int y = x; y < N - x - 1; y++) {
            // Store current cell in
            // temp variable
            char temp = s[x][y];

            // Move values from right to top
            s[x][y] = s[y][N - 1 - x];

            // Move values from bottom to right
           s[y][N - 1 - x]
                = s[N - 1 - x][N - 1 - y];

            // Move values from left to bottom
            s[N - 1 - x][N - 1 - y]
                = s[N - 1 - y][x];

            // Assign temp to left
            s[N - 1 - y][x] = temp;
        }
    }
}


int main(){
  int n;
  cin >> n;
  vector<vector<char>>s(n);
  vector<vector<char>>t(n);
  for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
          char temp;
          cin >> temp;
          s[i].push_back(temp);
      }
  }
  for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
          char temp;
          cin >> temp;
          t[i].push_back(temp);
      }
  }
cout<<endl;

for(int kk = 0; kk < 4; kk++){
    rotateMatrix(s);

    int rmin1 = INT_MAX;
    int rmax1 = INT_MIN;
    int cmin1 = INT_MAX;
    int cmax1 = INT_MIN;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
                // cout<<s[i][j]<<" ";
                // cout << typeid(s[i][j]).name()<<" ";
            if(s[i][j] == '#'){
                rmin1 = min(rmin1,i);
                rmax1 = max(rmax1,i);
                cmin1 = min(cmin1,j);
                cmax1 = max(cmax1,j);
            }
        }
    }

        // cout<<rmin1<<endl;
        // cout<<rmax1<<endl;
        // cout<<cmin1<<endl;
        // cout<<cmax1<<endl;
    int rmin2 = INT_MAX;
    int rmax2 = INT_MIN;
    int cmin2 = INT_MAX;
    int cmax2 = INT_MIN;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
                // cout<<s[i][j]<<" ";
                // cout << typeid(s[i][j]).name()<<" ";
            if(t[i][j] == '#'){
                rmin2 = min(rmin2,i);
                rmax2 = max(rmax2,i);
                cmin2 = min(cmin2,j);
                cmax2 = max(cmax2,j);
            }
        }
    }
        // cout<<rmin2<<endl;
        // cout<<cmin2<<endl;
        // cout<<rmax2<<endl;
        // cout<<cmax2<<endl;
    if(rmax1-rmin1 != rmax2-rmin2 or cmax1-cmin1 != cmax2-cmin2) continue;
    bool found = true;
    for(int r1=rmin1,r2=rmin2;r1<=rmax1 and r2<=rmax2; r1++,r2++){
        for(int c1=cmin1,c2=cmin2;c1<=cmax1 and c2<=cmax2; c1++,c2++){
            if(s[r1][c1] != t[r2][c2]){
                found = false;
                break;
            } 
        }
        if(!found)break;
    }
    if(found){
        cout<<"Yes"<<endl;
        return 0;
    }
}
cout<<"No";
cout<<endl;

//   for(int i = 0; i < n; i++){
//       for(int j = 0; j < n; j++){
//           cout<< s[i][j]<<" ";
//       }
//       cout<< endl;
//   }
}