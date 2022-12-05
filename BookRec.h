//
// Created by Jessica Halvorsen on 11/29/22.
//

#ifndef PROJECT_3_BOOKREC_H
#define PROJECT_3_BOOKREC_H
#include <string>
#include <vector>
#include <fstream>
#include <stdexcept> // std::runtime_error
#include <sstream> // std::stringstream
using namespace std;

class SongRec {
private:
    struct Song {
        string track, artist, uri;
        double danceability, energy, loudness, mode, speechiness, acousticness;
        double valence, tempo, duration, target, decade;
        int points = 0;
    };
    vector<Song> songList;
public:
    void readCSV(const string& filename);
    void genrePoints(const string& genre, int numPoints);
    void authorPoints(const string& genre, int numPoints);
    void numPagesPoints(string numPages, int numPoints);
    void awardWinningPoints(bool award, int numPoints);
    void publisherPoints(string publisher, int numPoints);
    void publishDatePoints(string date, int numPoints);
    int listLength();
    void mergeSort(int start, int end);
    void merge(int start, int mid, int end);
    void quickSort();
    void printTopTen();
};


#endif //PROJECT_3_SONGREC_H
