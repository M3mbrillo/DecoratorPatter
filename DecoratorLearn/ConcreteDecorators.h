#pragma once
#include "EntityDecorator.h"
//--------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------
class PlusDamage:
	public EntityDecorator
{
public:

	PlusDamage(Entity* entity) :EntityDecorator(entity) {};

	float getDamage();
};
//--------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------
class PlusLife :
	public EntityDecorator
{
public:
	PlusLife(Entity* entity) : EntityDecorator(entity) {};

	float getLife();
};
//--------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------

class Shoot:
	public EntityDecorator
{
public:
	Shoot(Entity* entity) :EntityDecorator(entity) { shoot(); };

	void shoot();
};