// #include <iostream>
// #include <cstring>

// void AddStudent(int* numberOfStudents, char*** namesList, int** yearsList, const char* name, int year) {
//     // Increment the number of students
//     (*numberOfStudents)++;

//     // Allocate memory for the new student data
//     char** newNamesList = new char*[*numberOfStudents];
//     int* newYearsList = new int[*numberOfStudents];

//     // Copy existing data (if any) to the new arrays
//     for (int i = 0; i < *numberOfStudents - 1; i++) {
//         newNamesList[i] = new char[strlen((*namesList)[i]) + 1];
//         strcpy(newNamesList[i], (*namesList)[i]);
//         newYearsList[i] = (*yearsList)[i];
//     }

//     // Copy the new student data to the end
//     newNamesList[*numberOfStudents - 1] = new char[strlen(name) + 1];
//     strcpy(newNamesList[*numberOfStudents - 1], name);
//     newYearsList[*numberOfStudents - 1] = year;

//     // Deallocate the old memory
//     if (*numberOfStudents > 1) {
//         for (int i = 0; i < *numberOfStudents - 1; i++) {
//             delete[] (*namesList)[i];
//         }
//         delete[] *namesList;
//         delete[] *yearsList;
//     }

//     // Update the pointers
//     *namesList = newNamesList;
//     *yearsList = newYearsList;
// }

// void CatStrings(int numberOfStudents, const char** stringList) {
//     for (int i = 0; i < numberOfStudents; i++) {
//         std::cout << stringList[i] << std::endl;
//     }
// }

// void CatYears(int numberOfStudents, const int* intList) {
//     for (int i = 0; i < numberOfStudents; i++) {
//         std::cout << intList[i] << std::endl;
//     }
// }

// void ClearList(int numberOfStudents, char*** stringList, int** intList) {
//     for (int i = 0; i < numberOfStudents; i++) {
//         delete[] (*stringList)[i];
//     }
//     delete[] *stringList;
//     delete[] *intList;

//     // Set the pointers to NULL
//     *stringList = nullptr;
//     *intList = nullptr;
// }
