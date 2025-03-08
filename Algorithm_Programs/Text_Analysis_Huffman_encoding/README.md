# Text Analysis Project

## Overview
This project analyzes two text files to determine the three most frequently occurring words. It then computes the **Longest Common Subsequence (LCS)** among them and applies **Huffman encoding** to generate an optimized binary representation.

## Process
The problem is divided into three steps:

1. **Finding the Most Frequent Words:**
   - Read the two text files and extract the three most frequently occurring words that appear in both.

2. **Finding the Longest Common Subsequence (LCS):**
   - Compute the LCS of these three words by considering them in all possible pairwise combinations.

3. **Applying Huffman Encoding:**
   - The LCS obtained in the previous step is encoded using **Huffman coding** to generate an optimized binary string.

## Input
- Two text files (`1.txt`, `2.txt`) containing words to analyze.

## Output
- Three most common words.
- LCS among those words.
- Huffman-encoded binary representation of the LCS.