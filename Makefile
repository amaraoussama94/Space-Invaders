#main app
Thomas:   Engine.o  SpaceInvaders++.o
	g++ Engine.o  SpaceInvaders++.o  -o Sapce_Invaders -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-system  


Engine.o:Engine.cpp  
	g++ -c Engine.cpp

	
#SpaceInvaders++ Function
SpaceInvaders++.o:SpaceInvaders++.cpp
	g++ -c SpaceInvaders++.cpp 


clean:
#cleanup all object file
	  -rm *.o $(objects) 

