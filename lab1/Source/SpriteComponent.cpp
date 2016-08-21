#include "SpriteComponent.h"
#include "Actor.h"
#include <SDL/SDL.h>
#include "Renderer.h"

IMPL_COMPONENT(SpriteComponent, DrawComponent);

SpriteComponent::SpriteComponent(Actor& owner)
	:DrawComponent(owner)
{

}

void SpriteComponent::Draw(Renderer& render)
{
	// TODO
}

