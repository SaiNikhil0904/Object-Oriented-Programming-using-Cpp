#include <bits/stdc++.h>
#include <unordered_map>
#include <fstream>
using namespace std;

struct Pair {
    int length;
    vector<char> seq;
    Pair() {
        seq = vector<char>(100);
    }
};

// Node class for Huffman encoding
class node {
public:
    char data;
    int freq;
    node *left, *right;
    node(char data, int freq) {
        this->data = data;
        this->freq = freq;
        left = right = nullptr;
    }
};

// Longest Common Subsequence (LCS) function
Pair LCS(string a, string b, int n, int m) {
    int L[n + 1][m + 1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (a[i - 1] == b[j - 1])
                L[i][j] = 1 + L[i - 1][j - 1];
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    int i = n, j = m, k = L[n][m];
    Pair p;
    while (i > 0 && j > 0) {
        if (a[i - 1] == b[j - 1]) {
            p.seq[--k] = b[j - 1];
            i--; j--;
        } else if (L[i - 1][j] > L[i][j - 1])
            i--;
        else
            j--;
    }
    p.length = L[n][m];
    return p;
}

// Comparator for Min Heap
class comp {
public:
    bool operator()(node *a, node *b) {
        return a->freq > b->freq;
    }
};

// Function to generate Huffman encoding
void encode(node *root, string str, unordered_map<char, string> &map) {
    if (!root) return;
    if (root->data != '$')
        map[root->data] = str;
    encode(root->left, str + "0", map);
    encode(root->right, str + "1", map);
}

// Huffman encoding function
void huffman(string s, vector<string> &ans) {
    priority_queue<node *, vector<node *>, comp> minheap;
    vector<int> count(26, 0);

    for (char x : s)
        count[x - 'a']++;

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            minheap.push(new node(char('a' + i), count[i]));
        }
    }

    while (minheap.size() > 1) {
        node *left = minheap.top(); minheap.pop();
        node *right = minheap.top(); minheap.pop();
        node *root = new node('$', left->freq + right->freq);
        root->left = left;
        root->right = right;
        minheap.push(root);
    }

    unordered_map<char, string> map;
    encode(minheap.top(), "", map);
    
    cout << "Huffman Encoding for each character:\n";
    for (auto x : map) {
        cout << x.first << ": " << x.second << endl;
    }

    cout << "Huffman Code: ";
    for (char x : s) {
        ans.push_back(map[x]);
    }
}

// Main function
int main() {
    string line1, line2;
    fstream file1, file2;
    unordered_map<string, int> map1, map2;

    file1.open("1.txt");
    file2.open("2.txt");

    if (file1.fail() || file2.fail()) return 0;

    while (!file1.eof()) {
        file1 >> line1;
        map1[line1]++;
    }
    while (!file2.eof()) {
        file2 >> line2;
        map2[line2]++;
    }
    file1.close();
    file2.close();

    int first = 0, sec = INT_MIN, third = INT_MIN;
    string one, two, three;

    for (auto x : map1) {
        if (map2.find(x.first) != map2.end()) {
            int temp = max(x.second, map2[x.first]);
            if (first < temp) {
                third = sec; sec = first; first = temp;
                three = two; two = one; one = x.first;
            } else if (sec < temp) {
                third = sec; sec = temp;
                three = two; two = x.first;
            } else if (third < temp) {
                third = temp;
                three = x.first;
            }
        }
    }

    cout << "Three most frequent words: " << one << " " << two << " " << three << endl;

    Pair ans1 = LCS(one, two, one.size(), two.size());
    Pair ans2 = LCS(three, two, three.size(), two.size());
    Pair ans3 = LCS(one, three, one.size(), three.size());

    vector<string> ans;
    if (ans1.length > ans2.length && ans1.length > ans3.length) {
        string lcs(ans1.seq.begin(), ans1.seq.end());
        cout << "LCS string: " << lcs << endl;
        huffman(lcs, ans);
    } else if (ans2.length > ans1.length && ans2.length > ans3.length) {
        string lcs(ans2.seq.begin(), ans2.seq.end());
        cout << "LCS string: " << lcs << endl;
        huffman(lcs, ans);
    } else {
        string lcs(ans3.seq.begin(), ans3.seq.end());
        cout << "LCS string: " << lcs << endl;
        huffman(lcs, ans);
    }

    for (string x : ans) cout << x;
    cout << endl;
    return 0;
}