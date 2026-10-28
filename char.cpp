#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    //char ch = 'a';

    //cout << 'h' << 'e' << 'l' << 'l' << 'o' <<'\n';
    //cout << "hello" << '\n';

    /*int num = int('a');
    cout << num << '\n';

    cout << char(num) << '\n';

    cout << int('\n') << '\n';

    for(int i = 32;i <= 127;i++){
        cout << char(i) << ' ';
        if((i - 32) % 10 == 0){
            cout << '\n';
        }
    }*/


    //cout << 'a' << " ---> " <<(char)toupper('a') << '\n';
    //cout << 'A' << " ---> " <<(char)tolower('A') << '\n';

    char ch;

    int counter = 0;
    while(cin >> ch){
        if(ch == '0'){
            counter++;
        }
    }

    cout << counter;

    return 0;
}
