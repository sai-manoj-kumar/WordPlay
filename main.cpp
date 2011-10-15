/*
 * File:   main.cpp
 * Author: Sai Manoj Kumar Yadlapati
 *
 * Created on September 18, 2011, 3:26 PM
 */


#include "GameModule.h"
#include "Module.h"

/* 
 *
 * 
 */



int main(int argc, char** argv) {

    //    Object for the class GameModule is created.
    GameModule g;


    Module* gameMod = new GameModule;
    Module* oldMod = gameMod;

    gameMod->Initialize();

    while (true) {

        if ((gameMod = gameMod -> Execute()) != oldMod) {
            lastMod = oldMod;
            lastMod->Shutdown();
            gameMod->Initialize();
        }
    }








    //    g.Initialize();
    //
    //    do {
    //        g.Play();
    //        //    } while (false);
    //    } while (g.callPlayAgain());
    //
    //    
    //    g.Close();
    //

    

    return 0;

}
