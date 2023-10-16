#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// vector of int.
// used to store the records
typedef vector<int> Records;

class RecordsManager {
private:
    fstream _file;
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}

    void read(Records &records) {
        _file.open(_filename, ios::in);

        string line;
        try {
            while (std::getline(_file, line)) {
                try {
                    int value = stoi(line);
                    records.push_back(value);
                } catch (const invalid_argument &ex) {
                    cerr << "Invalid integer value in file: " << ex.what() << endl;
                }
            }
        } catch (const out_of_range &ex) {
            cerr << "Out of range integer value in file: " << ex.what() << endl;
            _file.close(); 
            throw;          
        }

        _file.close();
    }
};

int main() {
    RecordsManager recordM("test_corrupt2.txt");
    Records myRecords;

    try {
        // reads records with exception handling
        recordM.read(myRecords);

        // calculate and print out the sum
        int sum = 0;
        for (int i = 0; i < myRecords.size(); i++) {
            cout << myRecords[i] << endl;
            sum += myRecords[i];
        }
        cout << "Sum: " << sum << endl;
    } catch (const exception &ex) {
        cerr << "Error: " << ex.what() << endl;
    }

    return 0;
}
