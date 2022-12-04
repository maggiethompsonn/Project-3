//
// Created by Jessica Halvorsen on 11/29/22.
//
#include <iostream>
#include <string>
#include <unordered_map>
#include "BookRec.h"
using namespace std;

int main() {

    //1. read in csv file

    //2. welcome the user to the Book Worm's book recommender
    cout << "Welcome to the Book Worm Book Recommender!" << endl;
    cout << "******************************************" << endl;

    // 3. ask the user to rank which criteria are most important to them
    //    genre, author, num pages, award-winning, publisher, publish date

    cout << "Which factors are most important to you? (rank in order ex: 231456)" << endl;
    cout << "1. Genre \n2. Author \n3. Number of Pages \n4. Award-Winning \n5. Publisher"
            "\n6. Publish Date \n";


    //4. based on their ranking, ask for their choices for each option
    //   and perform the associated method to add points to matching books
    //   maybe use a for loop here to iterate through their ranking in order
    int numPoints = 30; //start at 30, decrement by 5 with each iteration through loop

        //genre: ask for the genre they are looking for
        //author: ask for the author they are looking for
        //num pages: ask for a page range
        //award-winning: ask if they care if the book has won awards or not
        //publisher: ask for the publisher they are looking for
        //published date: give ranges on year dates and ask them to select their range

    //5. return a list of the top 10 books for the user




    return 0;
}
