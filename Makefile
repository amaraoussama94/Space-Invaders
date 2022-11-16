#main app
Sapce_Invaders: GameEngine.o  SpaceInvaders++.o  SoundEngine.o ScreenManager.o BitmapStore.o Button.o UIPanel.o InputHandler.o Screen.o SelectScreen.o
	g++ Engine.o  SpaceInvaders++.o SoundEngine.o ScreenManager.o BitmapStore.o Button.o UIPanel.o InputHandler.o  Screen.o SelectScreen.o -o Sapce_Invaders -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-system  


GameEngine.o:GameEngine.cpp  
	g++ -c GameEngine.cpp

	
#SpaceInvaders++ Function
SpaceInvaders++.o:SpaceInvaders++.cpp
	g++ -c SpaceInvaders++.cpp 

#Sound  Engine
SoundEngine.o:SoundEngine.cpp
	g++ -c SoundEngine.cpp 

#Screen Manager
ScreenManager.o:ScreenManager.cpp
	g++ -c ScreenManager.cpp 

#Bitmap Store  
BitmapStore.o:BitmapStore.cpp
	g++ -c BitmapStore.cpp 

#Button class 
Button.o:Button.cpp
	g++ -c Button.cpp 

#UIPanel class 
UIPanel.o:UIPanel.cpp
	g++ -c UIPanel.cpp 

#Input Handler class 
InputHandler.o:InputHandler.cpp
	g++ -c InputHandler.cpp 

#Screen   class 
Screen.o:Screen.cpp
	g++ -c Screen.cpp 

#Select Screen   class 
SelectScreen.o:SelectScreen.cpp
	g++ -c SelectScreen.cpp 

clean:
#cleanup all object file
	  -rm *.o $(objects) 

