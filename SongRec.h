//
// Created by Jessica Halvorsen, Maggie Thompson, and Robert Noble on 12/01/22.
//

#ifndef PROJECT_3_SONGREC_H
#define PROJECT_3_SONGREC_H
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
        double danceability, energy, loudness, speechiness, acousticness;
        double valence, tempo;
        int mode, duration, target, decade;
        int points = 0;
    };
    vector<Song> songList;
public:
    void readCSV(const string& filename);
    void dancePoints(int choice, int numPoints);
    void energyPoints(int choice, int numPoints);
    void modePoints(string choice, int numPoints);
    void acousticPoints(int choice, int numPoints);
    void valencePoints(int choice, int numPoints);
    void tempoPoints(int choice, int numPoints);
    int listLength();
    void mergeSort(int start, int end);
    void merge(int start, int mid, int end);
    int quickSortHelp(int start, int end);
    void quickSort(int start, int end);
    void printTopTen();
};


#endif //PROJECT_3_SONGREC_H

