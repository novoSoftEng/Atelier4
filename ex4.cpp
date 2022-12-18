#include <iostream>
#include <list>
#include <iterator>
#include <string>
using namespace std;
class Personne
{
private:
    string nom;
    string prenom;
    int age;

public:
    Personne()
    {
        cout << "entrer le nom" << endl;
        cin >> nom;
        cout << "entrer le prenom" << endl;
        cin >> prenom;
        cout << "entrer l'age" << endl;
        cin >> age;
    };
   bool operator >(const Personne& b){
    return this->nom > b.nom && this->prenom > b.prenom;
   }
   bool operator <(const Personne& a){
    return this->nom < a.nom && this->prenom > a.prenom;
   }
   static void affiche(Personne &p){
        cout<<"le nom"<<endl;
        cout<< p.nom<<endl;
        cout<<"le prenom"<<endl;
        cout<< p.prenom<<endl;
        cout<<"l'age"<<endl;
        cout<< p.age<<endl;
    }
};
class listeTri
{
private:
    list<Personne> listP;

public:
static bool comp(Personne a, Personne b)
        {
            return (a > b);
        }
    listeTri(int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "entrer la personne " << i + 1 << endl;
            Personne p;
            this->listP.push_back(p);
        }

        
       listP.sort(comp);
    };
    void affiche()
    {
        list<Personne>::iterator it;
        int i=0;
        for (it = listP.begin(); it != listP.end(); it++)
        {
            cout<<"la personne "<<i+1<<endl;
           Personne::affiche(*it);
           i++;
        }
    };
};

int main()
{
    listeTri t(3);
    cout<<"la liste trie"<<endl;
    t.affiche();

    return 0;
}