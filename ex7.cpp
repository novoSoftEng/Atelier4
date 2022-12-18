#include<iostream>
using namespace std;
class Point
{
private:
    double x;
    double y;
protected:
    string nom;
public:
    Point(){
        x=0.0;
        y=0.0;
        nom="";
    };
    double getX(){
        return x;
    }
    void setX(double x){
        this->x = x;
    }
    double getY(){
        return y;
    }
    void setY(double y){
        this->y = y;
    }
    string getNom(){
        return nom;
    }
    void setNom(string nom){
        this->nom = nom;
    }
    void afficher(){
        cout<<nom<<endl;
        cout<<x;
    }


    

};
class PointCouleur : Point
{
private:
    unsigned int couleur;
public:
PointCouleur(){
    couleur = 0;
};
unsigned int getCouleur(){
    return couleur;
}
void setCouleur(unsigned int couleur){
    this->couleur=couleur;
}
void afficher(){
    cout<<couleur<<endl;
}
};



int main(){
    Point p;
    p.afficher();
    PointCouleur pc;
    pc.setCouleur(500);
    pc.afficher();
    return 0;
}

