//Core.cpp

#include "Core.h"
#include "grade.h"
#include "read_hw.cpp"
using namespace std;

istream& read_hw(istream& in, vector<double>& hw);

string Core::getName() const { return name; }
double Core::grade() const {
	return ::grade(midterm, final, homework);
}
istream& Core::read_common(istream& in) {
	//학생 이름과 시험 점수를 입력받아 저장
	in >> name >> midterm >> final;
}
istream& Core::read(istream& in) {
	read_common(in); //Student_info.h에 있다.
	return in;
}
bool compare(const Core& c1, const Core& c2) {
	return c1.getName() < c2.getName();
}

bool compare_gradees(const Core& c1, const Core& c2) {
	return c1.grade() < c2.grade(); //가상 함수 사용해야 된다.
}