# CS50_2025
My solutions to the problem sets and the project for CS50 2025.

## Problem Set 0 - Starting from Scratch
Choosing my own adventure where the assignment is to
implement a project of my own choosing in Scratch.

I've chosen the project I've named "Save the Dino Babys" where
as the main character 'Petra' you need to save all the Dino Babys
who are falling from the sky.

![image](https://github.com/olinwiol/CS50_2025/blob/main/Problem%20Set%200/Save%20The%20Dino%20Babys/5381feb0fc1b50ddc2793342daddffef.svg?raw=true)

Using different codeblocks with, `loops`, `if` and `while`-statements I could both
complete the project and save the babies.


## Problem Set 1 - Hello, World - Mario - Cash & Credit
The first problem is to familiarize yourself in C by making a simple script printing
the string "hello, world\n" to the console. This was achieved in the `folder` world and
in the file `hello.c`. After this simple task another script is hello is to be made where the user will be asked fo an input. Much like Adeles song [Hello](https://youtu.be/YQHsXMglC9A).

Next part of the set is a problem called **Mario** which consists of creating the classic pyramid in the start of level 1-1 in Super Mario Bros. This pyramid consists of two adjecent halfpyramids made of blocks (example of a pyramid with a block height of 5)

        #  #
       ##  ##
      ###  ###
     ####  ####
    #####  #####

Constructing of this pyramids consists of the users input of a height which transforms into a pyramid of that heigh. The contents of the `mario-less` directory makes an half of the pyramid whilst `mario-more` creates the whole pyramid.

The last problem of the set is creating two different scripts, one for counting the least ammount of coins that a cashier needs to give back as change to a customer and validation of valid credit card numbers.

The change counting was created by using the modulo-operator which is a common tool in most algoritms to calculate the remainder of a division. The credit card validation was med by conditionals checking different credit card patterns and an algorithm called [Luhn's Algorithm](https://en.wikipedia.org/wiki/Luhn_algorithm).

## Problem Set 2 - Scrabble - Readability - Caesar & Substitution
The first problem is to create a light version of the popular board game Scrabble. The goal of the light version is two players input a word and relative to an array with points per letter and score the words accordingly making the player with the highest scoring word win.

The second problem of the set is making a program that calculates a texts reading level grade. This grade gets calculated using the [Coleman-Liau index](https://en.wikipedia.org/wiki/Coleman–Liau_index) grading the text between "Below Grade 1" and "Grade 16+".

    index = 0.0588 * L - 0.296 * S - 15.8

The third problem consists of