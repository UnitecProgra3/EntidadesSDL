#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"
#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include<vector>

using namespace std;

class Player : public Entity
{
    public:
        Player(SDL_Renderer* renderer);
        virtual ~Player();
        void draw();
        void logic();
    protected:
    private:
        SDL_Renderer* renderer;
        SDL_Rect rect;
        vector<SDL_Texture*> textures;
        int current_texture;
};

#endif // PLAYER_H
