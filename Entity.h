#ifndef ENTITY_H
#define ENTITY_H


class Entity
{
    public:
        Entity();
        virtual ~Entity();
        virtual void draw() = 0;
        virtual void logic() = 0;
    protected:
    private:
};

#endif // ENTITY_H
