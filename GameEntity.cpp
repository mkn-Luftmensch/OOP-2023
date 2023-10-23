#include "GameEntity.h"

GameEntity::GameEntity(int x, int y, char type){
    position = make_tuple(x, y);
    this->type=type;
}

char GameEntity::getType(){return type;}

tuple<int, int> GameEntity::getPos(){return position;}