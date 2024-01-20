def main():
    t = int(input())
    while t > 0:
        n = int(input())
        f = int(input())
        a = int(input())
        b = int(input())
        moments = [0]
        for i in range(n):
            top = len(moments) - 1
            m = int(input())
            moments.append(m)
            if a * (m - moments[top]) > b:
                f = f - b
            else:
                f = f - (a * (m - moments[top]))
            if f <= 0:
                print("NO")
                break
        if f > 0:
            print("YES")
        t -= 1

if __name__ == "__main__":
    main()

