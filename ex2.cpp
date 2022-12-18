#include<iostream>
#include<string>
using namespace std;

class date
{
    private:
    string jour;
    string mois;
    string annee;
    string heure;
    string min;
    public:
    void setDate(string var){
        jour=var.substr(0,2);
        mois=var.substr(2,2);

        annee = var.substr(4,4);
         heure=var.substr(8,2);
        min= var.substr(10,2);
       
       
     

        
    }
    void affiche(){
         cout<<"le jour est "<<jour<<endl;
        cout<<"le mois est "<<mois<<endl;
        cout<<"l' annee est "<<annee<<endl;
        cout<<"l' heure est "<<heure<<endl;
        cout<<"le minute est "<<min<<endl; 
    }

};
int main(){
   string var = "012345678910";
    date d;
    d.setDate(var);
    d.affiche();

    return 0;
}