#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    vector<int> mochi;
    for (int i = 0; i < N; ++i) {
        int temp;
        if (cin >> temp) {
            mochi.push_back(temp);
        }
    }

    sort(mochi.begin(), mochi.end());
    auto last = unique(mochi.begin(), mochi.end());
    mochi.erase(last, mochi.end());

    cout << mochi.size() << endl;
    return 0;
}