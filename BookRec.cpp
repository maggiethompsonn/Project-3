//
// Created by Jessica Halvorsen on 11/29/22.
//
#include <stdexcept> // std::runtime_error
#include <sstream> // std::stringstream
#include "SongRec.h"
#include <iostream>
using namespace std;

void SongRec::readCSV(const string& filename) {
    //create file stream
    ifstream myFile(filename);

    // Make sure the file is open
    if(!myFile.is_open()) throw runtime_error("Could not open file");

    // Extract the first line in the file
    string line;
    getline(myFile, line);

    int count = 0;
    //read in the rest of the data line by line
    while(getline(myFile, line)) {

        //create string stream with the current line
        istringstream ss(line);

        //create temps and storage for each variable
        string track, artist, uri, danceability, energy, loudness, mode, speechiness, acousticness,
                valence, tempo, duration, target, decade;
        double _danceability, _energy, _loudness, _mode, _speechiness, _acousticness;
        double _valence, _tempo, _duration, _target, _decade;


        //read in each column as a string
        getline(ss, track, ',');
        getline(ss, artist, ',');
        getline(ss, uri, ',');
        getline(ss, danceability, ',');
        getline(ss, energy, ',');
        getline(ss, loudness, ',');
        getline(ss, mode, ',');
        getline(ss, speechiness, ',');
        getline(ss, acousticness, ',');
        getline(ss, valence, ',');
        getline(ss, tempo, ',');
        getline(ss, duration, ',');
        getline(ss, target, ',');
        getline(ss, decade, ',');

        //convert string types to their expected type and add to book struct
        Song newSong;
        //add the strings: title, series, author, pub, img, pubYear
        newSong.track = track;
        newSong.artist = artist;
        newSong.uri = uri;

        //add the doubles: rating, price
        _danceability = atof(danceability.c_str());
        newSong.danceability = _danceability;
        _energy = atof(energy.c_str());
        newSong.energy = _energy;
        _loudness = atof(loudness.c_str());
        newSong.loudness = _loudness;
        _mode = atof(mode.c_str());
        newSong.mode = _mode;
        _speechiness = atof(speechiness.c_str());
        newSong.speechiness = _speechiness;
        _acousticness = atof(acousticness.c_str());
        newSong.acousticness = _acousticness;
        _valence = atof(valence.c_str());
        newSong.valence = _valence;
        _tempo = atof(tempo.c_str());
        newSong.tempo = _tempo;
        _duration = atof(duration.c_str());
        newSong.duration = _duration;
        _target = atof(target.c_str());
        newSong.target = _target;
        _decade = atof(decade.c_str());
        newSong.decade = _decade;

        //add the new book to the vector
        newSong.points = 100000000 - count; //debugging for sorts
        songList.push_back(newSong);
        count++;
    }
}

void SongRec::genrePoints(const string& genre, int numPoints) {

}

void SongRec::authorPoints(const string& genre, int numPoints) {

}

void SongRec::numPagesPoints(string numPages, int numPoints) {

}

void SongRec::awardWinningPoints(bool award, int numPoints) {

}

void SongRec::publisherPoints(string publisher, int numPoints) {

}

void SongRec::publishDatePoints(string date, int numPoints) {

}

int SongRec::listLength() {
    return songList.size();
}

void SongRec::mergeSort(int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;
        mergeSort(start, mid);
        mergeSort(mid + 1, end);
        merge(start, mid, end);
    }
}

void SongRec::merge(int start, int mid, int end) {
    //get size of left and right portion to merge
    int size1 = mid - start + 1;
    int size2 = end - mid;

    //create containers for left and right sides;
    Song leftArr[size1], rightArr[size2];

    //load the left vector and right vector with corresponding points
    for (int i = 0; i < size1; i++) {
        leftArr[i] = songList.at(start + i);
    }
    for (int j = 0; j < size2; j++) {
        rightArr[j] = songList.at(mid + 1 + j);
    }

    //make new counter variables
    int i = 0, j = 0, k = start;

    //complete comparisons to put in order
    while (i < size1 && j < size2) {
        if (leftArr[i].points <= rightArr[j].points) {
            songList.at(k) = leftArr[i];
            i++;
        }
        else {
            songList.at(k) = rightArr[j];
            j++;
        }
        k++;
    }

    //put changes into bookList from left side
    while (i < size1) {
        songList.at(k) = leftArr[i];
        i++;
        k++;
    }

    //put changes into bookList from the right side
    while (j < size2) {
        songList.at(k) = rightArr[j];
        j++;
        k++;
    }
}

void SongRec::quickSort() {

}

void SongRec::printTopTen() {

}
