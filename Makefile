#main app
Sapce_Invaders: GameEngine.o  SpaceInvaders++.o  SoundEngine.o ScreenManager.o BitmapStore.o
	g++ Engine.o  SpaceInvaders++.o SoundEngine.o ScreenManager.o BitmapStore.o -o Sapce_Invaders -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-system  


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


clean:
#cleanup all object file
	  -rm *.o $(objects) 

