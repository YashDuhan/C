#include<iostream>
#include<cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;
public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {

    }
};

class CWH_video: public CWH
{
    float videoLength;
public:
    CWH_video(string s, float r, float vl):CWH(s,r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
        cout<<"Length if this video is : "<<videoLength<<" minutes"<<endl<<endl;
    }
};
class CWH_text: public CWH
{
    int words;
public:
    CWH_text(string s, float r, int wc):CWH(s,r)
    {
        words = wc;
    }
    void display()
    {
        cout<<"This is an amazing text tutorial with title "<<title<<endl;
        cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
        cout<<"No. of words in this text tutorial is : "<<words<<" words"<<endl<<endl;
    }
};
int main(){
    string title;
    float rating, vlen;
    int words;

    // for code with harry video
    title = "C++ video tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWH_video C_video(title, rating, vlen);
    // C_video.display();

    // for code with harry text
    title = "C++ text tutorial";
    words = 467;
    rating = 4.89;
    CWH_text C_text(title, rating, words);
    // C_text.display();

    CWH* dis[2];
    dis[0] = &C_video;
    dis[1] = &C_text;

    dis[0]->display();
    dis[1]->display();
    return 0;
}