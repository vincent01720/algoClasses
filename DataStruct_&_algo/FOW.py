
VOWEL_COST = 250
LETTERS = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
VOWELS = 'AEIOU'

# Write the WOFPlayer class definition (part A) here
class WOFPlayer():
    prizeMoney = 0
    prizes = []
    def __init__(self, name):
        self.name = name
    
    def addMoney(self,amt):
        self.prizeMoney = self.prizeMoney + amt
        
    def goBankrupt(self):
        self.prizeMoney = 0
        
    def addPrize(self,prize):
        self.prizes.append(prize)
    
    def __str__(self):
        return "{} (${})".format(self.name,self.prizeMoney)
# Write the WOFHumanPlayer class definition (part B) here

# Write the WOFComputerPlayer class definition (part C) here


