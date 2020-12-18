#include <iostream>
#include <stdexcept>
#include <variant>
#include <vector>

using namespace std;

int main()
{
    long int a, b;
    cin >> a >> b;
    try {
        vector< long int > numbers;
        numbers.assign(a, 0);
        cout << b << endl;
        variant< int, std::string > v;
        if (b % 2 == 0) {
            v = 42;
        }
        else {
            v = "odd";
        }
        cout << get< int >(v) << endl;
    }
    catch (const exception& e) {
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