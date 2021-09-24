#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>flowerbed = {1,0,0};
    int n = 1;
    int total = 0;
    int zero_count = 0;
        for(int i = 0; i < flowerbed.size(); i++){
            if (flowerbed[i] == 1){
                cout << "Zero_count -> "<<zero_count<<endl;
                if(zero_count % 2 == 0 && zero_count > 1){
                    total += (zero_count / 2) - 1;
                }else{
                    cout <<"total = >"<<total;
                    total += zero_count/2;
                }
                zero_count = 0;
            }else{
                zero_count++;
            }
        }
        if(zero_count > 1){
        if(zero_count % 2 == 0){
            total += (zero_count / 2) - 1;
        }else{
            total += zero_count/2;
        }
        }
    if(flowerbed[0] == 0 && flowerbed[1] == 0 && flowerbed[2] == 1){
        total++;
    // cout <<endl<<flowerbed[flowerbed.size() - 3] << flowerbed[flowerbed.size() - 2] << flowerbed[flowerbed.size() - 1]<<endl;
    }
    if(flowerbed[flowerbed.size() - 3] == 1 && flowerbed[flowerbed.size() - 2] == 0 && flowerbed[flowerbed.size() - 1] == 0){
        cout <<"asd";
        total++;
    }
    cout <<"n => "<< n<<endl;
    cout <<"total => "<<total<<endl;
    if (total >= n){
        return true;
    }
    else{
        return false;
    }
}