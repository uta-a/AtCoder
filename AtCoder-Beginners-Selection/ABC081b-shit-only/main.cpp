#include <iostream>

using namespace std;

int main()
{
    // 個数
    int n = 0;
    cin >> n;

    // vector
    int nums[n];

    // 入力
    for (int i = 0; i < n; i++) {
        int num;
        if (cin >> num) {
            nums[i] = num;
        }
    }

    // -1から
    int count = -1;
    bool flag = false;
    while (!flag) {

        // 配列で回す
        for (int& num : nums) {

            // 偶数か
            if (num % 2 != 0) {
                flag = true;
                break;
            }
            else {
                num /= 2;
            }
        }

        // カウントを進める
        count++;
    }

    cout << count << endl;

    return 0;
}
