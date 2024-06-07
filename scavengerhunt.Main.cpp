//Thierry Ndayisaba
//june 6th
//  scavengerhunt game where we where we create multiple question and clues 

#include "scavenger_hunt.h"
#include <iostream>

int main()i
{
    Node *head = nullptr;

    Clue clue1 = {"I can be red, blue, and green. No one can reach me. What am I?", "A rainbow", 3, "Look up after it rains"};
    Clue clue2 = {"I fly without wings. I cry without eyes. Whenever I go, darkness flies. What am I?", "A cloud", 4, "I'm up in the sky"};

    insertAtBeginning(head, clue1);
    append(head, clue2);

    displayClues(head);

    releaseMemory(head);

    return 0;
}

