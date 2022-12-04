#include <iostream>
#include <string>
using namespace std;

string addLetter(string x, string y)
{
    cout << "X: " << x.insert(2,y) << endl;
    cout << "X: " << x[0] + y << endl;
    return x.insert(2,y);
}

int main()
{
    string x,y,z;
    cout << "ENTER:" << endl;
    getline(cin, y);
    cin >> x >> z;
    cout << z << endl;
    cout << addLetter(x,y) << endl;
    cerr << "ERROR" << endl;
    clog << "LOG" << endl;
    return 0;
} 