#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

int main()
{
    long int n;
    cin >> n;
    try {
        vector< long int > numbers;
        numbers.assign(n, 0);
    }
    catch (const std::bad_alloc& e) {
        cout << e.what() << endl;
    }
    catch (...) {
        cout << "Default exception." << endl;
    }
}