/*
 * File:   main.cpp
 * Author: Y. Sai Manoj Kumar
 *
 * Created on September 18, 2011, 3:26 PM
 */


#include "game.h"

/* 
 *
 */




int main(int argc, char** argv) {

    //    Object for the class Game is created.
    Game g;

    g.initialize();

    do {
        g.play();
    } while (g.callPlayAgain());

    g.shutdown();


    return 0;


}

