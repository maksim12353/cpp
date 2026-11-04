#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{


    int a;
    int f = 1;
    int mx = -10000000;
    int mn = 10000000;
    while(cin >> a){

        if(f == 1){
            mn = min(mn, a);
            f = 0;
        }
        else{
            mx = max(mx, a);
            f = 1;
        }
    }

    cout << mn + mx;



    return 0;
}
