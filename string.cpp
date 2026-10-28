#include <iostream>
#include <string>


using namespace std;

int main()
{
    //cout << 'h' << 'e' << 'l' << 'l' << 'o' <<'\n';
    //cout << "hello" << '\n';

    /*string str = "hello";
    string str2 = "world";

    cout << str + ' ' + str2 + '!' << '\n';

    str += ' ' + str2 + "!";
    cout << str;*/

    /*string str;
    getline(cin, str);
    cout << str;*/

    string str;
    cin >> str;
    for(int i = 0;i < str.length();i++){
        cout << "str " << i << " ---> " << str[i] << '\n';
    }


    return 0;
}
