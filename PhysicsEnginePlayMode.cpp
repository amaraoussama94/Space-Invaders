#include <iostream>

#include "DevelopState.hpp"
#include "PhysicsEnginePlayMode.hpp"
#include "SoundEngine.hpp"
#include "WorldState.hpp"
#include "InvaderUpdateComponent.hpp"
#include "BulletUpdateComponent.hpp"

void PhysicsEnginePlayMode::detectInvaderCollisions(vector<GameObject>& objects,const vector<int>& bulletPositions)
{
    Vector2f offScreen(-1, -1);
    auto invaderIt = objects.begin();
    auto invaderEnd = objects.end();
    for (invaderIt;invaderIt != invaderEnd;++invaderIt)
    {
        if ((*invaderIt).isActive()&& (*invaderIt).getTag() == "invader")
        {
            auto bulletIt = objects.begin();
            // Jump to the first bullet
            advance(bulletIt, bulletPositions[0]);
            auto bulletEnd = objects.end();
            for (bulletIt;bulletIt != bulletEnd;++bulletIt)
            {
                if ((*invaderIt).getEncompassingRectCollider().intersects((*bulletIt).getEncompassingRectCollider())
                && (*bulletIt).getTag() == "bullet"
                && static_pointer_cast<
                BulletUpdateComponent>(
                (*bulletIt).getFirstUpdateComponent())
                ->m_BelongsToPlayer)
                {
                    SoundEngine::playInvaderExplode();
                    (*invaderIt).getTransformComponent()->getLocation() = offScreen;
                    (*bulletIt).getTransformComponent()->getLocation() = offScreen;
                    WorldState::SCORE++;
                    WorldState::NUM_INVADERS--;
                    (*invaderIt).setInactive();
                }
            }
        }
    }
}