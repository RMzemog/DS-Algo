#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>costs;
    for(int i = 0; i < costs.size();i++){
        int temp;
        cin >> temp;
        costs.push_back(temp);
    }
        sort(costs.begin(), costs.end());
        int sums = 0;
        int count = 0;
        for(int i = 0; i < costs.size(); i++){
            if (sums < coins){
                if (sums+costs[i] > coins){
                    return count;
                }
                count++;
                sums+= costs[i];
            }
            if (sums == coins){
                return coins;
                
            }
        }

}