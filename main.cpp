#include <iostream>
#include <cmath>

using namespace std;

double cube(double num){
    double result = num * num * num;
    return result;
}

int getMax(int num1, int num2, int num3){
    int result;

    if(num1 >= num2 && num1 >= num3){
        result = num1;
    }
    else if(num2 >= num1 && num2 >= num3){
        result = num2;
    }
    else {
        result = num3;
    }

    return result;
}

int nestedLoop(){
    int numberGrid[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << numberGrid[i][j];
        }
    }

    return 0;
}

int pointers(){
    // Comment does not run when executed
    /* comment multiple lines
    like this one
    and this one
    */
    int age = 19;
    int *pAge = &age; // (*) pointer variable

    double gpa = 2.7;
    double *pGpa = &gpa;

    string name = "Mike"; // comment here
    string *pName = &name;

    cout << "stored value: " << age << endl;
    cout << "where its stored in hardware: " << pAge << endl;
    cout << "dereferencing: " << *pAge << endl;; // dereferencing a pointer
    cout << "combo dereferencing: " << *&gpa << endl;

    return 0;
}

int doWhile(int index);
int guessWho();
int forLoop();
int power(int baseNum, int powNum);
int basic();
int math();
int input();
int arr();
int madlib();
void is_Male(bool isMale, bool isTall);
void sayHi(string name, int age);
string getDayOfWeek(int dayNum);
int SMRT();
int modRate();
int inheretChef();

class Book {
    public:
        string title;
        string author;
        int pages;
        /*
        this just acts as a template/specification/blueprint
        to create one you have to create an object
        */
        Book(){
            title = "no title";
            author = "no author";
            pages = 0;
        }

        Book(string aTitle, string aAuthor, int aPages){
            /*
            Constructor instead of individually
            inputting the information
            */
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int CallTheBook(){

    Book book1("Harry Potter", "Harry Potter", 500);
    Book book2("Lord of the Rings", "Tolkein", 700); // uses the same template as the one above
    book2.title = "Hunger Games";
    Book book3;

    cout << book1.title << endl; //to call out the object
    cout << book2.title << endl;
    cout << book3.title << endl;

    return 0;
}

class Student {
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }
        bool hasHonors(){ //object function
            if(gpa >= 2.0){
                return true;
            }
            return false;
        }
};

class Movie {
    // getters & setters
    private: // use if you want to keep variable inaccessible
        string rating;
    public:
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }
        void setRating(string aRating){
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            } else {
                rating = "NR";
            }
        }
        string getRating(){
            return rating;
        }
};

class Chef { // super class
    public:
        void makeChicken(){
            cout << "The chef makes yummy mami chicken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes bbq ribs" << endl;
        }

};

class ItalianChef : public Chef{ // sub class
    // inheritence
    public:
        void makePasta(){
            cout << "The chef makes pasta" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes panzarotti" << endl;
        }
};

int main(){

    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    ItalianChef italianchef;
    italianchef.makePasta();
    italianchef.makeSpecialDish();

    return 0;
}

int inheretChef(){

    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    ItalianChef italianchef;
    italianchef.makePasta();
    italianchef.makeSpecialDish();

    return 0;
}

int modRate(){
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    cout<< avengers.getRating() << endl;

    avengers.setRating("Dog");
    cout<< avengers.getRating() << endl;

    return 0;
}

int SMRT(){

    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);

    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl;

    return 0;
}

int power(int baseNum, int powNum){
    int result = 1;
    for(int i = 0; i < powNum; i++){
        result = result * baseNum;
    }

    return result;
}

int forLoop(){
    int nums[] = {1, 2, 5, 7, 3};
    for(int i = 0; i <= 5; i++){
        cout << nums[i] << endl;
    }

    return 0;
}

int guessWho(){
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while(secretNum != guess && !outOfGuesses){
            if(guessCount < guessLimit){
                cout << "Enter guess: ";
                cin >> guess;
                guessCount++;
            } else {
                outOfGuesses = true;
            }
    }

    if(outOfGuesses){
        cout << "You Loose!!!" << endl;
    } else {
        cout << "You Win!!!" << endl;
    }
    return 0;
}

int doWhile(int index){
    do{
        cout << index << endl;
        index++;
    }while(index <= 5);

    return 0;
}

string getDayOfWeek(int dayNum){
    string dayName;

    switch(dayNum){
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:
        dayName = "Invalid Day Number";
    }
    return dayName;
}

void is_Male(bool isMale, bool isTall){
   if (isMale && isTall){
        cout << "your are a tall male";
    }
    else if(isMale && !isTall){
        cout << "you are a short male";
    }
    else if (!isMale && isTall){
        cout << "you are tall but not male";
    }
    else{
        cout << "you are not male and tall";
    }
}

void sayHi(string name, int age){
    cout << "Hello " << name << " you are " << age << endl;
}

int madlib(){
    string color, pluralNoun, celebrity;

    cout << "\n";
    cout << "enter color: ";
    getline(cin, color);
    cout << "enter plural noun: ";
    getline(cin, pluralNoun);
    cout << "enter celebrity: ";
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    return 0;
}

int arr(){
    int luckyNums[20] = {4, 8, 15, 16, 23, 42};
    luckyNums[10] = 100;
    cout << luckyNums[10];

    return 0;
}

int input(){
    int age;
    cout << "enter your age: " << endl;
    cin >> age;
    cout << "you are " << age << " years old\n" << endl;

    char firstInitial;
    cout << "enter the first letter of your name: " << endl;
    cin >> firstInitial;
    cout << "you are " << firstInitial << "\n" << endl;

    string name;
    cout << "enter your name: " << endl;
    getline(cin, name);
    cout << "hi " << name << "\nhow are yah!\n" << endl;

    return 0;
}

int math(){
    int wnum =5;
    double dnum = 5.5;

    wnum++;

    cout << 5 + 7 << endl;
    cout << 10 % 3 << endl;
    cout << (4 + 5) * 20 << endl;
    cout << wnum << endl;
    cout << 5.5 + 9 << endl;
    cout << 10 / 3 << endl;
    cout << 10.0 / 3.0 << endl;
    cout << pow(2, 5) << endl;
    cout << sqrt(36.0) << endl;
    cout << round(4.756) << endl;
    cout << ceil(4.1) << endl;
    cout << floor(8.9) << endl;
    cout << fmax(3, 10) << endl;
    cout << fmin(45, 26) << "\n" << endl;

    return 0;
}

int basic(){
    cout << "Hello world!" << "\n" << endl;

    string characterName = "Tom";
    int characterAge;
    characterAge=69;

    cout << "there once was a man named " << characterName << endl;
    cout << "he was " << characterAge << " years old" << endl;

    characterName = "Mike";

    cout << "he liked the name " << characterName << endl;
    cout << "but did not like being " << characterAge << "\n" << endl;

    char grade = 'A';
    string phrase = "Giraffe Academy";
    double gpa = 2.3;
    bool isMale = true;

    cout << phrase.length() << endl;
    phrase[0] = 'B';
    cout << phrase << endl;
    cout << phrase.find("Academy", 0) << endl;
    string phrasesub;
    phrasesub = phrase.substr(8, 3);
    cout << phrase << "\n" << endl;

    return 0;
}
