//

// Created by Jessica Halvorsen on 11/29/22.
//
#include <iostream>
#include <string>
#include "SongRec.h"
using namespace std;

int main() {

    //1. read in csv file and create book struct
    SongRec songs;
    songs.readCSV("songs.csv");
    //songs.mergeSort(0, songs.listLength() - 1);

    //2. welcome the user to the Book Worm's book recommender
    cout << "Welcome to the Book Worm Book Recommender!" << endl;
    cout << "******************************************" << endl;

    // 3. ask the user to rank which criteria are most important to them
    //    genre, author, num pages, award-winning, publisher, publish date

    cout << "Which factors are most important to you? (rank in order ex: 23145)" << endl;
    cout << "1. Genre \n2. Author \n3. Number of Pages \n4. Award-Winning \n5. Publish Date \n";


    //4. based on their ranking, ask for their choices for each option
    //   and perform the associated method to add points to matching books
    //   maybe use a for loop here to iterate through their ranking in order
    //  start at 30, decrement by 5 with each iteration through loop
    //  genre: ask for the genre they are looking for
    //  author: ask for the author they are looking for
    //  num pages: ask for a page range
    //  award-winning: ask if they care if the book has won awards or not
    //  published date: give ranges on year dates and ask them to select their range

    string factorsRank, genreRank, authorRank, awardWinning, pageRank, publishDate;
    bool awardWinningBool;
    int numPoints = 30;

    cin >> factorsRank;
    for (int i = 0; i < 5; i++) {
        if (factorsRank[i] == '1') {
            cout << "Choose your top 3 genres and rank them in order (Ex: Romance, Fiction, Historical)" << endl;
            cout << "Adult, Adventure, Childrens, Classics, Drama, Dystopia, Fantasy, Fiction, \n"
                    "Historical Fiction, Horror, Humor, Literature, Mystery, Romance, \n"
                    "Science Fiction, Spiritual, Supernatural, Teen, Thriller, Young Adult \n";
            cin >> genreRank;
            books.genrePoints(genreRank, numPoints);
        }
        if (factorsRank[i] == '2') {
            cout << "Enter in the first and last name of your top 2 authors separated by a comma.\n"
                    "(Ex: Suzanne Collins, J.K. Rowling)" << endl;
            cin >> authorRank;
            books.authorPoints(authorRank, numPoints);
        }
        if (factorsRank[i] == '3') {
            cout << "Select the page range you are looking for, or no preference. (Ex: 2)\n"
                    "1. 100-200 \n"
                    "2. 200-300 \n"
                    "3. 300-400 \n"
                    "4. 400-500 \n"
                    "5. 500+\n"
                    "6. No preference" << endl;
            cin >> pageRank;
            books.numPagesPoints(pageRank, numPoints);
        }
        if (factorsRank[i] == '4') {
            cout << "Is it important for your book selection to be an award winning book? (Ex: yes or no)" << endl;
            cin >> awardWinning;
            if (awardWinning == "yes")
                awardWinningBool = true;
            else
                awardWinningBool = false;
            books.awardWinningPoints(awardWinningBool, numPoints);
        }
        if (factorsRank[i] == '5') {
            cout << "Select your desired range of how long ago the book was published, or no preference. (Ex: 5)\n"
                    "1. <5 years ago \n"
                    "2. 5-10 years\n"
                    "3. 10-20 years \n"
                    "4. 20+ years\n"
                    "5. No preference" << endl;
            cin >> publishDate;
            books.publishDatePoints(publishDate, numPoints);
        }
        numPoints = numPoints-5;
    }

    //5. return a list of the top 10 books for the user




    return 0;
}
