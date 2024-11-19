#include<iostream>

using namespace std;

class Animal
{
    string name; // название
    string sp;// вид
    string continent;
    double kg;
public:
    Animal() {}
    Animal(string nm, string s, string cont, double k)
    {
        name = nm;
        sp = s;
        continent = cont;
        kg = k;
    }
    // void Input();
    void Print()
    {
        cout << name << "\t" << sp << "\t" << continent << "\t" << kg << endl;

    }
    void Eat()
    {
        cout << "Пока не понятно что)))\n";
    }
    void Sound()
    {
        cout << "Пока не понятно какие звуки издает)))\n";
    }
};

class People : public Animal
{
public:
    People(){}
    People(string nm, string s, string cont, double k):Animal(nm,s,cont,k){}

    void Eat()
    {
        cout << "Челове всеядное существо! \n";
    }
    void Sound()
    {
        cout << "Скачи чето\n";
    }
};

int main()
{
    setlocale(0, "ru");
    People obj("TBAR", "Chel", "BCE", 2024);
    obj.Print();
    obj.Eat();
    obj.Sound();
}