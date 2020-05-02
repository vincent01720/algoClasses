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

book = SimpleGradeBook()
book.add_student('Isaac Newton')
book.add_student('Vincent Yim')
book.report_grade('Isaac Newton', 90)
book.report_grade('Isaac Newton', 85.5)
book.report_grade('Vincent Yim', 79)
print('Isaac\'s grade is ' + str(book.average_grade('Isaac Newton')))
print('Vincent\'s grade is ' + str(book.average_grade('Vincent Yim')))