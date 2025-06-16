#include <iostream>

using namespace std;

int main()
{
    // ２正整数の入力
    int a, b;
    cin >> a >> b;

    if ((a*b) % 2 == 0) {
        // 偶数
        cout << "Even" << endl;
    }
    else {
        // 奇数
        cout << "Odd" << endl;
    }

    return 0;
}
