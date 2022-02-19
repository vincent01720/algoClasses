import numpy as np

def max_pair(yourList):
    result = 0
    for i in range(len(yourList)):
        for j in range(i+1,len(yourList)):
            if yourList[i]*yourList[j] > result:
                result = yourList[i]*yourList[j]
    print(result)

def max_pair_fast(yourList):
    max_id_1 = 0
    for i in range(len(yourList)):
        if yourList[i] > yourList[max_id_1]:
            max_id_1 = i
    
    max_id_2 = 0
    for j in range(len(yourList)):
        if (yourList[j] > yourList[max_id_2]) & (yourList[j] != yourList[i]):
            max_id_2 = j
    print(max_id_1, " and ", max_id_2, " and ", yourList[max_id_1]*yourList[max_id_2])
    

a = input("Enter a list numbers or elements separated by space: ")
numbers = [int(x) for x in a.split()]
max_pair(numbers)
max_pair_fast(numbers)