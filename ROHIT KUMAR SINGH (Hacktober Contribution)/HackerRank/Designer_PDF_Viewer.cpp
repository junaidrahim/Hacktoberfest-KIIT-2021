#include <bits/stdc++.h>
using namespace std;

int designerPdfViewer(vector<int> h, string word)
{
    int max = 0;
    for (char c : word)
        if (h[int(c) - 97] >= max)
            max = h[int(c) - 97];
    return max * word.size();
}

int main()
{
    vector<int> v(26);
    for (int &it : v)
        cin >> it;
    string word;
    cin >> word;
    int result = designerPdfViewer(v, word);
    cout << result << endl;
}
