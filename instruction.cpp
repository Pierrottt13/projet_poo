#include "instruction.h"
using namespace std;



Commande::Commande(instructions){
    liste_instructions_ = instructions;
};

void Commande::ajouter_instruction(instruction* instr) {
    liste_instructions_.push_back(instr);
}