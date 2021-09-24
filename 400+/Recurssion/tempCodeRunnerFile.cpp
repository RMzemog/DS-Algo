#include<iostream>
using namespace std;

int get_count(int coins[], int n, int sum){
    if(sum == 0){
        return 1;
    }
    if(n == 0){
        return 0;
    }
    int res = get_count(coins,n-1,sum);
    if(coins[n-1] <= sum){
        res = res + get_count(coins, n, sum-coins[n-1]);
    }
}

int main(){
    int coins[] = {2,5,3,6};
    int n = 4;
    int sum = 10;
    cout<< get_count(coins,n,sum);
}