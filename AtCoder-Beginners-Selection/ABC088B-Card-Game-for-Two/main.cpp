#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> cards;
    for (int i = 0; i < N; ++i) {
        int temp;
        if (cin >> temp) {
            cards.push_back(temp);
        }
    }

    sort(cards.begin(), cards.end());

    int alice = 0;
    int bob = 0;
    while (!cards.empty()) {
        alice += cards.back();
        cards.pop_back();
        if (!cards.empty()) {
            bob += cards.back();
            cards.pop_back();
        }
    }

    cout << alice - bob << endl;
    return 0;
}