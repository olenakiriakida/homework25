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

class Cream : public Band
{
public:
    void PrintBand() const
    {
        cout << "Cream\n";
    }
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

class EricClapton : public Cream, public GuitarAbility, public Peaceful
{
public:
    void UseAbility() const
    {
        UseMusicalAbility();
    }
};

class JackBruce : public Cream, public BassAbility, public Conflict
{
public:
    void UseAbility() const
    {
        UseMusicalAbility();
    }
};

class GingerBaker : public Cream, public DrumAbility, public Conflict
{
public:
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
    eric.UseMusicalAbility();
    cout << "\n";

    JackBruce jack;
    jack.PrintBand();
    jack.PrintConflictType();
    jack.UseMusicalAbility();
    cout << "\n";

    GingerBaker ginger;
    ginger.PrintBand();
    ginger.PrintConflictType();
    ginger.UseMusicalAbility();
}
