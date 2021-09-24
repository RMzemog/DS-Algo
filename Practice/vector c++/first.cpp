#include <bits/stdc++.h>
using namespace std;
void findPermutations(vector<int>a)
{
  
    // Sort the given array
    sort(a.begin(), a.begin() + a.size());
  
    // Find all possible permutations
    cout << "Possible permutations are:\n";
    do {
            for (int i = 0; i < a.size(); i++) {
        cout << a[i] << "  ";
    }
    cout << endl;
    } while (next_permutation(a.begin(), a.end()));
}
// Driver code
int main()
{
  
    vector<int> a = { 10, 20, 30, 40 };
  
  
    findPermutations(a);
  
    return 0;
}