#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    vector<int > v ;
    vector<int>arr;
    cout << "Enter the size of array :";
    int n;
    cin >> n;
    int count = 0;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    for(int i = 0; i < n; i++){
        if (arr[i] == 0){
            count++;
        }
    }
    cout << count;
}