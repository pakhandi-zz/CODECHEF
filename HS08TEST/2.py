n, bal = [float(i) for i in input().split()]
left_bal=0.0
if n%5!=0 or (n+0.5>bal) : left_bal=bal
else:	left_bal=bal-n-0.5
print("%.2f" % left_bal) 