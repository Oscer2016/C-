#include <iostream>
#include <string>

using namespace std;

// 最后一个形式赋予了默认实参
string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

int main(int argc, char *argv[])
{
    cout << "success的单数形式是: " << make_plural(1, "success", "es")
         << endl;
    cout << "success的复数形式是: " << make_plural(2, "success", "es")
         << endl;
    cout << "failure的单数形式是: " << make_plural(1, "failure") << endl;
    cout << "failure的复数形式是: " << make_plural(2, "failure") << endl;
    
    return 0;
}

