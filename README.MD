# Middle Finger Console Application

## **Goal:**

- Having fun
- ~~Filling the void in my life~~ :)

## **Preview:**



## **Bugs:**

##### A little bit glitchy

## **BUILD:**

- *Batch script file*:
        
    ##### My personal *windows* compile and run batch script file.
    ##### To run just Double click on it.

- *Make tool:*
    - Overview on MakeTool {[article source](https://www.cs.oberlin.edu/~kuperman/help/make.html)}

        `make` is a Unix tool that simplifies building programs when they are composed from many files, or building many programs simultaneously. It is able to determine when source files have changed and rebuild only those components needed for an update. 

        - Using Make
            
            1. `Create a Makefile`:When you download many open source programs, this is already done for you. Inside this file is a list of dependencies and rules for how to build the software. If you add in additional source files or programs, you may need to update this to keep it up to date.
            
            2. `Edit source files`

            3. `Run make`: All you need to do is run the program from the command line without any arguments.
               ```Makefile
               % make
               ``` 
                You can also specify a "target" or make use of multiple processors
                ```Makefile
                # compile a specific target

                % make target_name

                # clean up things (rule needs to be in the Makefile)

                % make clean

                # use multiple processors (in this case 3)

                % make -j 3
                ```
        - Writing a Makefile

            While it may seem that Makefiles are a bit arcane, they can be readily understood with just a little bit of information. 

            - Lines beginning with a hash mark (#) are comments and are ignored until the end of that line.
            - Variables are in ALL_CAPS followed by an = sign. They usually come at the top of the file.
            - Use variables later in this format: $(VAR_NAME) or ${VAR_NAME}. The surrounding parens/braces are required.
            - The general layout of a rule is as follows: 

                ```Makefile
                    # comments if desired
                    target:  dependency1 dependency2...
                        <tab> command
                ```
                - __target__ is what you are trying to build. This might be the name of an executable, and object file, or a class file.
                - __dependency1__ and so forth are the things that are used to build the target. If they change, then it will rebuild it.
                - __\<tab\>__ is an actual tab character. If your editor changes these to spaces, then it will not work!
                - __command__ is the instructions to be done. You can have multiple lines of these, but they all must be indented with a tab.
        - Sample Makefiles

            Here is a simple makefile to build a C program.
            ```Makefile
                # build a program from 2 files and one shared header
                CC = gcc
                CFLAGS = -g

                program: source1.c source2.c
                    $(CC) $(CFLAGS) -o program source1.c source2.c 
            ```
            This is OK for a small program, but you can only recompile the parts that have changed with just a few changes. 
            ```Makefile                                         
                # build a program from 2 files and one shared header
                CC = gcc
                CFLAGS = -g

                source1.o: source1.c
                    $(CC) $(CFLAGS) -c source1.c

                source2.o: source2.c
                    $(CC) $(CFLAGS) -c source2.c

                program: source1.o source2.o
                    $(CC) $(CFLAGS) -o program source1.o source2.o  
            ```




## **Portability:**

Preprocessors add the portable functionality to th code to support 
*Linux* , *Windows* and *MacOS*

```c
    #ifdef OS_WIN
        Sleep(1000);
        system("cls");
    #elif OS_LINUX
        //LINUX STUFF
    #elif OS_APPLE
        //APPLE STUFF
    #endif

```
## **TEST:**
### Tested on :
- Windows
- ~~Linux~~
- ~~MacOs~~


