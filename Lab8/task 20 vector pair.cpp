using namespace std;
#include <vector>
#include <iostream>

int search(const vector<pair<string,string>>& v, const string& key, int &pos) {
    int l = 0, r = v.size();
    while (r > l) {
        int mid = (l + r) / 2;
        if (v[mid].first < key) l = mid + 1;
        else r = mid;
    }
    pos = l;
    if (l < v.size() && v[l].first == key) return l;
    return -1;
}

    int main() {
    int a; cin >> a;
    vector <pair<string,string>> keys;

    for (int i = 0;i < a;i++) {
        string action, key; cin >> action >> key;
            int pos;
            int idx = search(keys, key, pos);
            if (action == "set") {
                string value; cin >> value;
                if (idx >= 0) keys[idx].second = value;
                else keys.insert(keys.begin() + pos, {key, value});
            }
            else if (action == "get") {
                if (idx >= 0) cout << keys[idx].second << endl;
                else cout << "KE: no key " << key << " found in the document\n";
        }
    }
    return 0;
}
