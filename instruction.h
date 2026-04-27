#include "iostream"
#include "cmath"
#include "tortue.h"
using namespace std;


class instruction {
public:
    virtual void execute(Tortue& t) = 0; 
    virtual ~instruction() {} 
    virtual void print() const;
};


class Avancer : public instruction {
private: int distance;
public:
void execute(Tortue& t) override {
    t.avancer(distance);
}
};

class Reculer : public instruction {
private: int distance;
public:
void execute(Tortue& t) override {
    t.reculer(distance);
}
};

class Tourner : public instruction {
private: int angle;              
public:
void execute(Tortue& t) override {
    t.tourner(angle);
}
};  

class Lever : public instruction {
public:
void execute(Tortue& t) override {
    t.lever();
}
};

class Baisser : public instruction {
public:
void execute(Tortue& t) override {
    t.baisser();
}
};

class Reset : public instruction {
public:
void execute(Tortue& t) override {
    t.reset();
}
};  

class Repeter : public instruction {
private: int n;
commande cmd;
public:



class Commande { 
private:
vector<instruction*> liste_instructions_;
public:
Commande(vector<instruction*> liste_instructions_ = {});
void ajouter_instruction(instruction* instr);
void reset();
void execute(Tortue& t);
};