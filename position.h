#ifndef POSITION_H
#define POSITION_H

class Position {
private:
    int x_;
    int y_;

public:
    Position(int x, int y);
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
    void translate(int dx, int dy);
};

#endif // POSITION_H