#include<iostream>

using namespace std;

class Animal
{
    string name; // ��������
    string sp;// ���
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
        cout << "���� �� ������� ���)))\n";
    }
    void Sound()
    {
        cout << "���� �� ������� ����� ����� ������)))\n";
    }
};

class People : public Animal
{
public:
    People(){}
    People(string nm, string s, string cont, double k):Animal(nm,s,cont,k){}

    void Eat()
    {
        cout << "������ �������� ��������! \n";
    }
    void Sound()
    {
        cout << "����� ����\n";
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