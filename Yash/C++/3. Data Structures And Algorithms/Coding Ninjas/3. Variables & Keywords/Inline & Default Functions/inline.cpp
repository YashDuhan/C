#include <iostream>
using namespace std;

/*
   int main()
   {
    int a,b;
    cin>>a>>b;

    int c = (a>b) ? a : b;

    int x,y;
    x=12;
    y=34;
    int c = (a>b) ? a : b;
   }
 */


//inline works just like #define

inline int max(int a, int b)
{
        return (a>b)? a:b;
}

int main(){
        int a,b;
        cin>>a>>b;

        intc = max(a,b);

        int x,y;
        x = 12;
        y = 34;

        int z = max(x,y);
}
