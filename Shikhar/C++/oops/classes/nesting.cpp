#include <iostream>
#include <string>
using namespace std;

class binary
{
    // private:
    string s;           // by default the variable is private
    void chk_bin(void); // now chk_bin is a private function and only class functions can access it and will show error if directly called in the main function

public:
    void read(void);
    void ones_compliment(void);
    void ones_display(void);
};

void binary::read(void)
{
    cout << "Enter a binary number : " << endl;
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary::ones_compliment(void)
{
    chk_bin(); // using function in a function is called nesting of member functions
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}
void binary::ones_display(void)
{
    cout << "one's compliment of binary number : " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{

    binary b;
    b.read();
    // b.chk_bin();
    b.ones_compliment();
    b.ones_display();
    return 0;
}