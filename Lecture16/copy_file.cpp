#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <algorithm>

int main (int argc, char * argv[]) {
	
	if (argc != 3) {
		std::cerr << "Incorrect number of inputs" << std::endl;
		return 1;
	}

	/* Create std::string for the two file names */
	std::string input_file_name (argv[1]);
	std::string output_file_name (argv[2]);

	/* Create input and output streams */
	std::ifstream input_file (input_file_name.c_str());
	std::ofstream output_file (output_file_name.c_str());

	/* Tell the input file to NOT skip whitespace */
	input_file >> std::noskipws;

	/* Input stream and output stream iterator */
	std::istream_iterator<char> input_stream_iter (input_file);
	std::ostream_iterator<char> output_stream_iter (output_file);

	copy (input_stream_iter, std::istream_iterator<char>(), output_stream_iter);

	std::cout << "copied input file: " 
		<< input_file_name << " to output file: " 
		<< output_file_name << std::endl;

	return 0;
}
