#include <iostream>
#include <vector>

using namespace std;

vector<int> add_to_position(vector<int> vec, int number, int position) {
    vector<int> newVec(vec.size() + 1);

    for (int i = 0; i < vec.size(); i++) {
        newVec[i] = vec[i];
        newVec[vec.size()] = number;
    }
    vec.insert(vec.begin() + position, number);


    return vec;
}

int main() {

    vector<int> vec = { 5, 10, 11, 6, 7, 8, 9, 8, 3, 12 };
    int number;
    int position;
    cout << "Please enter your robot number: ";
    cin >> number;
    cout << "Please enter your position: ";
    cin >> position;

    vec = add_to_position(vec, number, position);

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }

}
