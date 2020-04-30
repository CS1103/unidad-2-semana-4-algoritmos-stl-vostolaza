#include "ejercicios.h"

void p146(){
    vector<string> codeList;
    string code;
    while (code != "#"){
        cout << "Input a code no longer than 50 characters: ";
        cin >> code;
        if (code.length() > 50)
            cout << "Character limit exceeded, try again." << endl;
        else
        if (code != "#")
            codeList.push_back(code);
    }

    bool first;
    for (auto &i : codeList){
        first = true;
        int successCheck = 1;
        do {
            if (!first){
                std::cout << i << '\n';
                successCheck--;
                break;
            }
            first = !first;
        } while(std::next_permutation(i.begin(), i.end()));
        if (successCheck)
            cout << "No succesors" << endl;
    }
}

void p199(){
    // Get the number of test cases
    int N;
    cout << "Input the number of test cases: ";
    cin >> N;

    // Create an int vector to store the length of each train
    vector<int> L;
    // Create a vector that contains int vectors which hold the order of each train
    vector<vector <int>> trains;

    int l;
    int o;
    while(N){
        cout << "Input train lenght: ";
        cin >> l;
        L.push_back(l);

        cout << "Input wagon order: ";
        vector<int> order;
        for (int i = 0; i < l; i++){
            cin >> o;
            order.push_back(o);
        }
        trains.push_back(order);
        N--;
    }
}