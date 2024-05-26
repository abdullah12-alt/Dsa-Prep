#include <iostream>
using namespace std;

class Student{
    public:
    int rollNumber;
    string name;
    string qualification;
    float percentage;
    Student* next;

    Student(int r, string n, string q, float p){
        this->rollNumber = r;
        this->name = n;
        this->qualification = q;
        this->percentage = p;
        this->next = NULL;
    }
};

class List{
    Student* head;
    public:
    List(){
        head = NULL;
    }

    void insertStudents(int roll_num, string name, string qual, float per){
        Student* new_stu = new Student(roll_num, name, qual, per);
        if(head == NULL){
            head = new_stu;
            return;
        }

        else{
            Student* temp = head;
            while(temp->next != NULL){
                temp=temp->next;
            }
            temp->next = new_stu;
        }
    }

    void displayList(){
        if(head == NULL){
            cout << "Data not found" <<endl;
            return;
        }
        Student* temp = head;
        while(temp!=NULL){
            cout << "Student Roll Number: " << temp->rollNumber << endl;
            cout << "Student Name: " << temp->name << endl;
            cout << "Student Qualification: " << temp->qualification << endl;
            cout << "Student Percentage: " << temp->percentage << "%" << endl;
            cout << endl;

            temp=temp->next;
        }
        cout << "\t****" << endl;
    }

    void deleteStudent(int rn){
        if(head == NULL){
            cout << "There is no Student to delete" << endl;
            return;
        }
        else{
            Student* temp = head;
            while(temp->next != NULL && temp->next->rollNumber != rn){
                temp = temp->next;
        }
        Student* toDel = temp->next;
        temp->next = temp->next->next;
        delete(toDel);
    }
    }

    void updateStudent(int rn, string name, string qual, float per){
        Student* temp = head;
            while(temp->next != NULL &&temp->rollNumber != rn){
                temp=temp->next;
                if(temp->next == NULL){
                    cout << "The student doesnot exist" << endl;
                    return;
                }
            }
            temp->rollNumber = rn;
            temp->name = name;
            temp->qualification = qual;
            temp->percentage = per;
    }
};

int main(){

    List l;
    // l.insertStudents(10, "Zawar Ahmad Khan", "BSCS", 90.7);
    // l.insertStudents(20, "Mustafa Butt", "BSSE", 93.5);
    // l.insertStudents(30, "Imtiaz Ahmad", "BSIT", 92.3);

    // l.updateStudent(30, "Abdullah Hassan", "BSDL", 99.99);
    // l.deleteStudent(20);

    // l.displayList();

    int choice;

    do{
    cout << "\tWelcome to Student Managment System.\n" << endl;
    cout << "**************\n";
    cout << "1. Add Student" <<endl;
    cout << "2. Update Student" <<endl;
    cout << "3. Delete Student" <<endl;
    cout << "4. Display Student data" <<endl;
    cout << "5. Exit\n" <<endl;
    cout << "Enter your choice" <<endl;
    cin >> choice;

    if(choice == 1){
        int rn;
        cout << "Enter the roll number of the student" << endl;
        cin>> rn;
        string n;
        cout << "Enter the name of the student" << endl;
        cin>> n;
        string q;
        cout << "Enter the qualification of the student" << endl;
        cin>> q;
        float p;
        cout << "Enter the percentage of the student" << endl;
        cin>> p;

        l.insertStudents(rn, n, q, p);
    }
    else if(choice == 2){
        int rn;
        cout << "Enter the roll number of the student where you want to update the data" << endl;
        cin>> rn;
        string n;
        cout << "Enter the name of the student" << endl;
        cin>> n;
        string q;
        cout << "Enter the qualification of the student" << endl;
        cin>> q;
        float p;
        cout << "Enter the percentage of the student" << endl;
        cin>> p;

        l.updateStudent(rn, n, q, p);
    }
    else if(choice == 3){
        int rollNumber;
        cout << "Enter the Roll Number of the student you want to delete the record of." <<endl;
        cin >> rollNumber;

        l.deleteStudent(rollNumber);
    }
    else if(choice == 4){
        l.displayList();
    }
    }

    while(choice != 5);
    
    return 0;
}
