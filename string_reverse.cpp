#include<iostream.h>
#include<conio.h>
using namespace std;

string reverseWord(string str);

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin >> s;

        cout << reverseWord(s) << endl;
    }
}
string reverseWord(string str)
{
    string ptr=str;
    int n=str.size();
    int start=0;
    int end=n-1;

    while(start<end)
    {
        char temp=str[end];
        str[end]=str[start];
        str[start]=temp;
        start++;
        end--;
    }
    return str;
}
