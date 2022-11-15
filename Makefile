#main app
Thomas:   Engine.o  
	g++ Engine.o   -o Sapce_Invaders -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-system  


Engine.o:Engine.cpp
	g++ -c Engine.cpp

	
#Engine Function
Input.o:Input.cpp
	g++ -c Input.cpp 


clean:
#cleanup all object file
	  -rm *.o $(objects) 

