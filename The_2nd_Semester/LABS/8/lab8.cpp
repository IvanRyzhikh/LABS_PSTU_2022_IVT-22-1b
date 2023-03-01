#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Team {
    string name;
    string city;
    int playerAmount;
    int points;
};

Team teams[1000];
int numTeams = 0;

void writeResultToFile() {
    ofstream outFile("teams.txt");
    for (int i = 0; i < numTeams; i++) {
        outFile << teams[i].name << " " << teams[i].city << " " << teams[i].playerAmount << " " << teams[i].points << endl;
    }
    outFile.close();

}

void replaceFile() {
    ifstream inFile("teams.txt");
    ofstream outFile("new_teams.txt");

    while (!inFile.eof()) {
        string name;
        string city;
        int players;
        int points;

        inFile >> name >> city >> players >> points;
        if (points >= 0) {
            outFile << name << " " << city << " " << players << " " << points << endl;
        }
    }

    inFile.close();
    outFile.close();
    remove("teams.txt");
    rename("new_teams.txt", "teams.txt");
}

void addNewTeams() {
    int amount;
    cout << "Enter amount of teams: ";
    cin >> amount;
    for (int i = 0; i < amount; i++)
    {
        Team t;
        cout << "Enter name of team: ";
        cin >> t.name;
        cout << "Enter city of team: ";
        cin >> t.city;
        cout << "Enter amount of team players: ";
        cin >> t.playerAmount;
        cout << "Enter amount of team points: ";
        cin >> t.points;
        teams[numTeams++] = t;
    }
    writeResultToFile();
}


void deleteTeams() {
    int minPoints;
    cout << "Enter minimum points: ";
    cin >> minPoints;

    for (int i = 0; i < numTeams; i++) {
        if (teams[i].points < minPoints) {
            for (int j = i; j < numTeams - 1; j++) {
                teams[j] = teams[j + 1];
            }
            numTeams--;
            i--;
        }
    }
    writeResultToFile();
}


void enterTeamData() {
        cout << "Enter amount of teams: "; // ПРивет
        cin >> numTeams;
    for (int i = 0; i < numTeams; i++) {
            cout << "Enter name of team: ";
            cin >> teams[i].name;
            cout << "Enter city of team: ";
            cin >> teams[i].city;
            cout << "Enter amount of team players: ";
            cin >> teams[i].playerAmount;
            cout << "Enter amount of team points: ";
            cin >> teams[i].points;
    }
    writeResultToFile();
}


int main() {
    enterTeamData();
    cout << "Initial amount of teams: " << numTeams << endl;
    deleteTeams();
    cout << "Amount of teams after deleting: " << numTeams << endl;
    addNewTeams();
    cout << "Updated amount of teams: " << numTeams << endl;

    writeResultToFile();
    replaceFile();
    return 0;
}
