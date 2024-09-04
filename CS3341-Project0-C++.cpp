/* Nguyen Phung
   Net ID: dxp210043
  */

#include <iostream> //input & output
#include <fstream> //read & write from file
#include <sstream> //input & output stream
#include <cmath> //math functions
#include <iomanip> //setw, setprecision
#include <vector> //vector
#include <string> //string

using namespace std;

//Prestep: Define and initialize unchanged variables
const int MAX_PILOTS = 20;
const int MAX_COORDINATES = 16;
const int MAX_DIMENSIONS = 2;

//Step 1: Function to Read Data from Input File 
//Sample File Data: Greedo 4, 0 4,7.5 7,7.5 7,3 9,0 7,0 4,0

int readDataFile( string& fileName, string pilotName[MAX_PILOTS], double coordinate[MAX_PILOTS][MAX_COORDINATES][MAX_DIMENSIONS] ){
    ifstream inputFile(fileName);
    if(!inputFile){
        cerr<<"Error opening file, please double check file name again "<<fileName<<endl;
        return -1;
    }
        
        //read the pilot name and coordinate data
        string storingLine;
        int pilotCount = 0;
        int coordinateIndexCount;
        double x, y;
        char comma;
        while(getline(inputFile, storingLine) && pilotCount < MAX_PILOTS){
            istringstream extract(storingLine);
            string pilotNameData;
            extract >>pilotNameData;
            pilotName[pilotCount] = pilotNameData;
            pilotCount++;
            
            //Keep track of how many coordinates have been processed for the current pilot
            int coordinateIndexCount = 0;
            while((extract>>x>>comma>>y) && coordinateIndexCount < MAX_COORDINATES){
                //store the x value
                coordinate[MA
            }
        }
        
        //read
    inputFile.close();
    return pilotCount;
}



//Step 2: Function  to calculate the area using the shoelace formula 

//Step 3: Write Results to Output File named pilot_areas.txt


int main() {
    string inputFileName;
    //1 dimension array: Pilot
    string pilotNames[MAX_PILOTS];
    //3 dimension array: CoordinatesValue
    double  coordinateValue[MAX_PILOTS][MAX_COORDINATES][MAX_DIMENSIONS] = {0};
    
    
    cout<<"Enter the file name to open: ";
    cin>> inputFileName;
    
    int totalPilot = readDataFile(inputFileName,pilotNames,coordinateValue);
    
    cout<<totalPilot;
    
     if (totalPilot > 0){
        cout << "Pilot names:" << endl;
        for (int i = 0; i < totalPilot; ++i){
            cout << pilotNames[i]<<endl;
        }
    } else {
        cout << "No pilots found or an error occurred." << endl;
    }
    //1 dimension array: Pilot
    
    return 0;
}
