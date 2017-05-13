//
// Created by 박재영 on 2017. 5. 13..
//

#ifndef AI_CONNECT6_GAME_BOARD_H
#define AI_CONNECT6_GAME_BOARD_H

#endif //AI_CONNECT6_GAME_BOARD_H


const int NONE_STONE = 0;
const int BLACK_STONE = 1;
const int WHITE_STONE = 2;
const int WALL_STONE = 5;
#define ENEMY_STONE(x) (x==BLACK_STONE) ? WHITE_STONE : BLACK_STONE


const int BOARD_SIZE = 19;

// fillBoardAroundPoint
const int EFFECTIVE_RANGE = 3;
const int EFFECTIVE_POSITION = 1;
const int NOT_AVAILABLE_POSITION = 0;

const int X = 0;
const int Y = 1;

