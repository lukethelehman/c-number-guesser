# c-number-guesser
program to practice C for CS-121

*algorithm*
~~~ 
create int for correct
create int for guess
create int for turn init to 0
create boolean keepGoing
creat char[] for name 


ask for the user's name, put it in name 
greet user with name 

generate a random number from 1-100, put in correct 

while keepGoing is true 
increment number of turns 
ask user for guess, put in guess
if guess < correct:
	print "too low" 
if guess > correct:
	print "too high"
if guess is correct:
	print "Right!"
	set keepGoing to false 

evaluate user's performance
if turns < 7:
	print "Great!"
if turns == 7:
	print "Good"
if turns > 7:
	print "You should be able to do it in 7 turns"
~~~
