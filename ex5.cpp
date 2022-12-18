#include <iostream>
#include <set>
#include <iterator>
#include <string>
#include<vector>
#include<list>

using namespace std;
class setPlein
{
private:
    set<int> s;
    set<int>::iterator it;

public:
    setPlein()
    {
        for (int i = 1; i <= 100; i++)
        {
            s.insert(i);
        }
    };
    set<int> return_set()
    {
        return this->s;
    }
    void affiche()
    {

        for (it = s.begin(); it != s.end(); it++)
        {
            cout << *it << endl;
        }
    }
    bool cherche(int a)
    {
        for (it = s.begin(); it != s.end(); it++)
        {
            if (*it == a)
            {
                return true;
            }
        }
    }
    bool cherche(set<int>::iterator it2, set<int>::iterator it3, int b)
    {
        for (it2; it2 != it3; ++it2)
        {
            if (*it2 == b)
            {
                return true;
            }
            else if (*it2 == *(s.end()))
            {
                return false;
            }
        }
    }
    

};
   template <class T,class Y,class X> bool chercher(T &a, Y &b,X &c)
    {
        for (a; a != b; ++a)
        {
            if (*a == c)
            {
                return true;
            }
            else if (*a == *(b))
            {
                return false;
            }
        }

    }
int main()
{
    setPlein s;
    if (s.cherche(10))
    {
        cout << "il existe" << endl;
    }
    else
    {
        cout << "il esiste pas" << endl;
    }
    set<int>::iterator it2;
    set<int>::iterator it3;
    if (s.cherche(it2 = s.return_set().begin(), it3 = s.return_set().end(), 105))
    {
        cout << "il existe" << endl;
    }
    else
    {
        cout << "il esiste pas" << endl;
    }
    cout<<"question 5"<<endl;
    //Question 5:
 
    vector<string>::iterator ex1;
    vector<string>::iterator ex12;
    vector<string> vec;
    vec.push_back("jack");
    vec.push_back("zack");
    ex1= vec.begin();
    ex12= vec.end();

     if (chercher(ex1,ex12,"jacksparrow"))
    {
        cout << "il existe" << endl;
    }
    else
    {
        cout << "il esiste pas" << endl;
    }
    list<int>::iterator ex2;
    list<int>::iterator ex22;
    list<int> list;
    list.push_back(4);
    list.push_back(5);
    ex2= list.begin();
    ex22= list.end();
    int v=5;
    if (chercher(ex2,ex22,v))
    {
        cout << "il existe" << endl;
    }
    else
    {
        cout << "il esiste pas" << endl;
    }
}