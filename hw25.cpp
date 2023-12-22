#include <iostream>
using namespace std;

class MusicalAbility 
{
public:
    virtual void UseMusicalAbility() const = 0;
};

class GuitarAbility : public MusicalAbility
{
public:
    void UseMusicalAbility() const
    {
        cout << "Plays guitar\n";
    }
};

class BassAbility : public MusicalAbility
{
public:
    void UseMusicalAbility() const
    {
        cout << "Plays bass\n";
    }
};

class DrumAbility : public MusicalAbility
{
public:
    void UseMusicalAbility() const
    {
        cout << "Plays drums\n";
    }
};

class Band
{
public:
    virtual void PrintBand() const = 0;
};

class ConflictType
{
public:
    virtual void PrintConflictType() const = 0;
};

class Peaceful : public ConflictType
{
public:
    void PrintConflictType() const
    {
        cout << "Peaceful\n";
    }
};

class Conflict : public ConflictType
{
public:
    void PrintConflictType() const
    {
        cout << "Conflict\n";
    }
};

class EricClapton : public Band, public GuitarAbility, public Peaceful
{
public:
    void PrintBand() const
    {
        cout << "Eric Clapton\n";
    }

    void UseAbility() const
    {
        UseMusicalAbility();
    }
};

class JackBruce : public Band, public BassAbility, public Conflict
{
public:
    void PrintBand() const
    {
        cout << "Jack Bruce\n";
    }

    void UseAbility() const
    {
        UseMusicalAbility();
    }
};

class GingerBaker : public Band, public DrumAbility, public Conflict
{
public:
    void PrintBand() const
    {
        cout << "Ginger Baker\n";
    }

    void UseAbility() const
    {
        UseMusicalAbility();
    }
};

int main()
{
    setlocale(LC_ALL, "");

    EricClapton eric;
    eric.PrintBand();
    eric.PrintConflictType();
    eric.UseAbility();
    cout << "\n";

    JackBruce jack;
    jack.PrintBand();
    jack.PrintConflictType();
    jack.UseAbility();
    cout << "\n";

    GingerBaker ginger;
    ginger.PrintBand();
    ginger.PrintConflictType();
    ginger.UseAbility();
}