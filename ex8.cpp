#include<iostream>
using namespace std;

class Entraineur;
class Repas;
class Chien;

class Elments
{
    private: 
    string nom;
    string type;

};
class Competition
{
    private: 
    string nom;
    string date;
    public:
    int ordre;
    void relation(){
        Chien  chien;
        Entraineur  entraineur;
    }
};
class Animal
{
protected:
    string nom;
    int age;
    string genre;
};
class Race
{
    protected:
    string specifite;
    bool israceHybride();
};
class Chat : public Animal
{
    private:
    string type;
    Repas* repas;
    public:
    void sauter();
};
class Repas
{
    private:
    Chat* chat;
    Elments elements;
    string nom;
    int heure;
    string description;
    public:
    void sauter();
};

class Chien : public Animal, public Race
{
    private:
    Entraineur * entraineur;
    string taille;
    public:
    bool ischass3();
    void relation(){
        Competition competition;
    }
};
class Entraineur
{
    private: 
    Chien * chien;
    string nom;
    string description;
    public:
    void relation(){
        Competition competition;
    }

};

int main(){
    return 0;
}

