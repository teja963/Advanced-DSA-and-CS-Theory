def minion_game(string):
    # your code goes here
    Stuart = 0
    Kevin = 0
    for i in range(len(string)):
        if string[i] in "AEIOU":
            Kevin += len(string) - i
        else:
            Stuart += len(string) - i
        
    if Kevin > Stuart:
        print("Kevin", Kevin)
    elif Stuart > Kevin:
        print("Stuart", Stuart)
    else:
        print("Draw")
    

if __name__ == '__main__':
    s = input()
    minion_game(s)
