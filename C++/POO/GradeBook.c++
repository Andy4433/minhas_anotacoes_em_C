#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

// Definir Classe GradeBook

class GradeBook
{
public:
    void displayMessage(string couseName){
        cout <<"Welcome to the grade book for: \n" + couseName + "!";
        cout << endl;
    }
};
int main(){
        string NameOfCourse;//Strings de caracteres para armazenar o nome de curso
        GradeBook myGradeBook;// criar um objeto GradeBook chamado myGradeBook

        cout << "Please enter the course name: " << endl;
        getline(cin, NameOfCourse);
        cout << endl;//gera saida de uma linnha em branco


        // chama a função displayMessage de myGradeBook
        // e passa nameOfCourse como um argumento
        myGradeBook.displayMessage(NameOfCourse);
        return 0;
    }//fim do programa principal


