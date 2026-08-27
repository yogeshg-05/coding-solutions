#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    cin.ignore();

    map<string, map<string, string> > attrs;
    vector<string> st;

    for (int i = 0; i < N; i++) {
        string line;
        getline(cin, line);

        if (line.substr(0, 2) == "</") {
            st.pop_back();
            continue;
        }

        int space = line.find(' ');
        int close = line.find('>');

        int end = (space != string::npos && space < close) ? space : close;
        string tag = line.substr(1, end - 1);

        string path;
        if (!st.empty()) {
            path = st.back() + "." + tag;
        } else {
            path = tag;
        }

        int pos = end;

        while (pos < close) {
            while (pos < close && line[pos] == ' ')
                pos++;

            if (pos >= close)
                break;

            int eq = line.find(" = ", pos);
            string name = line.substr(pos, eq - pos);

            int q1 = line.find('"', eq);
            int q2 = line.find('"', q1 + 1);

            string value = line.substr(q1 + 1, q2 - q1 - 1);

            attrs[path][name] = value;
            pos = q2 + 1;
        }

        st.push_back(path);
    }

    while (Q--) {
        string query;
        getline(cin, query);

        int tilde = query.find('~');

        string path = query.substr(0, tilde);
        string attribute = query.substr(tilde + 1);

        if (attrs.count(path) && attrs[path].count(attribute))
            cout << attrs[path][attribute] << '\n';
        else
            cout << "Not Found!" << '\n';
    }

    return 0;
}
