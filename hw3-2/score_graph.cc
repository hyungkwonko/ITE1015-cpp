
#include <iostream>
#include <sstream>

using namespace std;

typedef struct {
    char name[7];
    int score;
} Person;

void printScoreStars(Person* persons) {
    int res, i;
    res = persons->score / 5;
    std::cout<<std::string(res, '*')<<std::endl;
    //for(i=0; i<res; i++) {
    //    std::cout<<'*';
    //}
    //std::cout<<"\n";
}

int main(void) {
    Person per[3];
    std::cout<<"name & score: ";
    std::cin>>per[0].name>>per[0].score;
    std::cout<<"name & score: ";
    std::cin>>per[1].name>>per[1].score;
    std::cout<<"name & score: ";
    std::cin>>per[2].name>>per[2].score;
    printScoreStars(&per[0]);
    printScoreStars(&per[1]);
    printScoreStars(&per[2]);
    return 0;
}
