#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Simple example
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    string line;
    getline(cin, line);
    int ints = stoi(line);

    getline(cin, line);
    double dubs = stod(line);

    getline(cin, line);
    string str = line;

    cout << i + ints << endl;
    cout << setprecision(1) << fixed << d + dubs  << endl;
    cout << s + str << endl;

    return 0;
}