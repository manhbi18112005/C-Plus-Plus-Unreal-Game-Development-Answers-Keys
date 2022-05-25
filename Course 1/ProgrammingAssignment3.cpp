// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <string>

#include "Deck.h"
#include "Card.h"

using namespace consoleCards;

// IMPORTANT: Only add code in the section
// indicated below. The code I've provided
// makes your solution work with the 
// automated grader on Coursera

/**
 * Programming Assignment 3
 * @return exit status
*/
int main()
{
    // loop while there's more input
    std::string Input;
    std::getline(std::cin, Input);
    while (Input[0] != 'q')
    {
        // Add your code between this comment
        // and the comment below. You can of
        // course add more space between the
        // comments as needed

        // declare a deck variable
        // DON'T SHUFFLE THE DECK

        Deck deck;


        // deal 2 cards each to 4 players (deal properly, dealing
        // the first card to each player before dealing the
        // second card to each player)

        Card p1 = deck.TakeTopCard();
        Card p2 = deck.TakeTopCard();
        Card p3 = deck.TakeTopCard();
        Card p4 = deck.TakeTopCard();
        Card p11 = deck.TakeTopCard();
        Card p22 = deck.TakeTopCard();
        Card p33 = deck.TakeTopCard();
        Card p44 = deck.TakeTopCard();

        // deal 1 more card to players 2 and 3

        Card p222 = deck.TakeTopCard();
        Card p333 = deck.TakeTopCard();

        // flip all the cards over

        p1.FlipOver();
        p11.FlipOver();
        p2.FlipOver();
        p22.FlipOver();
        p222.FlipOver();
        p3.FlipOver();
        p33.FlipOver();
        p333.FlipOver();
        p4.FlipOver();
        p44.FlipOver();

        // print the cards for player 1

        p1.Print();
        p11.Print();
        p2.Print();
        p22.Print();
        p222.Print();
        p3.Print();
        p33.Print();
        p333.Print();
        p4.Print();
        p44.Print();
        // Don't add or modify any code below
        // this comment
        std::getline(std::cin, Input);
    }
}