#include "instruction.h"




Command::Commande(instructions){
    liste_instructions_ = instructions;
};

void Commande::ajouter_instruction(instruction* instr) {
    liste_instructions_.push_back(instr);
};

void Commande::execute(Tortue& t) {
    for (auto instr : liste_instructions_) {
        instr->execute(t);
    }
}

