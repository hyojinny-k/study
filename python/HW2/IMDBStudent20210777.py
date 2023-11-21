#!/usr/bin/python3
import sys

# inputfile = sys.argv[1]
# outputfile = sys.argv[2]

genre = dict()
with open("movies_exp.txt", "rt") as f1:
    for line in f1:
        genres = line.strip('\n').split('::')
        list = genres[2].split('|')
        for l in list:
            if l not in genre:
                genre[l] = 1
            else:
                genre[l] += 1

with open("uberoutput2.txt", "wt") as f2:
    for k in genre.keys():
        f2.write(k + " " + str(genre[k]) + "\n")

f1.close()
f2.close()