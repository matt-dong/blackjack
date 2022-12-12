#include "player.hpp"
#include <memory>
#include <iostream>
#include <iomanip>

using namespace std;

Player::Player(string name) : handsPlayed{0},
                              score{0},
                              name{name}
{
}

Player::Player(string name, int score, int handsPlayed) : handsPlayed{handsPlayed},
                                                          score{score},
                                                          name{name}
{
}

string Player::get_name() const
{
    return name;
}

int Player::get_score()
{
    return score;
}

int Player::get_hands_played()
{
    return handsPlayed;
}

void Player::update_player(int score)
{
    this->score += score;
    this->handsPlayed++;
}