To solve the Secret Entrance puzzle. I broke it down into three main parts.

First, I had to be able to read in a line and determine if I was going to be moving right or left. 
This was easily done by checking the first character of the line to see if it was a 'R' or 'L'.

Second, after determining whether to add or subtract depending on the 'R' or 'L', I needed to convert the string of numbers to an int.
This is where I learned a handy trick from Google. I didn't know that I could subtract a '0' char from a number char to convert it to an int. 
That made it easy for me to convert my remaining string into an int to know how many increments to go.

Third, I used some for loops to count up or down and every zero crossing it incremented my zero crossing count flag.

After all of the computation, my answer was printed out to the console. 