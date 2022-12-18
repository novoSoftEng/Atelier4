#include<iostream>
using namespace std;
class complex
{

int r;
int im;
public:
    complex(int r, int im){
    this->r=r;
    this->im = im;
    };
    complex(){
    this->r=0;
    this->im = 0;
    };
    complex operator+(const complex &a){
        complex c;
        c.r= this->r + a.r;
        c.im= this->im + a.im;
        return c;
    }
     complex operator-(const complex &a){
        complex c;
        c.r= this->r - a.r;
        c.im= this->im - a.im;
        return c;
    }
      complex operator*(const complex &a){
        complex c;
        c.r= this->r * a.r +this->im * a.im ;
        c.im= this->r*a.im + this->im* a.r;
        return c;
    }
     complex operator/(const complex &a){
        complex c;
        c.r= this->r / a.r +this->im / a.im ;
        c.im= this->r / a.im + this->im/ a.r;
        return c;
    }
    void affiche(){
        cout<<"le nombre reelle "<<this->r<<endl;
        cout<<"le nombre imaginaire "<<this->im<<endl;
    }
};

int main(){
    complex a(5,9);
    complex b(5,9);
    complex c;
    c= a+b;
    c.affiche();
    c= a-b;
    c.affiche();
    c= a*b;
    c.affiche();
    c= a/b;
    c.affiche();
    return 0;
    }
