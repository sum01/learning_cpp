#include <iostream>
// For reading/writing files
// Alternatively, <ifstream> for input only
// and <ofstream> for output only
#include <fstream>
#include <string>

int main() {
	// The fstream class can be used to read and write
	std::fstream file;
	// If no "test.txt" is found in the current dir, it will be created
	// ios::app tells it to append anything we write to the file.
	file.open("test.txt", std::ios::app);

	// Check that the file was actually opened/created
	// Permissions can prevent the opening
	if (!file.is_open()) {
		std::cerr << "[ERROR] Couldn't open/create file \"test.txt\"" << std::endl;
		return 1;
	}

	// We could do it all at once, but this lets us separate paragraphs visually.

	file << "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam egestas neque justo. Curabitur scelerisque ac ante vel tempus. Vestibulum ac mollis ligula. Phasellus in tortor sed ipsum posuere lacinia. Nulla a lectus ac velit maximus gravida. Phasellus egestas consectetur lacus vitae volutpat. Nam sit amet ipsum aliquam, laoreet mauris eu, lacinia arcu. Nullam at iaculis velit. Fusce ut feugiat purus. Nam luctus lacus sed sapien tempor, ac aliquam nulla sodales. Mauris tempus, metus vel consequat consectetur, neque massa iaculis sapien, quis interdum arcu orci eget urna. Sed tortor mauris, eleifend non neque ac, auctor bibendum felis. Nam sollicitudin porttitor est vitae sagittis. Nulla ac enim eget arcu posuere tristique. Fusce sed tortor eget nunc porta maximus.\n";

	file << "\nProin ultricies velit dignissim turpis feugiat vestibulum. Morbi tincidunt lorem congue justo hendrerit, ut feugiat elit euismod. Mauris ligula enim, pharetra a felis a, vulputate bibendum nibh. Praesent nunc turpis, commodo sed mollis non, aliquet eu urna. Nam pharetra a nulla feugiat sagittis. Nulla sit amet elit sapien. Mauris metus libero, volutpat in fringilla eget, sollicitudin eget eros. Nam interdum consectetur vehicula. Integer ultricies metus ac ex ultricies, gravida commodo dolor consectetur. Curabitur efficitur sit amet velit interdum blandit. Fusce a sem eleifend, auctor enim in, maximus justo. Donec sed pulvinar eros.\n";

	file << "\nProin iaculis tortor tellus, et ultricies quam egestas id. Cras pretium arcu eget scelerisque tincidunt. Duis ornare neque ac semper tempor. Aliquam nec felis ullamcorper, ornare lectus at, egestas ligula. Phasellus bibendum sem massa, eu rhoncus nisl rhoncus quis. Fusce consequat lacinia magna, vitae rutrum leo bibendum at. Aenean lobortis dolor in tempor elementum. Ut non dignissim neque. Duis fermentum dictum felis vitae vestibulum. Nullam sodales pellentesque sem, in laoreet turpis porttitor id.\n";

	file << "\nInteger sit amet sapien metus. Morbi ligula ex, imperdiet vitae diam at, mollis congue orci. Mauris posuere felis ut est tincidunt, ut tincidunt tellus hendrerit. Vivamus efficitur metus eu erat maximus, quis blandit enim aliquet. Curabitur non commodo nibh. Etiam diam felis, vehicula et neque et, eleifend rhoncus nibh. Pellentesque convallis elit mauris, tempus imperdiet nibh imperdiet in. Nulla posuere quam ultricies commodo hendrerit. Nam ultricies urna at sapien consectetur, at porta sem dignissim. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi a leo vel dolor pretium gravida.\n";

	// This writes our text into the file
	file << "\nVestibulum vel diam velit. Fusce eleifend rutrum libero. Vivamus purus ligula, facilisis et mollis eget, vulputate sit amet libero. In non commodo leo. Vivamus feugiat nisi nec lorem porttitor, posuere interdum ex efficitur. Donec pulvinar nulla massa, interdum dignissim quam convallis eget. Proin nec placerat enim, sed molestie turpis.\n";

	// FIXME: just go back to the beginning of the file instead of closing
	// Close it after writing since we're in append mode
	file.close();

	// Reopen from the beginning in read-only mode
	file.open("test.txt", std::ios::in);

	std::string current_line;
	// Read the file line-by-line
	while (std::getline(file, current_line)) {
		// Print the line
		std::cout << current_line << std::endl;
	}

	// Close when we're done
	file.close();

	return 0;
}
