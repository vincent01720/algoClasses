
# Create a function that removes all the special characters
# from a string
punctuation_chars = ["'", '"', ",", ".", "!", ":", ";", '#', '@']
def strip_punctuation(str1):
    for item in punctuation_chars:
        str1 = str1.replace(item,'')
    return str1

# Create a list of positive words to use
# and a function that counts alll the positive words
positive_words = []
with open("positive_words.txt") as pos_f:
    for lin in pos_f:
        if lin[0] != ';' and lin[0] != '\n':
            positive_words.append(lin.strip())
def get_pos(str1):
    str1 = str1.lower() #Lower case
    cleaned_str1_lst = strip_punctuation(str1).split()
    total_count = 0
    for item in cleaned_str1_lst:
        if item in positive_words:
            total_count += 1
    return total_count

# Create a list of negative words to use
# and a function that counts alll the negative words
negative_words = []
with open("negative_words.txt") as pos_f:
    for lin in pos_f:
        if lin[0] != ';' and lin[0] != '\n':
            negative_words.append(lin.strip())
def get_neg(str1):
    str1 = str1.lower() #Lower case
    cleaned_str1_lst = strip_punctuation(str1).split()
    total_count = 0
    for item in cleaned_str1_lst:
        if item in negative_words:
            total_count += 1
    return total_count

file_obj = open('project_twitter_data.csv','r')
lines = file_obj.readlines()
print('---------------------------------------------------')
print('Number of Retweets, Number of Replies, Positive Score, Negative Score, Net Score\n')
file_w = open('resulting_data.csv','w')
file_w.write('Number of Retweets, Number of Replies, Positive Score, Negative Score, Net Score\n')
# first line is the header text: text, n_retweet, n_reply
file_read_headers = lines[0]
file_w_headers = ['Number of Retweets', 'Number of Replies', 'Positive Score', 'Negative Score', 'Net Score']             
for line in lines[1:]:
    #print(type(line.strip()))
    n_pos = get_pos(line.split(',')[0]) # first element is text
    n_neg = get_neg(line.split(',')[0])
    count_retweets = line.strip().split(',')[1]
    count_replies = line.strip().split(',')[2]
    net_score = n_pos - n_neg
    print("{},{},{},{},{}".format(count_retweets, count_replies, n_pos, n_neg, net_score))
    file_w.write("{},{},{},{},{}".format(count_retweets, count_replies, n_pos, n_neg, net_score))
    file_w.write('\n')
print('---------------------------------------------------')

file_w.close()
file_obj.close()


Number of Retweets, Number of Replies, Positive Score, Negative Score, Net Score

3,0,0,0,0
1,0,2,2,0
1,2,1,0,1
3,1,1,0,1
6,0,2,0,2
9,5,2,0,2
19,0,2,0,2
0,0,0,3,-3
0,0,0,2,-2
82,2,4,0,4
0,0,0,1,-1
0,0,1,0,1
47,0,2,0,2
2,1,1,0,1
0,2,1,0,1
0,0,2,1,1
4,6,3,0,3
19,0,3,1,2
0,0,1,1,0