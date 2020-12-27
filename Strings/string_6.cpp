#include <iostream>
#include <string>
using namespace std;
int main() {
    string s, s1, max;
    getline (cin, s);
    for (auto c : s) {
        if (c != ' ') s1 += c;
        else s1 = "";
        if (s1.size() > max.size()) {
            max = s1;
        }
    }
    cout << max;
    return 0;
}
