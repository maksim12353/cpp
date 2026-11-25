#include <iostream>

using namespace std;

int main()
{

    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;

    a--;b--;c--;d--;
    int arr[1005];
    for(int i = 0; i < n; i++){
        arr[i] = i + 1;
    }

    int t = (b - a + 1) / 2;
    for(int i = 0; i < t; i++){
        int tt = arr[a];
        arr[a] = arr[b];
        arr[b] = tt;
        a++;b--;
    }

    t = (d - c + 1) / 2;
    for(int i = 0; i < t; i++){
        int tt = arr[c];
        arr[c] = arr[d];
        arr[d] = tt;
        c++;d--;
    }

    for(int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }


    return 0;
}
