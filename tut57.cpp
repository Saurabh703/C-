#include<iostream>
#include<cstring>
using namespace std;

class Code{
    protected:
        string title;
        float rating;
    public:
        Code(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display(){}
};

class CodeVideo: public Code{
    int videolength;
    public:
        CodeVideo(string s, float r, float vl): Code(s, r){
            videolength = vl; 
        }
        void display(){
            cout<<"This is an amzaing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videolength<<" minutes"<<endl;
        }
};

class CodeText: public Code{
    int words;
     public:
        CodeText(string s, float r, int wc): Code(s, r){
            words = wc;
        }
        void display(){
            cout<<"This is an amzaing video with title "<<title<<endl;
            cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
            cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
        }
};

int main() {
    string title;
    float rating, vlen;
    int words;

    // for Coding Tutorial
    title = "Django tutorial";
    vlen = 4.89;
    rating = 4.37;
    CodeVideo djVideo(title, rating, vlen);
    // djVideo.display();

     title = "Django tutorial Text";
    words = 475;
    rating = 4.79;
    CodeText djText(title, rating, words);
    // djText.display();

    Code* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}

/*
Rule for virtual functios
1. they cannot be static
2. They are accessed by object pointers
3. Virtual function can be a friend of another class 
4. A virtual function in base class might not be used.
5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/