#include <iostream>
using namespace std;

int main()
{
    int A, B, C, x;
    cin >> A >> B >> C >> x;

    int count = 0;
    for (int a = 0; a <= A; ++a) {
        for (int b = 0; b <= B; ++b) {
            for (int c = 0; c <= C; ++c) {
                int sum = 500*a + 100*b + 50*c;
                if (sum == x) ++count;
            }
        }
    }
    
    cout << count << endl;
    return 0;
}