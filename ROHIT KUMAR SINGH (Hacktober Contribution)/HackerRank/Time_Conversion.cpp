//incomplete
#include<iostream>
using namespace std;

string timeConversion(string s) {

    string h = s.substr(0,2);
    int hour = stoi(h);
    size_t pos = s.find("PM");
    if(pos!=string::npos)
    {
        if(hour + 12 <24)
        {
            h = to_string(hour+12);
        }
    }
    else
    {
        if(hour==12)
        {
            h = "00";
        }
    }
    return s.replace(0,2,h).erase(s.size()-2);

}

int main()
{

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";


    return 0;
}
