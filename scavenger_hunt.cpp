//Thierry Ndayisaba
//june 6th
//  scavengerhunt game where we where we create multiple question and clues 



#include "scavenger_hunt.h"
#include <iostream>

void insertAtBeginning(Node *&head, const Clue &newClue)
{
    Node *newNode = new Node;
    newNode->data.text = new char[strlen(newClue.text) + 1];
    strcpy(newNode->data.text, newClue.text);

    newNode->data.answer = new char[strlen(newClue.answer) + 1];
    strcpy(newNode->data.answer, newClue.answer);

    newNode->data.difficulty = newClue.difficulty;

    newNode->data.extra = new char[strlen(newClue.extra) + 1];
    strcpy(newNode->data.extra, newClue.extra);

    newNode->next = head;
    head = newNode;
}

void append(Node *&head, const Clue &newClue)
{
    Node *newNode = new Node;
    newNode->data.text = new char[strlen(newClue.text) + 1];
    strcpy(newNode->data.text, newClue.text);

    newNode->data.answer = new char[strlen(newClue.answer) + 1];
    strcpy(newNode->data.answer, newClue.answer);

    newNode->data.difficulty = newClue.difficulty;

    newNode->data.extra = new char[strlen(newClue.extra) + 1];
    strcpy(newNode->data.extra, newClue.extra);

    newNode->next = nullptr;

    if (!head)
    {
        head = newNode;
    } else
    {
        Node *current = head;
        while (current->next)
       	{
            current = current->next;
        }
        current->next = newNode;
    }
}

void displayClues(const Node *head)
{
    const Node *current = head;
    while (current)
    {
        std::cout << "Clue: " << current->data.text << std::endl;
        std::cout << "Answer: " << current->data.answer << std::endl;
        std::cout << "Difficulty: " << current->data.difficulty << std::endl;
        std::cout << "Extra: " << current->data.extra << std::endl;
        std::cout << "-------------------" << std::endl;
        current = current->next;
    }
}

void releaseMemory(Node *&head)
{
    while (head)
    {
        Node *temp = head;
        head = head->next;
        delete[] temp->data.text;
        delete[] temp->data.answer;
        delete[] temp->data.extra;
        delete temp;
    }
}
