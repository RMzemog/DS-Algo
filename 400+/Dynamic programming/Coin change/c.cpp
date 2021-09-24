#include<iostream>
#include<vector>
using namespace std;
int main(){
    int amt = 10;
    int coins[] = {2,3,5,6};
    int n = 4;
    vector<int>comb(amt+1);
    comb[0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = coins[i]; j < comb.size(); j++){
            if(comb[j-coins[i]]){
                comb[j] += comb[j-coins[i]];
            }
        }
    }

    for(auto it:comb){
        cout<<it<<" ";
    }
}