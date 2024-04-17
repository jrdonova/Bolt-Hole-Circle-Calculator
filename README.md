# M1OEP-jrdonova

Jack Donovan

This project represents a bolt hole pattern calculator. In engineering, oftentimes there exists holes (meant for bolts)
arranged in a pattern of a part. Common patterns include circles, squares, and hexagons. This calculator returns the cartesian coordinates of the holes in the pattern, which would be helpful for the manufacturer. 
The inputs are the number of holes (if it's a circle), the size, and various rotational and translational offsets. 

main.cpp has three functions, which reads in what pattern a user wants, reads in the users parameters, and prints the coordinates of the holes. 
The main function in main calls the relvent calculator functions based on what the user wanted. 

I pass selection and the vectors into  the functions by reference. 


A future direction would be to add enums, input validation, and other machining/engineering related calculators to this. 

