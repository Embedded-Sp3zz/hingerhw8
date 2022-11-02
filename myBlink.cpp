// myApp.cpp
//
// Proper invocation: ./myApp <argument>
//

#include"derek_LED.h"

int main(int argc, char* argv[]){
	if(argc!=2){
		cout << "Usage is makeLEDs <command>" << endl;
		cout << "	command is one of: on, off, flash, status" << endl;
		cout << " e.g. myApp flash" << endl;
	}
	cout << "Starting the myApp program" << endl;
	string cmd(argv[1]);
	LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
	int led = atoi(argv[2]);
	if(cmd=="on")leds[led].turnOn();
	else if(cmd=="off")leds[led].turnOff();
	else if(cmd=="flash")leds[led].flash("100"); //default is "50"
	else if(cmd=="status")leds[led].outputState();
	else if(cmd=="blink"){
			int num = atoi(argv[3]);
			leds[led].blink(num);
		}
	else{ cout << "Invalid command!" << endl; }
	cout << "Finished the myApp program" << endl;
	return 0;
}
