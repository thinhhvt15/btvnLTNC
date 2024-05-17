#include <bits/stdc++.h>

using namespace std;

struct Point{
    int x,y;
};

struct Rectangle{
    Point* point;
} ;

int main(){
    Rectangle rect1;
    rect1.point=new Point[2];
    rect1.point[0].x=0;
    rect1.point[0].y=0;
    rect1.point[1].x=20;
    rect1.point[1].y=20;

    Rectangle rect2=rect1;
    rect2.point[0].x=5;
    rect2.point[0].y=5;

    cout<<rect1.point[0].x<<" "<<rect1.point[0].y;

    delete[] rect1.point;
    delete[] rect2.point;
    return 0;
}

// BAI 11
//Bai 11
#include <bits/stdc++.h>

using namespace std;

struct String {
    int n;
    char* str;

    String(const char* s) {
        n = strlen(s);           
        str = new char[n + 1];      
        strcpy(str, s);              
    }

    ~String() {
        delete[] str;
    }
    void print(){
        cout<<str<<"\n";
    }
    void append(const char* s){
        int newlength=n+strlen(s);
        char* temp=new char[newlength+1];
        strcpy(temp,str);
        strcat(temp,s);
        delete[] temp;
        str=temp;
        n=newlength;


    }
};

int main() {
    String s("abcvbvx");
    s.print();
    s.append("toi la toi day");
    s.print();
    return 0;
}