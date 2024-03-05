//two conditions
//x = 9, y = 11
//x = 11, y = 9

//a
if (x < 10)  
    if (y > 10)  
        puts("*****"); //prints in first, doesnt in second 
else  
    puts("#####");  //prints in second, doesnt in first
puts("$$$$$"); //both print

//first output
*****
$$$$$
//second output
#####
$$$$$

//b
if (x < 10) {  //check passed in first, not second
    if (y > 10)  //check passed in first, not second
        puts("*****");  //first prints this
}  
else {  //only second hits this line
    puts("#####");  
    puts("$$$$$"); 
}

//first output
*****
//second output
#####
$$$$$