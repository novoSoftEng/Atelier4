#include <iostream>
#include <list>
#include <iterator>
using namespace std;
class tri
{
private:
    list<int> l;
    

public:
    tri(int n, list<int> l)
    {

        for (int i = 0; i < n; i++)
        {
            int num = 0;
            cout << "entrer l'élement " << i + 1 << endl;
            cin >> num;
            this->l.push_back(num);
        }
    };
    void affiche()
    {
list<int>::iterator it;

        for (it = l.begin(); it != l.end(); it++)
        {
            cout << *it << endl;
        }
    }
    void tri_bull()
    {
        list<int>::iterator it;
    list<int>::iterator it2;

        int tmp;
        it2 = l.begin();
        for (it = l.begin(); it != l.end(); ++it)
        {
            if (it2 != l.end()){
                ++it2;
                if (*it > *it2)
                {
                    tmp = *it;
                    *it = *it2;
                    *it2 = tmp;
                }
                }
        }
    }
    void tri_selection()
    {
        list<int>::iterator it;
    list<int>::iterator it2;
    list<int>::iterator it3;
        it2 = l.begin();
        int tmp = 0;
        for (it = l.begin(); it != l.end(); ++it)
        {
            it2 = it;
            for (it3 = it; it3 != l.end(); ++it3)
            {
                if (*it3 < *it2)
                {
                    it2 = it3;
                }
            }
            if (it2 != it)
            {
                tmp = *it;
                *it = *it2;
                *it2 = tmp;
            }
        }
    }
    void tri_insertion(){
        int tmp = 0;
        list<int>::iterator it;
    list<int>::iterator it2;
    list<int>::iterator it3;
        for(it = l.begin(); it != l.end(); ++it){
            tmp=*it;
            it2=it;
            if(it2 != l.begin(); it2 != l.end()){
            --it2;
            while(*it2>tmp){
                *it=*it2;
            }
            *it2=tmp;
        }}
    }
};
int main()
{
    list<int> l;
    tri t(5, l);

    t.tri_selection();
    t.affiche();

}
