//
// Created by Jessica Halvorsen on 11/29/22.
//
#include <iostream>
#include <string>
#include <unordered_map>
#include <cmath>
#include "BookRec.h"
using namespace std;

int main() {

    //1. read in csv file and create book struct 
    BookRec books;
    books.readCSV("books_please.csv");

    //2. welcome the user to the Book Worm's book recommender
    cout << "Welcome to the Book Worm Book Recommender!" << endl;
    cout << "******************************************" << endl;

    // 3. ask the user to rank which criteria are most important to them
    //    genre, author, num pages, award-winning, publisher, publish date

    cout << "Which factors are most important to you? (rank in order ex: 23145)" << endl;
    cout << "1. Genre \n2. Author \n3. Number of Pages \n4. Award-Winning \n5. Publish Date \n";
    int bookRank = 0;
    cin >> bookRank;
    int firstChoice = 0;
    int secondChoice = 0;
    int thirdChoice = 0;
    int fourthChoice = 0;
    int fifthChoice = 0;
    for(int i = 5; i > 0; i--)
    {
        int temp = bookRank / pow(10, i - 5) % 10;
        if(i == 1)
        {
            firstChoice = temp;
        }
        if(i == 2)
        {
            secondChoice = temp;
        }
        if(i == 3)
        {
            thirdChoice = temp;
        }
        if(i == 4)
        {
            fourthChoice = temp;
        }
        if(i == 5)
        {
            fifthChoice = temp;
        }
    }

    //4. based on their ranking, ask for their choices for each option
    //   and perform the associated method to add points to matching books
    //   maybe use a for loop here to iterate through their ranking in order
    int numPoints = 30; //start at 30, decrement by 5 with each iteration through loop

        //genre: ask for the genre they are looking for
        //author: ask for the author they are looking for
        //num pages: ask for a page range
        //award-winning: ask if they care if the book has won awards or not
        //published date: give ranges on year dates and ask them to select their range

    //5. return a list of the top 10 books for the user


    return 0;
}
