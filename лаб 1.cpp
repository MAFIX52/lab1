#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int a, b, i;
    cout << "ведите первое число: ";
    cin >> a;
    cout << "ведите второе число: ";
    cin >> b;
    cout << "ведите рузультат умножения: ";
    cin >> i;
    if (i == a * b) {
        cout << "все правильно!";
    }
    else cout << "НЕПРАВИЛЬНО! правильно будет так: >> " << a * b;
    return 0;

}
