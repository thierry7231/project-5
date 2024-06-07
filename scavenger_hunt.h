//Thierry Ndayisaba
//june 6th
//  scavengerhunt game where we where we create multiple question and clues 

#include <cstring>

struct Cluei
{
    char *text;         
    char *answer;       
    int difficulty;
    char *extra;     
};


struct Node
{
    Clue data;
    Node *next;
};


void insertAtBeginning(Node *&head, const Clue &newClue);
void append(Node *&head, const Clue &newClue);
void displayClues(const Node *head);
void releaseMemory(Node *&head);

