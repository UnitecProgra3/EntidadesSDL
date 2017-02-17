#include "Enemy.h"

Enemy::Enemy(SDL_Renderer* renderer, int x, int y)
{
    this->renderer = renderer;
    current_texture = 0;
    textures.push_back(IMG_LoadTexture(renderer, "assets/enemy1.png"));
    textures.push_back(IMG_LoadTexture(renderer, "assets/enemy2.png"));
    rect.x = x;
    rect.y = y;
    SDL_QueryTexture(textures[0], NULL, NULL, &rect.w, &rect.h);
    frame=0;
}

Enemy::~Enemy()
{
    //dtor
}

void Enemy::draw()
{
    SDL_RenderCopy(renderer, textures[current_texture], NULL, &rect);
}

void Enemy::logic()
{
    rect.x-=1;
    if(rect.x==-100)
        rect.x=500;


    if(frame%10==0)
    {
        current_texture++;
        if(current_texture>=textures.size())
            current_texture=0;
    }

    frame++;
}
