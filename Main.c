#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ==============================
// Function Prototypes
// ==============================
void rle_compress(const char *input, char *output);
void rle_decompress(const char *input, char *output);

// ==============================
// Function Definitions
// ==============================

// Function to compress data using RLE
void rle_compress(const char *input, char *output) {
	int length = strlen(input);
	int j = 0;

	for (int i = 0; i < length; i++) {
		// Count occurrences of the current character
		int count = 1;
		while (i < length - 1 && input[i] == input[i + 1]) {
			count++;
			i++;
		}
		// Store the character and its count in the output
		output[j++] = input[i];
		output[j++] = count + '0'; // Convert count to character
	}
	output[j] = '\0'; // Null-terminate the compressed string
}

// Function to decompress data using RLE
void rle_decompress(const char *input, char *output) {
	int length = strlen(input);
	int j = 0;

	for (int i = 0; i < length; i += 2) {
		char ch = input[i];
		int count = input[i + 1] - '0'; // Convert character to integer
		for (int k = 0; k < count; k++) {
			output[j++] = ch;
		}
	}
	output[j] = '\0'; // Null-terminate the decompressed string
}

// ==============================
// Main Function
// ==============================
int main() {
	// Example data
	const char *original_data = "AAAABBBCCDAABBBBBBBDDDCCCAAA";
	char compressed_data[100];
	char decompressed_data[100];

	printf("Original Data: %s\n", original_data);

	// Compress
	rle_compress(original_data, compressed_data);
	printf("Compressed Data: %s\n", compressed_data);

	// Decompress
	rle_decompress(compressed_data, decompressed_data);
	printf("Decompressed Data: %s\n", decompressed_data);

	return 0;
}

// ==============================
// Credits
// ==============================
// Author: Mohit Lakhara
// Email: mohitlakhara78@gmail.com
// GitHub: https://github.com/mohitlakhara-ind
// LinkedIn: https://www.linkedin.com/in/mohit-lakhara/
// Description: This program demonstrates a basic implementation of Run-Length Encoding (RLE)
// for compressing and decompressing strings. The compression algorithm reduces consecutive
// repeating characters into a character followed by its count. The decompression algorithm
// reconstructs the original string from the compressed format.
// Date: September 2024
