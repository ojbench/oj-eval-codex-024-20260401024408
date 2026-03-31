#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    deque<long long> dq;
    long long n;
    if (!(cin >> n)) {
        // Fallback: process commands until EOF without a leading count
        cin.clear();
        string cmd;
        while (cin >> cmd) {
            if (cmd == "push_front") {
                long long x; if (!(cin >> x)) break; dq.push_front(x);
            } else if (cmd == "push_back") {
                long long x; if (!(cin >> x)) break; dq.push_back(x);
            } else if (cmd == "pop_front") {
                if (dq.empty()) cout << -1 << '\n';
                else { cout << dq.front() << '\n'; dq.pop_front(); }
            } else if (cmd == "pop_back") {
                if (dq.empty()) cout << -1 << '\n';
                else { cout << dq.back() << '\n'; dq.pop_back(); }
            } else if (cmd == "size") {
                cout << dq.size() << '\n';
            } else if (cmd == "empty") {
                cout << (dq.empty() ? 1 : 0) << '\n';
            } else if (cmd == "front") {
                if (dq.empty()) cout << -1 << '\n';
                else cout << dq.front() << '\n';
            } else if (cmd == "back") {
                if (dq.empty()) cout << -1 << '\n';
                else cout << dq.back() << '\n';
            } else if (cmd == "clear") {
                dq.clear();
            } else if (cmd == "print") {
                if (dq.empty()) {
                    cout << "\n";
                } else {
                    for (size_t i = 0; i < dq.size(); ++i) {
                        if (i) cout << ' ';
                        cout << dq[i];
                    }
                    cout << '\n';
                }
            } else {
                // Unknown command: ignore rest of line to be safe
                string rest;
                getline(cin, rest);
            }
        }
        return 0;
    }

    string cmd;
    for (long long i = 0; i < n; ++i) {
        if (!(cin >> cmd)) break;
        if (cmd == "push_front") {
            long long x; cin >> x; dq.push_front(x);
        } else if (cmd == "push_back") {
            long long x; cin >> x; dq.push_back(x);
        } else if (cmd == "pop_front") {
            if (dq.empty()) cout << -1 << '\n';
            else { cout << dq.front() << '\n'; dq.pop_front(); }
        } else if (cmd == "pop_back") {
            if (dq.empty()) cout << -1 << '\n';
            else { cout << dq.back() << '\n'; dq.pop_back(); }
        } else if (cmd == "size") {
            cout << dq.size() << '\n';
        } else if (cmd == "empty") {
            cout << (dq.empty() ? 1 : 0) << '\n';
        } else if (cmd == "front") {
            if (dq.empty()) cout << -1 << '\n';
            else cout << dq.front() << '\n';
        } else if (cmd == "back") {
            if (dq.empty()) cout << -1 << '\n';
            else cout << dq.back() << '\n';
        } else if (cmd == "clear") {
            dq.clear();
        } else if (cmd == "print") {
            if (dq.empty()) {
                cout << "\n";
            } else {
                for (size_t j = 0; j < dq.size(); ++j) {
                    if (j) cout << ' ';
                    cout << dq[j];
                }
                cout << '\n';
            }
        } else {
            string rest; getline(cin, rest);
        }
    }
    return 0;
}

