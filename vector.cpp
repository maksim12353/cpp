#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int arr[10] = {0};

    //vector<int> v(10, 8);
    //v[5] = 100;

    /*cout << "size: " << v.size() << endl;
    for(int i = 0;i < v.size(); i++){
        cout << v[i] << " ";
    }*/

    vector<int> v (10,1);
    /*for(int i = 0;i < 10; i++){
        v.pop_back();
        cout << v.size() << " " << v.capacity() << "      ";
        for(auto j : v){
            cout << v << " ";
        }
        cout << endl;
    }*/

    v.begin();
    v.end();
    v.rbegin();
    v.rend();

    for(int i : v){
        cout << i << " ";
    }
    cout << endl;

    v.insert(v.begin() + 3,8);


    for(int i : v){
        cout << i << " ";
    }

    v.back();
    v.clear();

    cout << endl << "v: " << endl;
    for(int i : v){
        cout << i << " ";
    }

    if(v.empty()){
        cout << "v empty!" << endl;
    }
    else{
        cout << "v not empty!" << endl;
    }

    v.push_back(1);

    if(v.empty()){
        cout << "v empty!" << endl;
    }
    else{
        cout << "v not empty!" << endl;
    }

    v = {1,2,3,4};
    swap(v[0],v[1]);

    cout << endl;
    for(int i : v){
        cout << i << " ";
    }

    v = {2, 4, 5, 6, 7, 8, 1, 3};
    cout << endl;
    for(int j : v){cout << j << " ";}

    sort(v.begin(),v.end());

    cout << endl;
    for(int j : v){cout << j << " ";}

    reverse(v.begin(),v.begin() + 4);

    cout << endl;
    for(int j : v){cout << j << " ";}

    return 0;
}
