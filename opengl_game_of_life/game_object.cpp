#include "game_object.h"


GameObject::GameObject()
    : Position(0.0f, 0.0f), Size(1.0f, 1.0f), Color(1.0f) { }

GameObject::GameObject(glm::vec2 pos, glm::vec2 size, glm::vec3 color)
    : Position(pos), Size(size), Color (color){ }

void GameObject::Draw(SpriteRenderer& renderer)
{
    renderer.DrawSprite(this->Position, this->Size, this->Color);
}