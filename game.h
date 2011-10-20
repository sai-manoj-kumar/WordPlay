/* 
 * File:   game.h
 * Author: SAI
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


using namespace std;

class Game {
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

    void randomize();

    void printGuessedWord(string guessedword, vector<char> wrongGuesses);
    
public:

    //    Inititalize module is used to load the words from the file to the program
    //    and a randomly generated number will help to choose a word randomly from the file.
    void initialize();


    void play();


    bool callPlayAgain();

    
    void shutdown();


};





#endif	/* GAME_H */

