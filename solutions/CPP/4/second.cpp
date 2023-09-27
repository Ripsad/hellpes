#include <iostream>
#include <string>
using namespace std;

int main() {
    string result;
    cin >> result;

    int n;
    cin >> n;

    for (int i = 1; i < n; i++) {
        string next_elem;
        int count = 1;

        for (int j = 1; j < result.length(); j++) {
            if (result[j] == result[j - 1]) {
                count++;
            }
            else {
                next_elem += to_string(count) + result[j - 1];
                count = 1;
            }
        }
        next_elem += to_string(count) + result[result.length() - 1];

        result = next_elem;
    }
    cout << result;
    return 0;

}


