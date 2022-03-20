# Write your code here
N, T = [int(x) for x in input().split()]

ledger = {}

for i in range(N):
    name, amount = input().split()
    ledger[name] = int(amount)


for i in range(T):
    sender, receiver, amount = input().split()
    amount = int(amount)
    
    # sender has enough money
    if ledger[sender] >= amount:
        ledger[sender] -= amount
        ledger[receiver] += amount

    # sender doesn't have enough money
    # reject

# sort dictionary by value
for i in sorted(ledger.keys()):
    print(i, ledger[i])