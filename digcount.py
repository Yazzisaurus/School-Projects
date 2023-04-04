def digit_count(num):
    digit_count = 0
    if num == 0:
        digit_count = digit_count + 1
    else:
        while(num > 0):
            num = num // 10
            digit_count = digit_count + 1
        #return digit_count
    
    return digit_count


if __name__ == '__main__':
    print("Put an input dummy of some number")
    num = int(input())
    digit = digit_count(num)
    print(digit)