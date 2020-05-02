import collections
Grade = collections.namedtuple('Grade', ('score', 'weight'))
class SimpleGradeBook(object):
    def __init__(self):
        self._grades = {}
    
    def add_student(self, name):
        self._grades[name] = []

    def report_grade(self, name, score):
        self._grades[name].append(score)

    def average_grade(self, name):
        grades = self._grades[name]
        return sum(grades)/len(grades)



class BySubjectGradebook(object):
    def __init__(self):
        self._grades = {}

    def add_student(self, name):
        self._grades[name] = {}

    def report_grade(self, name, subject, grade):
        by_subject = self._grades[name]
        grade_list = by_subject.setdefault(subject, [])
        grade_list.append(grade)

    def average_grade(self, name):
        by_subject = self._grades[name]
        total, count = 0, 0
        for grades in by_subject.values():
            total += sum(grades)
            count += len(grades)
        return total/count

# class WeightedGradebook(object):
#     def report_grade(self, name, subject, score, weight):
#         by_subject = self._grades[name]
#         grade_list = by_subject.setdefault(subject,[])

class Subjet(object):
    def __init__(self):
        self._grades = []
    
    def report_grade(self, score, weight):
        self._grades.append(Grade(score,weight))

    def average_grade(self):
        total, total_weight = 0, 0
        for grade in self._grades:
            total += grade.score*grade.weight
            total_weight += grade.weight
        return total/total_weight


# book = SimpleGradeBook()
# book.add_student('Isaac Newton')
# book.add_student('Vincent Yim')
# book.report_grade('Isaac Newton', 90)
# book.report_grade('Isaac Newton', 85.5)
# print('Isaacs grade is ' + str(book.average_grade('Isaac Newton')))

