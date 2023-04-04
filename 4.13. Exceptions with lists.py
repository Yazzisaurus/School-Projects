names = ['Ryley', 'Edan', 'Reagan', 'Henry', 'Caius', 'Jane', 'Guto', 'Sonya', 'Tyrese', 'Johnny']

listindex=int(input())
try:
    print("Name: " +names[listindex])
except:
    if listindex>=len(names):
        print("Exception! list index out of range")
        print("The closest name is: "+names[-1])
    else:
        print("Exception! list index out of range")
        print("The closest name is: "+names[0])