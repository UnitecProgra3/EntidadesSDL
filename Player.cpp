#include "Player.h"

Player::Player(SDL_Renderer* renderer)
{
    this->renderer = renderer;
    current_texture = 0;
    textures.push_back(IMG_LoadTexture(renderer, "assets/player1.png"));
    textures.push_back(IMG_LoadTexture(renderer, "assets/player2.png"));
    rect.x = 10;
    rect.y = 20;
    SDL_QueryTexture(textures[0], NULL, NULL, &rect.w, &rect.h);
}

Player::~Player()
{
    //dtor
}

void Player::draw()
{
    SDL_RenderCopy(renderer, textures[current_texture], NULL, &rect);
}

void Player::logic()
{
    const Uint8* currentKeyStates = SDL_GetKeyboardState( NULL );

    if(currentKeyStates[SDL_SCANCODE_UP])
    {
        rect.y--;
    }
    if(currentKeyStates[SDL_SCANCODE_DOWN])
    {
        rect.y++;
    }
    if(currentKeyStates[SDL_SCANCODE_LEFT])
    {
        rect.x--;
    }
    if(currentKeyStates[SDL_SCANCODE_RIGHT])
    {
        rect.x++;
    }
}
