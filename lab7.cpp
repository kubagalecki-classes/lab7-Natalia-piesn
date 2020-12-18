#include <iostream>
#include <stdexcept>
#include <variant>
#include <vector>

using namespace std;

struct MyException : public exception
{
    const char* what() const throw() { return "0"; }
};

double divide(const int& a, const int& b)
{
    if (b == 0) {
        throw MyException();
    }
    return a / b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    try {
        cout << divide(a, b) << endl;
    }
    catch (const MyException& e) {
        cout << e.what() << endl;
    }
    /*
    catch (const bad_alloc& e) {
        cout << e.what() << " alloc" << endl;
    }
    catch (const bad_variant_access& e) {
        cout << e.what() << " var" << endl;
    }
    catch (...) {
        cout << "Default exception." << endl;
    }
    */
}