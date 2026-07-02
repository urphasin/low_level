#include <bits/stdc++.h>

using namespace std;


int main() {
    string s;
    cin >> s;

    int u = 0, l = 0;

    for(int i = 0; i < s.length(); i++) {
        if (isupper((unsigned char)s[i])) { u++; } 
        else if (islower((unsigned char)s[i])) { l++; }
    }

    if (u == l || l > u) {
        for(int i = 0; i < s.length(); i++) {
            s[i] = tolower((unsigned char)s[i]);
        }
        cout << s << "\n";
    }

    else {
        for(int i = 0; i < s.length(); i++) {
            s[i] = toupper((unsigned char)s[i]);
        }

        cout << s << "\n";
    }

    return 0;
}