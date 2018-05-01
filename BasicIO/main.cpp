#include <iostream>
#include <vector>

// Just trying to remember stuff.

int main()
{
    int a, b;

    using std::cout;
    using std::cin;
    using std::endl;
    using std::vector;

    cout << "Enter two integers, seperated by a space: ";
    cin >> a >> b;
    cout << "You Entered: " << a << " " << b << endl;

    int n;
    cout << "Play with a pseudo-variable number of data items." << endl;
    cout << "How many variables? ";
    cin >> n;

    vector<int> v;
    int input;

    for(int i = 0; i < n; i++) {
        cin >> input;
        v.push_back(input);
    }

    cout << "You Entered: " << endl;
    for(int i = 0; i < n; i++) {
        cout << v[i] << endl;
    }


    return 0;
}
