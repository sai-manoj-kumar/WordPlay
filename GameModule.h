/* 
 * File:   GameModule.h
 * Author: Sai Manoj Kumar Yadlapati
 *
 * Created on October 7, 2011, 5:35 PM
 */

#ifndef GAME_H
#define	GAME_H


#include<cstdlib>
#include<iostream>
#include<fstream>
#include<vector>
#include<string>

#include"Module.h"

using namespace std;

class GameModule : public Module {
private:

    //    variable to hold the number of words.
    //    The numberOfWords is set to the correct value in the initialize function
    int numberOfWords;

    //    variable to hold the random number generated.
    int random_number;

    int aggregate;
    
    
    int round;
    

    bool playAgain;
    //    A vector of string type objects is declared to store the
    //    words from the file
    vector<string> words;

    //    variable to handle the file operations. The file words.txt is used to
    //    store the words needed for the game

    ifstream *wordslist;



public:

    //    Inititalize module is used to load the words from the file to the program
    //    and a randomly generated number will help to choose a word randomly from the file.
    void Initialize();


    virtual Module* Execute();


    void Shutdown();



private:


    void printGuessedWord(string guessedword, vector<char> wrongGuesses);


    bool callPlayAgain();


    void randomize();

    
};





#endif	/* GAME_H */
