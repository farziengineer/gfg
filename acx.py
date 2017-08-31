number_of_balls,probab = map(float,raw_input().split())
answer = 0

i=2
number_of_balls = int(number_of_balls)
while(i<=number_of_balls):
	j=1
	while(j<=number_of_balls):
		if float((j*(j-1)))/float((i*(i-1)))==probab:
			answer+=1
		j+=1
	i+=1

print answer