#include iostream;
using namespace std;


class binary
{
    string s;
    public:
    void read(void);
    void chk_bin(void);
};

void binary:: read(void)
{
    cout <<"Enter a binary number  : ";
    cin >>s;
}

void binary :: chk_bin(void)
{
    fpr(int i = 0; i<s.length();i++)
    {
        if(s[i]!= 0 || s[i]!= 1)
        {
            cout<<"Not a binary " <<endl;
            exit(0);
        }
    }
}



int main()
{
    binary b;
    b.read();
    b.chk_bin();
}