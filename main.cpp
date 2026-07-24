#include <iostream> 
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;


int calculateSum(const int scores[], int size){
    int sum=0;
    for (int i=0; i<size; i++){
        sum+=scores[i];
    }
    return sum;
}

double calculateAverage(int sum, int size){
    return ((double)sum)/((double)size);
}

void addBonus(int scores[], int size, int bonus){
    for (int i=0; i<size; i++){
        scores[i]+=bonus;
    }
}

int findMinimum(const int* scores, int size){
    int minimum=scores[0];
    for (int i=0; i<size; i++){
        if (scores[i]<minimum){
            minimum=scores[i];
        }
    }
    return minimum;
}

int countHighPerformers(const int scores[], int size){
    int count=0;
    for (int i=0; i<size; i++){
        if (scores[i]>=80){
            count++;
        }
    }
    return count;
}

int main(){
    cout << "Original scores: ";
    int ary[10]={75, 88, 62, 95, 50, 82, 70, 91, 45, 78};
    for (int i=0; i<10; i++){
        cout << ary[i] << " ";
    }
    cout << endl;

    cout << "Sum: " << calculateSum(ary, 10) << endl;

    cout << "Average: " << calculateAverage(calculateSum(ary,10), 10) << endl;

    cout << "Scores after +10 bonus: ";
    addBonus(ary, 10, 10);
    for (int i=0; i<10; i++){
        cout << ary[i] << " ";
    }
    cout << endl;

    cout << "Minimum score: " << findMinimum(ary, 10) << endl;
    cout << "High performers (<80): " << countHighPerformers(ary, 10) << endl;
    return 0;
}