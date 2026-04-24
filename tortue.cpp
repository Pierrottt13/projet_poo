#include "tortue.h"

Tortue::Tortue(Position pos, double orientation, bool etat) {
    position_ = pos;
    orientation_ = orientation;
    etat_ = etat;
}

void Tortue::avancer(double distance) {
    if (etat_) {
        xfin+= distance * cos(orientation_ * M_PI / 180);
        yfin += distance * sin(orientation_ * M_PI / 180);
        drawer->drawLine(position_.x, position_.y, xfin, yfin);
        position_.x = xfin;
        position_.y = yfin;

    }
    else {
        position_.x += distance * cos(orientation_ * M_PI / 180);
        position_.y += distance * sin(orientation_ * M_PI / 180);
    }
}

void Tortue::reculer(double distance) {
    if (etat_) {
        xfin -= distance * cos(orientation_ * M_PI / 180);
        yfin -= distance * sin(orientation_ * M_PI / 180);
        drawer->drawLine(position_.x, position_.y, xfin, yfin);
        position_.x = xfin;
        position_.y = yfin;

    }
    else {
        position_.x -= distance * cos(orientation_ * M_PI / 180);
        position_.y -= distance * sin(orientation_ * M_PI / 180);
    }
}

void Tortue::tourner(double angle) {
    orientation_ += angle;
    if (orientation_ >= 360) {
        orientation_ -= 360;
    }
    else if (orientation_ < 0) {
        orientation_ += 360;
    }
}

void Tortue::lever() {
    etat_ = false;
}

void Tortue::baisser() {
    etat_ = true;
}

void Tortue::print() const {
    cout << "Position: (" << position_.x << ", " << position_.y << "), Orientation: " << orientation_ << " degrees, Etat: " << (etat_ ? "Baisser" : "Lever") << endl; // Pour la derniere partie afficher l'etat de la tortue j'ai demander a l'ia comment faire ça correctement, c'est a dire afficher "Baisser" si etat_ est vrai et "Lever" si etat_ est faux
}


void Tortue::reset() {
    position_ = Position(0, 0);
    orientation_ = 0;
    etat_ = true;
    drawer->clear();
}