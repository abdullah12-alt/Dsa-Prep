class Student:
    def __init__(self, roll_no, name, qualification, percentage):
        self.roll_no = roll_no
        self.name = name
        self.qualification = qualification
        self.percentage = percentage
        self.next = None


class Sms:
    def __init__(self):
        self.head = None
        
    def addStudent(self, r, n, q, p):
        new_student = Student(r, n, q, p)
        new_student.next = self.head
        self.head = new_student
        print("Student added successfully.")
    
    def delStudent(self, roll_no):
        if self.head is None:
            print(f"Student with Roll Number {roll_no} not found.")
            return
        
        if self.head.roll_no == roll_no:
            self.head = self.head.next
            print(f"Student with Roll Number {roll_no} deleted successfully.")
            return
        
        prev = None
        current = self.head
        while current and current.roll_no != roll_no:
            prev = current
            current = current.next
        
        if current is None:
            print(f"Student with Roll Number {roll_no} not found.")
            return
        
        prev.next = current.next
        print(f"Student with Roll Number {roll_no} deleted successfully.")

    def updateStudent(self, roll_no, r, n, q, p):
        current = self.head
        while current and current.roll_no != roll_no:
            current = current.next
        if current is None:
            print("Student not found.")
            return
        current.roll_no = r
        current.name = n
        current.qualification = q
        current.percentage = p
        print("Student details updated successfully.")
 
    def display(self):
        current = self.head
        if current is None:
            print("No students to display.")
            return
        print("############# Student Details #############")
        while current is not None:
            print("########################")
            print("Name:", current.name)
            print("Roll No:", current.roll_no)
            print("Qualification:", current.qualification)
            print("Percentage:", current.percentage)
            print("########################")
            current = current.next

# Main function
if __name__ == "__main__":
    s1 = Sms()
    while True:
        print("\n########################## Student Management System ##########################\n\n")
        print("Enter Your Choices Please :- ")
        print("1. Add Student.")
        print("2. Update Student Detail.")
        print("3. Delete Student.")
        print("4. Display Student Details.")
        print("5. Quit.")
        
        choice = int(input("Enter Your choice : "))
        if choice == 1:
            r = int(input('Enter the roll of the student : '))
            n = input('Enter the name of the student: ')
            q = input('Enter the qualification of the student: ')
            p = float(input('Enter the percentage of the student: '))
            s1.addStudent(r, n, q, p)
        elif choice == 2:
            roll_no = int(input('Enter the roll of the student : '))
            r = int(input('Enter the New roll of the student : '))
            n = input('Enter the New name of the student: ')
            q = input('Enter the New qualification of the student: ')
            p = float(input('Enter the New percentage of the student: '))
            s1.updateStudent(roll_no, r, n, q, p)
        elif choice == 3:
            roll_no = int(input('Enter the Roll No of the student for Deletion : '))
            s1.delStudent(roll_no)
        elif choice == 4:
            s1.display()
        elif choice == 5:
            print("Exiting the program.")
            break
        else:
            print("Invalid choice. Please enter a number from 1 to 5.")
