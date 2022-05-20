#include <iostream>
using std::cout;
using std::cin;

int main()
{
    //Specified cout ("c out") is using the std (standard) library in the header, can write cout instead of std::cout every line :) 

    cout << "Hello\n";
    cout << "World!" << '\n';
    cout << 34 << '\n';
    cout << 35;

    //New fun lines, now with integers

    cout << '\n' << '\n';
    int i = 2 + 2;
    cout << i << '\n';
    i = i * 3;
    cout << i << '\n';

    float f = 4.9;
    cout << f << '\n';

    f = 9.0 / 5;
    cout << f << '\n';

    //Shiny new cin ("c in") feature, now with more C. 

    cout << "Enter a number: ";
    cin >> i;
    cout << '\n' << i * 2 << '\n';

}
