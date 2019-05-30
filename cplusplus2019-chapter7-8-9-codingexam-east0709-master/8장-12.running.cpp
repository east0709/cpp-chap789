// 8��-12.running.cpp   8.8 ������ class�� ��ȭ 
#include <iostream> 
#include <stdlib.h>
#include "8��-9.animal.h"
#include "8��-11.cow_dog.h"
using namespace std;

void RunSpeaking (Animal& a, int nSteps){    
    for (int i = 0; i < nSteps; ++i){
        int x = rand()%5 - 2;
        int y = rand()%5 - 2;
        a.JumpBy(x, y);
        a.Speak ();
    }
}

void main (){
    Cow cow (Point (20, 10));
    Dog dog (Point (10, 20));

    RunSpeaking (cow, 5);
    RunSpeaking (dog, 5);
	system("pause");
}