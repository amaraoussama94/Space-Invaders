#main app
Sapce_Invaders: GameEngine.o  SpaceInvaders++.o  SoundEngine.o ScreenManager.o BitmapStore.o Button.o UIPanel.o InputHandler.o Screen.o SelectScreen.o SelectInputHandler.o SelectUIPanel.o GameScreen.o GameInputHandler.o GameUIPanel.o GameOverInputHandler.o   GameOverUIPanel.o RectColliderComponent.o StandardGraphicsComponent.o  TransformComponent.o BulletUpdateComponent.o InvaderUpdateComponent.o PlayerUpdate.o  GameObject.o GameObjectBlueprint.o ObjectTags.o BlueprintObjectParser.o PlayModeObjectLoader.o GameObjectFactoryPlayMode.o  LevelManager.o PhysicsEnginePlayMode.o                                                                                                                                                                 
	g++ GameEngine.o  SpaceInvaders++.o SoundEngine.o ScreenManager.o BitmapStore.o Button.o UIPanel.o InputHandler.o  Screen.o SelectScreen.o SelectInputHandler.o SelectUIPanel.o  GameScreen.o GameInputHandler.o GameUIPanel.o  GameOverInputHandler.o GameOverUIPanel.o RectColliderComponent.o StandardGraphicsComponent.o TransformComponent.o BulletUpdateComponent.o InvaderUpdateComponent.o PlayerUpdate.o GameObject.o GameObjectBlueprint.o ObjectTags.o BlueprintObjectParser.o  PlayModeObjectLoader.o GameObjectFactoryPlayMode.o LevelManager.o PhysicsEnginePlayMode.o -o Sapce_Invaders -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-system  

#*
GameEngine.o:GameEngine.cpp  
	g++ -c GameEngine.cpp

	
#SpaceInvaders++ Function*
SpaceInvaders++.o:SpaceInvaders++.cpp
	g++ -c SpaceInvaders++.cpp 

#Sound  Engine*
SoundEngine.o:SoundEngine.cpp
	g++ -c SoundEngine.cpp 

#Screen Manager*
ScreenManager.o:ScreenManager.cpp
	g++ -c ScreenManager.cpp 

#Bitmap Store  *
BitmapStore.o:BitmapStore.cpp
	g++ -c BitmapStore.cpp 

#Button class *
Button.o:Button.cpp
	g++ -c Button.cpp 

#UIPanel class *
UIPanel.o:UIPanel.cpp
	g++ -c UIPanel.cpp 

#Input Handler class *
InputHandler.o:InputHandler.cpp
	g++ -c InputHandler.cpp 

#Screen   class *GameObject.o
	g++ -c SelectScreen.cpp 


#Select Input Handler   class *
SelectInputHandler.o:SelectInputHandler.cpp
	g++ -c SelectInputHandler.cpp 

#Select UIPanel class 
SelectUIPanel.o:SelectUIPanel.cpp
	g++ -c SelectUIPanel.cpp 

#Game Screen class *
GameScreen.o:GameScreen.cpp
	g++ -c GameScreen.cpp 

#Game Input Handler class *
GameInputHandler.o:GameInputHandler.cpp
	g++ -c GameInputHandler.cpp 


#"Game UIPanel class *
GameUIPanel.o:GameUIPanel.cpp
	g++ -c GameUIPanel.cpp 

#Game Over Input Handler*
GameOverInputHandler.o:GameOverInputHandler.cpp
	g++ -c GameOverInputHandler.cpp 


#GameOverUIPanel*
GameOverUIPanel.o:GameOverUIPanel.cpp
	g++ -c GameOverUIPanel.cpp 


#Rect ColliderC omponent*
RectColliderComponent.o:RectColliderComponent.cpp
	g++ -c RectColliderComponent.cpp 

#Standard Graphics Component*
StandardGraphicsComponent.o:StandardGraphicsComponent.cpp
	g++ -c StandardGraphicsComponent.cpp 

#TransformC omponent*
TransformComponent.o:TransformComponent.cpp
	g++ -c TransformComponent.cpp 

#Bullet Update Componentt*
BulletUpdateComponent.o:BulletUpdateComponent.cpp
	g++ -c BulletUpdateComponent.cpp 

#Invader Update Component*
InvaderUpdateComponent.o:InvaderUpdateComponent.cpp
	g++ -c InvaderUpdateComponent.cpp 

#Player Update *
PlayerUpdate.o:PlayerUpdate.cpp
	g++ -c PlayerUpdate.cpp 

#Game Object *
GameObject.o:GameObject.cpp
	g++ -c GameObject.cpp 

#Game Object Blueprint *
GameObjectBlueprint.o:GameObjectBlueprint.cpp
	g++ -c GameObjectBlueprint.cpp 

#Object Tags *
ObjectTags.o:ObjectTags.cpp
	g++ -c ObjectTags.cpp 

#Blueprint Object Parser *
BlueprintObjectParser.o:BlueprintObjectParser.cpp
	g++ -c BlueprintObjectParser.cpp 

#Play Mode Object Loader*
PlayModeObjectLoader.o:PlayModeObjectLoader.cpp
	g++ -c PlayModeObjectLoader.cpp 

#Game Object Factory Play Mode*
GameObjectFactoryPlayMode.o:GameObjectFactoryPlayMode.cpp
	g++ -c GameObjectFactoryPlayMode.cpp 

#Level Manager*
LevelManager.o:LevelManager.cpp
	g++ -c LevelManager.cpp 

#Physics Engine PlayMode*
PhysicsEnginePlayMode.o:PhysicsEnginePlayMode.cpp
	g++ -c PhysicsEnginePlayMode.cpp 


clean:
#cleanup all object file
	  -rm *.o $(objects) 

