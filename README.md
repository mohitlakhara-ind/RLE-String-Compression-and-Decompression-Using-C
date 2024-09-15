# RLE Compression and Decompression

## Overview
This project provides a basic implementation of Run-Length Encoding (RLE) for compressing and decompressing strings in C. RLE is a simple form of data compression where consecutive repeating characters are replaced with the character followed by its count. This repository includes both compression and decompression functionalities.

## Features
- **Compression**: Reduces sequences of repeating characters to a character followed by its count.
- **Decompression**: Expands the compressed string back into its original form.
- **Example Usage**: Provides a demonstration with sample data.

## Getting Started

### Prerequisites
- A C compiler (e.g., GCC).

### Installation
1. **Clone the repository:**
   ```sh
   git clone https://github.com/mohitlakhara-ind/rle-compression-decompression.git
   ```

2. **Navigate into the project directory:**
   ```sh
   cd rle-compression-decompression
   ```

### Compilation
Compile the program using GCC:
```sh
gcc -o rle rle.c
```

### Usage
Run the compiled program:
```sh
./rle
```
This will display:
- The original data.
- The compressed data.
- The decompressed data.

### Example Output
```
Original Data: AAAABBBCCDAA
Compressed Data: A4B3C2D1A2
Decompressed Data: AAAABBBCCDAA
```

## Contributing
Contributions are welcome! If you would like to improve the project or fix any issues, please follow these steps:
1. **Fork the repository.**
2. **Create a new branch** for your feature or fix.
3. **Commit your changes** and push to your fork.
4. **Open a pull request** with a description of your changes.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Credits
- **Author**: Mohit Lakhara
- **Address**: 21/634 CHB Jodhpur, Jodhpur, Rajasthan, 344001
- **Email**: [mohitlakhara78@gmail.com](mailto:mohitlakhara78@gmail.com)
- **GitHub**: [https://github.com/mohitlakhara-ind](https://github.com/mohitlakhara-ind)
- **LinkedIn**: [https://www.linkedin.com/in/mohit-lakhara/](https://www.linkedin.com/in/mohit-lakhara/)

## Acknowledgments
- Special thanks to the open-source community and educational resources that have supported and inspired this project.
```

### Explanation
- **Overview**: Brief description of the project.
- **Features**: Key functionalities provided by the project.
- **Getting Started**: Instructions for setting up and running the project.
- **Example Output**: Sample output to illustrate how the program works.
- **Contributing**: Guidelines for contributing to the project.
- **License**: Licensing information.
- **Credits**: Author and contact information.
- **Acknowledgments**: Thanks to the community and resources.
