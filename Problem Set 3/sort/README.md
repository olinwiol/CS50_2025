### Reasoning behind answers

    sort1 uses: Bubble sort

    How do you know?: Bubble sort repeatedly iterates through the list, comparing adjacent elements and
    swapping them if they are in the wrong order. THis process continues until no swaps are needed, which ends
    int a sorted list. Sorting 50000 sorted numbers took 0.3s while sorting 50000 random numbers took 6.5s
    The significant difference in time is because Bubble sort has an upper bound of O(n²), but its lower
    bound is Ω(n) which means if the algorithm gets lucky it is extremly efficient at sorting
    nearly sorted data, but very inefficent at random data.

    sort2 uses: Merge sort

    How do you know?: Merge sort works by recursively dividing the sorting into smaller sublists until each of the sublists
    are sorted and then merging the sublists into a sorted manner. Sorting 50000 sorted numbers took 0.3s and sorting
    50000 random numbers also took 0.3s. The consistency in time is because of the upper and lower bound
    of the algorithm are the same of (n logn), meaning it performs equally regardless of initial value.

    sort3 uses: Selection sort

    How do you know?: Selection sort iterates through the entire list, selecting the smallest
    number everytime and putting it in its correct position. Sorting a list of 50000 sorted numbers took 2.7s
    and sorting 50000 random numbers took 3.1s which is approximatly the same time which makes this
    sorting method one of the slowest. The upper bound of a Selection sort algorithm is O(n²) and the lower bound
    Ω(n²) which means it takes same time to sort regardless of the state of the list sorted.
