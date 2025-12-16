#include <iostream>
#include <vector>
#include <string>
class CGPACalculator
{
private:
    std::vector<double> grades;
    std::vector<int> creditHours;

public:
    void addCourse(double grade, int credits)
    {
        grades.push_back(grade);
        creditHours.push_back(credits);
    }

    double calculateCgp()
    {
        double totalGradePoints = 0.0;
        int totalCreditHouses = 0;
        for (size_t i = 0; i < grades.size(); ++i)
        {
            totalGradePoints += grades[i] * creditHours[i];
            totalCreditHouses += creditHours[i];
        }

        return totalGradePoints / totalCreditHouses;
    };
};

int main()
{
    CGPACalculator calculator;
    calculator.addCourse(3.5, 3);
    calculator.addCourse(4.0, 4);
    calculator.addCourse(3.7, 3);
    double cgpa = calculator.calculateCgp();
    std::cout << "CGPA :" << cgpa << std::endl;
    return 0;
}