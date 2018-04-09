
# Lab 08 - part 2
---
Edits and Commentary by Boubacar 

Original Code by Shariar

All the necessary code is in <code>indent.cpp</code>, <code>unindent.cpp</code> was not needed at all, since the code in there was written in <code>indent.cpp</code> anyway. 

The main change was making the <code>Makefile</code> correctly compile and run the project. <code>indent.cpp</code> is now compiled in the main target (but the executable is named *main* to conform to general standard of labs). Also removed an unnecessary target from main, and changed other targets to match this change (.o files, clean). 

The code itself was very readable and clean, and only some redundancies were noted and taken out. 
(An unnecessary function <code> string unindent_code(string line) </code> that only returned output from another function, an if statement that was longer than necessary). 

His methods of completing the tasks were ways I had not thought of and helped me think of them with a different view.
By implementing a single counter for both '{' and '}' the way he did, he was able to account for lines that begin with '}' without having to add an entire if statement.
