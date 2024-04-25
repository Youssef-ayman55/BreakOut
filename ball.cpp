#include "ball.h"

ball::ball() {

}

void ball::move(bool right, bool up, int speed){
    if(right && up){
        setPos(x()-speed,y()-speed);
    }
    else if(right && !up){
        setPos(x()-speed,y()+speed);
    }
    else if(!right && up){
        setPos(x()+speed,y()-speed);
    }
    else{
        setPos(x()+speed,y()+speed);
    }
}
