#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> // o programa usa classe de strig padrao C++
using std::string;
using std::getline;

// Definir Classe GradeBook

class GradeBook
{
public:
    //funçao que configura o ome do curso
    void setCourseName(string name){
        courseName = name; //armazena o nome do curso no objeto
    }
    // funçao que pega o nome do curso
    string getCourseName(){
        return courseName;//  retorna o objeto
    }
    void displayMessage(){
        cout <<"Welcome to the grade book for\n" << getCourseName()<< "!"<< endl;

    }
    private:
    string courseName;
};
int main(){
        string NameOfCourse;//Strings de caracteres para armazenar o nome de curso
        GradeBook myGradeBook;// criar um objeto GradeBook chamado myGradeBook

        cout << "Initial course name is: " << endl;
        getline(cin, NameOfCourse);
        myGradeBook.setCourseName(NameOfCourse);//gera saida de uma linnha em branco



        // chama a função displayMessage de myGradeBook
        // e passa nameOfCourse como um argumento
        cout <<endl ;
        myGradeBook.displayMessage();
        return 0;
    }//fim do programa principal

