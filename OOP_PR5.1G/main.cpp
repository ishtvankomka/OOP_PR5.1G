#include <iostream>
#include "Triangle.hpp"
#include "RightAngled.hpp"
using namespace std;

int main() {
    try
    {
        double a, b, c;
        cout << "Set the sides:" << endl;
        cout << " a = "; cin >> a;
        cout << " b = "; cin >> b;
        cout << " c = "; cin >> c;
        RightAngled r1(a, b, c);
        Display(r1);
        cout << "Object count: " << r1.get_count() << endl;
    }
    catch (MyException* e)
    {
        cerr << e->What() << endl;
    }
    catch (MyException& e)
    {
        cerr << e.What() << endl;
    }
    catch (Exception* e)
    {
        cerr << e->What() << endl;
    }
    catch (Exception& e)
    {
        cerr << e.What() << endl;
    }
    catch (invalid_argument e)
    {
        cerr << e.what() << endl;
    }

    try
    {
        Triangle t;
        cin >> t;
        cout << t;
        cout << "Object count: " << t.get_count() << endl;
    }
    catch (MyException* e)
    {
        cerr << e->What() << endl;
    }
    catch (MyException& e)
    {
        cerr << e.What() << endl;
    }
    catch (Exception* e)
    {
        cerr << e->What() << endl;
    }
    catch (Exception& e)
    {
        cerr << e.What() << endl;
    }
    catch (invalid_argument e)
    {
        cerr << e.what() << endl;
    }
    return 0;
}

