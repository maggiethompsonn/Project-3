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
        int temp = bookRank / pow(10, 5 - i) % 10;
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

    int genre = -1;
    string author = "";
    int pageRange = -1;
    bool awardWinning = 0;
    int publishDate = -1;
    //4. based on their ranking, ask for their choices for each option
    //   and perform the associated method to add points to matching books
    //   maybe use a for loop here to iterate through their ranking in order
    int numPoints = 30; //start at 30, decrement by 5 with each iteration through loop

        //genre: ask for the genre they are looking for
    cout << "Please type a number for the genre you are looking for." << endl;
    cout << ; //List all genres in numbered list
    cin >> genre;
        //author: ask for the author they are looking for
    cout << "Please type the name of the author you are looking for (only first and last name)" << endl;
    cin >> author;
        //num pages: ask for a page range
    cout << "Please type a number for the page range you are looking for." << endl;
    cout << ; //List all page ranges in numbered list
    cin >> pageRange;
        //award-winning: ask if they care if the book has won awards or not
    cout << "If reading award winning books are important to you, please type '1', otherwise type '0'." << endl;
    cin >> awardWinning;
        //published date: give ranges on year dates and ask them to select their range
    cout << "Please type a number for a published date range." << endl;
    cout << ; //List published date ranges in numbered list
    cin >> publishDate;

    //5. return a list of the top 10 books for the user


    return 0;
}
