#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> grades;

    // Input loop
    int grade;
    char continueInput;
    do {
        cout << "Enter a grade: ";
        cin >> grade;
        grades.push_back(grade);

        cout << "Do you want to enter another grade? (y/n): ";
        cin >> continueInput;
    } while (continueInput == 'y' || continueInput == 'Y');

    // Calculate and display average
    int sum=0;
    for (const auto& element:grades){
        sum+=element;
    }
    float avg= static_cast<float> (sum)/ static_cast<float> (grades.size());
    printf("Average is: %f\n",avg);
    // Determine and display highest and lowest grades
    int high=0;
    int low=99999;
    for (const auto& element:grades){
        if (element>high){
            high=element;
        }
        if (element<low){
            low=element;
        }
    }
    printf("Highest grade is: %d\n",high);
    printf("Lowest Grade is: %d\n",low);
    // Display the list of grades in ascending order
    sort(grades.begin(),grades.end());
    for (const auto& element:grades){
        cout<<element<<endl;
    }
    return 0;
}
