

/*

Title: Advanced Object Hierarchy Construction

Problem Statement:

You are designing a University Management System where the system needs to handle information about students, courses, and departments. The relationships between these entities are as follows:

Student belongs to exactly one department and can enroll in multiple courses.
Course is offered by a department and has a list of enrolled students.
Department manages multiple students and offers multiple courses.
Requirements:
You need to design the following classes using proper constructors and relationships:

1. Class Student
Private Members:
string name (name of the student)
int rollNumber (unique roll number for the student)
string departmentName (name of the department the student belongs to)
vector<string> enrolledCourses (list of course names the student is enrolled in)
Constructors:
A parameterized constructor to initialize name, rollNumber, and departmentName.
Member Functions:
enrollCourse(string courseName) - Adds a course to the student's list of enrolled courses.
displayStudent() - Displays the student's details, including name, roll number, department, and enrolled courses.
2. Class Course
Private Members:
string courseName (name of the course)
string departmentName (name of the department offering the course)
vector<string> enrolledStudents (list of student names enrolled in the course)
Constructors:
A parameterized constructor to initialize courseName and departmentName.
Member Functions:
addStudent(string studentName) - Adds a student to the course.
displayCourse() - Displays the course details, including name, department, and list of enrolled students.
3. Class Department
Private Members:
string departmentName (name of the department)
vector<Student*> students (list of pointers to Student objects in the department)
vector<Course*> courses (list of pointers to Course objects offered by the department)
Constructors:
A parameterized constructor to initialize departmentName.
Member Functions:
addStudent(Student* student) - Adds a student to the department.
addCourse(Course* course) - Adds a course to the department.
displayDepartment() - Displays department details, including its name, list of students, and courses.
Tasks:
Using the classes described above, perform the following tasks:

Create a Department object named "Computer Science".
Add two Student objects:
"Alice" (Roll: 101) belonging to "Computer Science".
"Bob" (Roll: 102) belonging to "Computer Science".
Add two Course objects:
"Data Structures" offered by "Computer Science".
"Algorithms" offered by "Computer Science".
Enroll "Alice" in "Data Structures" and "Algorithms". Enroll "Bob" in "Algorithms".
Add students to the respective courses.
Display:
Details of the department, including all students and courses.
Details of each course, including enrolled students.
Details of each student, including their enrolled courses.
Constraints:
You must use constructors to initialize all class attributes.
Use dynamic memory allocation for creating Student and Course objects.
Ensure proper cleanup of dynamically allocated memory using destructors.
Sample Input:
No direct input is required. The task involves writing a program that constructs objects and establishes relationships as described above.

Sample Output:
plaintext
Copy code
Department: Computer Science
Students:
  - Name: Alice, Roll: 101, Enrolled Courses: [Data Structures, Algorithms]
  - Name: Bob, Roll: 102, Enrolled Courses: [Algorithms]
Courses:
  - Name: Data Structures, Department: Computer Science, Enrolled Students: [Alice]
  - Name: Algorithms, Department: Computer Science, Enrolled Students: [Alice, Bob]



*/