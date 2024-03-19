def maximumHappinessSum(happiness, k):
    happiness.sort()
    iter = 0
    sum = 0
    for i in range(len(happiness)-1, len(happiness)-k-1, -1):
        x = 0;
        if happiness[i] - iter >= 0:
            x = happiness[i]-iter
        else :
            x = happiness[i]
        sum += x
        iter += 1
    return sum


happiness = [12,1,42]
k = 2

c = maximumHappinessSum(happiness,k)
print(c)
    