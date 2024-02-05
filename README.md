# M1OEP-jrdonova

Jack Donovan

This project represents a bolt hole pattern calculator. In engineering, oftentimes there exists holes (meant for bolts)
arranged in a pattern of a part. Common patterns include circles, squares, and hexagons. This calculator returns the cartesian coordinates of the holes in the pattern, which would be helpful for the manufacturer. 
The inputs are the number of holes (if it's a circle), the size, and various rotational and translational offsets. 

main.cpp has three functions, which reads in what pattern a user wants, reads in the users parameters, and prints the coordinates of the holes. 
The main function in main calls the relvent calculator functions based on what the user wanted. 

While I did attempt to implement the enums, I had issues with there being compiler errors if the enum type was private (even though I had getters and setters), and even if they were public Clion got mad at me if they 
weren't static, which isn't great when you're trying to modify them. I left them commented it out to prevent compiler errors. 

I did implement the overloaded operators, which in main I used to compare the users pattern to a square pattern. 

I also pass selection and the vectors into  the functions by reference. 

Unfortunetely I could not get my input validation to work in my applied project (well just my ints and floats) so unfortunately that was omitted here too. 

A future direction would be to add enums, input validation, and other machining/engineering related calculators to this. 

What do I deserve on this? Well not much since I didn't listen to Lisa and left it to the last minute, leaving out enums and input validation. Not to mention the likely bugs you will encounter. 