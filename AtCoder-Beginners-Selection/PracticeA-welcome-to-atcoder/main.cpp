#include <iostream>

using namespace std;

int main(){
    // 整数を入力
    int a;
    cin >> a;

    // スペース区切りの整数を入力
    int b, c;
    cin >> b >> c;

    // 文字列を入力
    string s;
    cin >> s;

    // a,b,cの合計と文字列を出力
    cout << (a + b + c) << " " << s << endl;

    return 0;
}
