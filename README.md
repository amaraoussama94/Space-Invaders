<!--<p align="center">
    <img src="https://github.com/amaraoussama94/Thomas-Wass-Alone/blob/main/game_pic.png"  >  
</p>-->

<h3 align="left">How to Install : </h3> 

install sfml :-sudo apt-get install libsfml-dev</br>
install make :-sudo apt-get install  make</br>
              -cd Space-Invaders </br>
              -make</br>
              -make clean</br>
              -./Sapce_Invaders</br>


<h3 align="left">Generale info: </h3>    
*Game control :
escape to close  game</br>
Enter to pause and start game </br>
 


*Game name:Sapce Invaders</br>
*version :0.1</br>
*here we use :entity-component pattern ,Strategy pattern(composition),Factory pattern ,C++ smart pointers(shared pointers,Unique pointers)</br>
<h3 align="left">diagram:</h3>   
<!--<p align="center">
    <img src="https://github.com/amaraoussama94/Thomas-Wass-Alone/blob/main/game_pic.png"  >  
</p>-->
In the preceding diagram, we can see that a screen has one or more UIPanel
instances that it can display selectively and that UIPanel instances can have zero or
more Button instances. Each UIPanel will have a related InputHandler because
each UIPanel will have different combinations and layouts of buttons. The buttons
are shared via pointers between UIPanel and InputHandler instances
 

 