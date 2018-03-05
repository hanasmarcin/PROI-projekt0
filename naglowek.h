#ifndef NAGLOWEK_H_INCLUDED
#define NAGLOWEK_H_INCLUDED

class Napis
{
private:
    char tekst[12]="Hello world";
public:
    void wyswietl()
    {
        cout << tekst << endl;
    }
};

Napis helloworld;


#endif // NAGLOWEK_H_INCLUDED
