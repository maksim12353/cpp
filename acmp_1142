#include <iostream>

using namespace std;

int main()
{
    int a;
    int ans = 0;
    int counter = 0;
    int past = -1;
    int flag = 0;

    //0 возрастающая 1 убывающая

    // 4 2 3

    do{
        cin >> a;

        if(a == 0){
                break;
        }

        if(a > past){
            if(flag == 0){
                counter++;
            }
            else{
                counter = 2;
            }
            flag = 0;
        }
        else if(a < past){
            if(flag == 1){
                counter++;
            }
            else{
                counter = 2;
            }
            flag = 1;
        }
        else{
            counter = 1;
        }

        ans = max(ans,counter);
        past = a;

    }while(a!=0);

    cout << ans;


    return 0;
}
