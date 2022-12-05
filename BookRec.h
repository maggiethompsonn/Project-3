//
// Created by Jessica Halvorsen on 11/29/22.
//

#ifndef PROJECT_3_BOOKREC_H
#define PROJECT_3_BOOKREC_H
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;


class BookRec {
private:
    struct Book {
        string title, author, series, publisher, img, pubYear;
        vector<string> genres, awards, setting;
        int pages, points = 0, likePercent;
        double rating, price;
    };
    unordered_map<string, Book> bookList;
public:
    void readCSV(const string& filename);
    void genrePoints(const string& genre, int numPoints);
    void authorPoints(const string& genre, int numPoints);
    void numPagesPoints(string numPages, int numPoints);
    void awardWinningPoints(bool award, int numPoints);
    void publisherPoints(string publisher, int numPoints);
    void publishDatePoints(string date, int numPoints);
    void mergeSort();
    void quickSort();
    void printTopTen();
};


#endif //PROJECT_3_BOOKREC_H
