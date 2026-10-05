AI was not used in the completion of this assignment.

I missed a few semicolons, which I fixed, and I missed the namespace "std" before "cout", which led to the following error:
main.cpp:16:91: error: ‘endl’ was not declared in this scope; did you mean ‘std::endl’?
   16 |     std::cout<<"Level 1 time: "<<level_one_hours<<"h "<<level_one_remaining_minutes<<"m"<<endl;
      |                                                                                           ^~~~
      |                                                                                           std::endl
To check my work, I ran the program with 78 and 144 as the initial declarations.
I now know that I need to remember to specify the namespace, and I need to practice putting semicolons at the end of lines.
