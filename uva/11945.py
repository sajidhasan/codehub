test_cases = int(input())
monthly_balance = []


for i in range(1,test_cases+1):
    for j in range(12):
        monthly_balance.append(float(input()))
    result = float((format((sum(monthly_balance)/12),' .2f')))
    
    print ('{} ${:,}'.format(i, result))
