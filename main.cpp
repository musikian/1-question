#include <iostream>
#include <set>

using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    
    set<int> s;
    cout << "Enter " << N << " numbers: ";
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    
    cout << "Sorted set elements: ";
    for (int num : s) cout << num << " ";
    cout << endl;

    return 0;
}
