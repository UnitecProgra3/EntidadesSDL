#ifndef ENEMY_H
#define ENEMY_H

#include "Entity.h"
#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include<vector>

using namespace std;

class Enemy : public Entity
{
    public:
        Enemy(SDL_Renderer* renderer, int x, int y);
        virtual ~Enemy();
        void draw();
        void logic();
    protected:
    private:
        SDL_Renderer* renderer;
        SDL_Rect rect;
        vector<SDL_Texture*> textures;
        int current_texture;
        int frame;
};

#endif // ENEMY_H
