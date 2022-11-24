<p align="center">
    <img src="https://github.com/amaraoussama94/Space-Invaders/blob/main/game_pic_1.png"  >  
</p>

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
Use the Ui panel to start the game or </br>
 Up key : to go up</br>
 Down key : to go down</br>
 Left key : to go Left</br>
 Right key : to go Right</br>
 Sapce :for shotting </br>


*Game name:Sapce Invaders</br>
*version :0.8</br>
*here we use :entity-component pattern ,Strategy pattern(composition),Factory pattern ,C++ smart pointers(shared pointers,Unique pointers),assertions.</br>
<h3 align="left">diagram 1:</h3>   
<p align="center">
    <img src="https://github.com/amaraoussama94/Space-Invaders/blob/main/diagram.png"  >  
</p>
In the preceding diagram, we can see that a screen has one or more UIPanel
instances that it can display selectively and that UIPanel instances can have zero or
more Button instances. Each UIPanel will have a related InputHandler because
each UIPanel will have different combinations and layouts of buttons. The buttons
are shared via pointers between UIPanel and InputHandler instances
<h3 align="left">diagram 2:</h3>   
<p align="center">
    <img src="https://github.com/amaraoussama94/Space-Invaders/blob/main/diagram_2.png"  >  
</p>

<h3 align="left">The structure of the file I/O and factory classes:</h3>   
<p align="center">
    <img src="https://github.com/amaraoussama94/Space-Invaders/blob/main/The%20structure%20of%20the%20file%20I-O%20and%20factory%20classes.png"  >  
</p>
 
