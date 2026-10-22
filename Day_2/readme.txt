The Gift Shop puzzle was a bit more challenging for me. 

Each puzzle has two parts, the second part is typically slightly harder and builds off of the first. 
I was able to solve the first half relatively fast with a fun mathematical solution, but it did not translate 
well for the second half and I needed to reevaluate my approach. 

My first lesson learned is to think about how I can make my first half solution more robust so that it can easily be 
modified to work for the second half.

My giftshop.cpp was able to read in the ranges that were comma separated. It converted the lower and upper range from 
a string to an int, and then I used a for loop to calculate each number in the range.
With the length of the number known I was able to come up with a trick to modulo the last half of the digits and divide
to get the first half of the digits. Then I directly compared them to each other to see if they were the same. If they were 
then that was a pattern match and the number was added to my count. 

I enjoyed coding that solution. I thought it was a fun way to use math to get the first and last half. I did have to use 
larger data types to contain some of the large values in the range.

The second half of the puzzle included smaller puzzles that weren't just repetions in the middle of the number.
Because my first solution depended on the pattern repeated in the middle of the number string it did not work at all for this.
I had to do some research to find an effective way to find a pattern using the string library. I found that if I concatenated
the string with itself and then used find it would return the position of where the repetion was. Using an if statement to 
check that the repetion was found before the second half of the string ensured that there was a repeating pattern.

