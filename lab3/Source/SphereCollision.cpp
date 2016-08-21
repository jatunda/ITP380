#include "SphereCollision.h"
#include "Actor.h"

IMPL_COMPONENT(SphereCollision, CollisionComponent);

SphereCollision::SphereCollision(Actor& owner)
	:CollisionComponent(owner)
	,mOriginalRadius(1.0f)
	,mActualRadius(1.0f)
	,mScale(1.0f)
{

}

void SphereCollision::Tick(float deltaTime)
{
	Super::Tick(deltaTime);
	// Update the radius/center from our owning component

	// Scale the radius by the world transform scale
	// (We can assume the scale is uniform, because
	// actors don't allow non-uniform scaling)
	// TODO
}

bool SphereCollision::Intersects(CollisionComponentPtr other)
{
	// TODO
	return false;
}

void SphereCollision::RadiusFromTexture(TexturePtr texture)
{
	mOriginalRadius = static_cast<float>(Math::Max(texture->GetHeight() / 2, 
		texture->GetHeight() / 2));
}

bool SphereCollision::IntersectsSphere(SphereCollisionPtr other)
{
	// TODO
	return false;
}
