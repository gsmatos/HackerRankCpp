#include <sstream>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> parseInts(string str) {
   // Complete this function
    replace(str.begin(), str.end(), ',', ' ');
    stringstream ss(str);
    vector <int> vectorfromstring;
    int num;
    while (ss >> num)
    {
        vectorfromstring.push_back(num);
    }
    return vectorfromstring;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
