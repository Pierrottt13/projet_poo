#include "instruction.h"
using namespace std;



Commande::Commande(instructions){
    liste_instructions_ = instructions;
};

void Commande::ajouter_instruction(instruction* instr) {
    liste_instructions_.push_back(instr);
<<<<<<< HEAD
}
=======
};

void Commande::execute(Tortue& t) {
    for (auto instr : liste_instructions_) {
        instr->execute(t);
    }
}

>>>>>>> 40b8c78270f9fbea14376ba74b53bf445bcb52b5
