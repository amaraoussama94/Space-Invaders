#main app
Sapce_Invaders:   GameEngine.o  SpaceInvaders++.o
	g++ Engine.o  SpaceInvaders++.o  -o Sapce_Invaders -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-system  


GameEngine.o:GameEngine.cpp  
	g++ -c GameEngine.cpp

	
#SpaceInvaders++ Function
SpaceInvaders++.o:SpaceInvaders++.cpp
	g++ -c SpaceInvaders++.cpp 


clean:
#cleanup all object file
	  -rm *.o $(objects) 

