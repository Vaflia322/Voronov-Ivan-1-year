#include <iostream>
#include <string>
using namespace std;

char create(string s1, string s2, string s3, string s4, char s[4][4]) {
    for (int i = 0; i < 4; i++) {
        s[0][i] = s1[i];
    }
    for (int i = 0; i < 4; i++) {
        s[1][i] = s2[i];
    }
    for (int i = 0; i < 4; i++) {
        s[2][i] = s3[i];
    }
    for (int i = 0; i < 4; i++) {
        s[3][i] = s4[i];
    }
    return s[4][4];
}

int check(int j, int k, char s[4][4], string str, int h) {
    cout << j << " " << k << " " << s[j][k] << " ";
    if (h == str.length()) {
        return 1;
    }
    if (s[j + 1][k] == str[h + 1]) {
        s[j][k] = '0';
        return check(j + 1, k, s, str, h + 1);
    }
    else if (s[j - 1][k] == str[h + 1]) {
        s[j][k] = '0';
        return check(j - 1, k, s, str, h + 1);
    }
    else if (s[j][k + 1] == str[h + 1]) {
        s[j][k] = '0';
        return check(j, k + 1, s, str, h + 1);
    }
    else if (s[j][k - 1] == str[h + 1]) {
        s[j][k] = '0';
        return check(j, k - 1, s, str, h + 1);
    }
}

int main() {
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    char s[4][4];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        int flag = 0;
        create(s1, s2, s3, s4, s);
        for (int j = 0; j < 4; j++) {
            if (flag == 1) {
                break;
            }
            for (int k = 0; k < 4; j++) {
                int h = 0;
                if (check(j, k, s, str, h)) {
                    cout << str << ": YES" << endl;
                    flag = 1;
                    break;
                }
                
            }
        }
        if (flag == 0) {
            cout << str << ": NO" << endl;
        }
    }
    return 0;
}