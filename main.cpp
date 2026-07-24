#include <iostream> 
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

////pass by pointer (scores) and value (size)
int calculateSum(const int scores[], int size){
    int sum=0;
    for (int i=0; i<size; i++){
        sum+=scores[i];
    }
    return sum;
}
//pass by value (sum, size)
double calculateAverage(int sum, int size){
    return ((double)sum)/((double)size);
}

//pass by pointer (scores) and value (size, bonus)
void addBonus(int scores[], int size, int bonus){
    for (int i=0; i<size; i++){
        scores[i]+=bonus;
    }
}

//pass by pointer (scores) and value (size)
int findMinimum(const int* scores, int size){
    int minimum=scores[0];
    for (int i=0; i<size; i++){
        if (scores[i]<minimum){
            minimum=scores[i];
        }
    }
    return minimum;
}

//pass by pointer (scores) and value (size)
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
    cout << fixed << setprecision(2);

    cout << "Average: " << calculateAverage(calculateSum(ary,10), 10) << endl;

    cout << "Scores after +10 bonus: ";
    addBonus(ary, 10, 10);
    for (int i=0; i<10; i++){
        cout << ary[i] << " ";
    }
    cout << endl;

    cout << "Minimum score: " << findMinimum(ary, 10) << endl;
    cout << "High performers (>=80): " << countHighPerformers(ary, 10) << endl;
    return 0;
}
// include &, comments