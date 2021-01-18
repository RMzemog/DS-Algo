#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int z;
    cin>>z;
    int i;
    int result[z];
    for(i=0;i<z;i++)
    {
        int a,b;
        int arr[a];
        for(i=0;i<2;i++)
        {
            if(i=0)
            {
                cin>>a;
            }
            else

            {
                cin>>b;
            }
        }
        for(i=0;i<a;i++)
        {
            int c;
            cin>>c;
            arr[i]=c;
        }
        int risk=0, nrisk = 0;
        for(i=0;i<a;i++)
        {
            if((arr[i]<=9) || (arr[i]>=80))
                {
                risk++;}
            else
                {nrisk++;
                }
        }
    result[i]= (ceil(risk/b)+ceil(nrisk/b))    ;
    cout<<(ceil(risk/b)+ceil(nrisk/b));
    }
    for(i=0;i<sizeof(result);i++)
    {
        cout<<result[i];
    }
    return 0;
}