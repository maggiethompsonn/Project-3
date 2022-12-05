//
// Created by Jessica Halvorsen on 11/29/22.
//
#include <stdexcept> // std::runtime_error
#include <sstream> // std::stringstream
#include "BookRec.h"
#include <iostream>
using namespace std;

void BookRec::readCSV(const string& filename) {
    //create file stream
    ifstream myFile(filename);

    // Make sure the file is open
    if(!myFile.is_open()) throw runtime_error("Could not open file");

    // Extract the first line in the file
    string line;
    getline(myFile, line);

    //read in the rest of the data line by line
    while(getline(myFile, line)) {

        //create string stream with the current line
        istringstream ss(line);

        //create temps and storage for each variable
        string ID, author, series, title, rating, isbn, genres, pages, pub, pubDate, awards, likePercent, setting, img, price;
        double _rating, _price;
        int pubYear, _likePercent, _pages;
        vector<string> _genres, _awards, _setting;

        //read in each column as a string
        getline(ss, ID, '~');
        getline(ss, title, '~');
        getline(ss, series, '~');
        getline(ss, author, '~');
        getline(ss, rating, '~');
        getline(ss, isbn, '~');
        getline(ss, genres, '~');
        getline(ss, pages, '~');
        getline(ss, pub, '~');
        getline(ss, pubDate, '~');
        getline(ss, awards, '~');
        getline(ss, likePercent, '~');
        getline(ss, setting, '~');
        getline(ss, img, '~');
        getline(ss, price, '~');

        //convert string types to their expected type and add to book struct
        Book newBook;
        //add the strings: title, series, author, pub, img, pubYear
        newBook.title = title;
        newBook.series = series;
        newBook.author = author;
        newBook.publisher = pub;
        newBook.img = img;
        if (!pubDate.empty()) {
            string year = pubDate.substr(pubDate.length() - 4);
            newBook.pubYear = year;
        }
        else {
            newBook.pubYear = "N/A";
        }

        //add the doubles: rating, price
        _rating = atof(rating.c_str());
        newBook.rating = _rating;
        _price = atof(price.c_str());
        newBook.price = _price;

        //add vectors: genres, awards, setting
        istringstream ss2(genres);
        string temp;
        while(getline(ss2,temp, ',')) {
            if (temp.substr(0,1) == " ") {
                temp = temp.substr(1);
            }
            _genres.push_back(temp);
        }
        newBook.genres = _genres;
        istringstream ss3(awards);
        while(getline(ss3,temp, ',')) {
            if (temp.substr(0,1) == " ") {
                temp = temp.substr(1);
            }
            _awards.push_back(temp);
        }
        newBook.awards = _awards;
        istringstream ss4(setting);
        while(getline(ss4,temp, '\'')) {
            if (temp.substr(0,2) == ", ") {
                continue;
            }
            _setting.push_back(temp);
        }
        newBook.setting = _setting;

        //add integers: pages, like percent
        if (!pages.empty()) {
            _pages = stoi(pages);
            newBook.pages = _pages;
        }
        else {
            newBook.pages = 0;
        }
        if (!likePercent.empty()) {
            _likePercent = stoi(likePercent);
            newBook.likePercent = _likePercent;
        }
        else {
            newBook.likePercent = 0;
        }

        //add the new book to the vector
        bookList.push_back(newBook);
    }
}

void BookRec::genrePoints(const string& genre, int numPoints) {

}

void BookRec::authorPoints(const string& genre, int numPoints) {

}

void BookRec::numPagesPoints(string numPages, int numPoints) {

}

void BookRec::awardWinningPoints(bool award, int numPoints) {

}

void BookRec::publisherPoints(string publisher, int numPoints) {

}

void BookRec::publishDatePoints(string date, int numPoints) {

}

void BookRec::mergeSort() {

}

void BookRec::quickSort() {

}

void BookRec::printTopTen() {

}
