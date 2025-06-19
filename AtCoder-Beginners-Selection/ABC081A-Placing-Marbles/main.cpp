#include <iostream>

using namespace std;

int main()
{
    // マス
    string m;
    cin >> m;
    
    // '1'のカウント変数
    int count = 0;

    // 文字列のサイズでfor分を回す
    for (int i = 0; i < m.size(); i++) {
        if (m.at(i) == '1') {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
