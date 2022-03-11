def isPalindrome(x):
    i = 0
    x_str = str(x)
    while i<=len(x_str)//2:
        if x_str[i] == x_str[len(x_str)-1-i]:
            True
        else:
            break
        i += 1
    i = i-1
    if i == len(x_str)//2:
        print('true')
    else:
        print('false')
    
isPalindrome(-121)