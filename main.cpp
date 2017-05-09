#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // // Simple example
    // int i = 4;
    // double d = 4.0;
    // string s = "HackerRank";
    // cout << "\ti: " << i << endl;
    // cout << setprecision(1) << fixed << "\td: " << d  << endl;
    // cout << "\ts: " << s << endl;

    string line;
    getline(cin, line);
    int i = stoi(line);

    getline(cin, line);
    double d = stod(line);

    getline(cin, line);
    string str = line;

    string s = "HackerRank";
    cout << i + d << endl;
    cout << setprecision(1) << fixed << d + d  << endl;
    cout << s + " " + str << endl;

    return 0;
}