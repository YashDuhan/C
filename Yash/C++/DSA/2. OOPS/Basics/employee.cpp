#include <iostream>
using namespace std;
#include <string.h>

class employee{
    char name[80]; //private by default

    public:
    void putname(const char *n);
    void getname(char *n);

    private:
    int wage;

    public:
    void putwage(int w);
    int getwage();
};

void employee::putname(const char *n)
{
    strcpy(name,n);
}

void employee::getname(char *n)
{
    strcpy(name, n);
}

void employee::putwage(int w)
{
    wage = w;
}

int employee::getwage()
{
    return wage;
}

int main()
{
    employee a1;
    char name[80];
    a1.putname("Tushar");
    a1.putwage(75000);
    a1.getname(name);

    cout<<name << " makes "<<a1.getwage()<<" rs per month"<<endl;
    return 0;
}
