//Count bits to swap to convert num1 → num2(binary form)

int bitSwapCount(int a, int b) {
    int count = 0;  //variable to count the swaps

    //till the numbbers become 0, start a loop
    while (a > 0 || b > 0) {

        int lastBitA = a % 2;   // get the last bit of a
        int lastBitB = b % 2;   // get the last bit of b

        //if last bit of a and b doesnot matches, increment the count
        if (lastBitA != lastBitB)
            count++;

        //and then remove the  last bit from both to continue  the loop matching
        a = a / 2;  
        b = b / 2;
    }

    return count;
}
