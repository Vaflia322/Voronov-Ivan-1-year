#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int permutationDiff(const string& s, const string& t) {
    if (s.length() != t.length()) {
        return -1;
    }

    unordered_map<char, int> sIndex;
    unordered_map<char, int> tIndex;
    int diff = 0;

    for (int i = 0; i < s.length(); ++i) {
        sIndex[s[i]] = i;
        tIndex[t[i]] = i;
    }

    for (const auto& pair : sIndex) {
        char ch = pair.first;
        diff += abs(sIndex[ch] - tIndex[ch]);
    }

    return diff;
}

int main() {
    string s = "abcade";
    string t = "cabead";

    int difference = permutationDiff(s, t);
    if (difference != -1) {
        cout << "dif s and t: " << difference << endl;
    }
    else {
        cout << "len !=" << endl;
    }

    return 0;
}
