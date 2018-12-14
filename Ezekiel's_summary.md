Ezekiel Pierson
12/13/2018
# Final Project Reflection
	I was extremely happy to use a fairly elegant object oriented design for my project. The classes I designed distinct responsibilities that both composed together elegantly while also being subclasses of the same abstract base class. I feel like the design worked well in practice since it was so straightforward to use. I also took advantage of concepts like pointers, vectors, and operator overloading, and (of course) file IO in my final version of the project. I feel much more comfortable with both classes and vectors, compared to when I began this project. I have a better understanding of how classes work (especially abstract base classes) than I did before I started the project. 
	One of the thing I learned outside of class is how to use cmake. I was frustrated with the limitations of the build system we’ve been using this semester, (primarily because I wanted to use the clang compiler and because I couldn’t put header files into a separate directory) so I decided to experiment with cmake, which is a popular way to structure projects. While there are still a few limitations particularly around editing resource files and adding new source files I was able to successfully setup cmake for my project.
	During the actual implementation of my project I was most surprised by the difficulty in building a robust parser. Going in, I knew this would be difficult but I hoped to build an implementation capable of meeting my expectations. While I’m proud of the implementation I came up with it was not a simple implementation and took some time to implement it also possesses limits that would require me to completely start over with my parser design. I would do this by using JSON and a JSON parsing library instead of my own simple parser, this would allow for the complexity I need to make a more complex game. Of course this would be the starting point for version 2 of my project.
    