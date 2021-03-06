#include <fstream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

const int FILES_QUANTITY = 15;
const vector<string> INPUT_FILES = {
    "../Models/Map/Point.h",
    "../Models/Map/Point.cpp",
    "../Models/Objects/Entity.h",
    "../Models/Objects/Entity.cpp",
    "../Models/Objects/Barrel.h",
    "../Models/Objects/Barrel.cpp",
    "../Models/Objects/Ship.h",
    "../Models/Objects/Ship.cpp",
    "../Models/Player.h",
    "../Models/Player.cpp",
    "../Models/Game.h",
    "../Models/Game.cpp",
    "../Services/Io.h",
    "../Services/Io.cpp",
    "../Program.cpp"
};
const string OUTPUT_FILE = "Codingame.cpp";
const vector<string> DIRECTIVES = {
	"#include <string>",
	"#include <array>",
    "#include <iostream>",
    "#include <vector>",
    "#include <cmath>",
    "using namespace std;"
};

void clear_file()
{
	ofstream output_file(OUTPUT_FILE, ios_base::out | ios_base::trunc);
	output_file.close();
}

void copy_directives()
{
	ofstream output_file(OUTPUT_FILE, ios_base::app);
	string line;

	if(output_file.is_open())
	{
		for(int i = 0; i < DIRECTIVES.size(); i++)
		{
			line = DIRECTIVES[i];
			output_file << line;
            if(i != DIRECTIVES.size() - 1)
            {
                output_file << endl;
            }
		}
		output_file.close();
	}	
	else
	{
		cout << "Unable to open the file." << endl;
	}
}

bool exclude_line(string line)
{
	bool output = false;
	if(line.find("#include") != string::npos ||
	 	line.find("using") != string::npos ||
        line.find("ifndef") != string::npos ||
        line.find("define") != string::npos ||
        line.find("endif") != string::npos)
	{
		output = true;
	}
	return output;
}

void copy_file(ifstream &input_file)
{
	ofstream output_file(OUTPUT_FILE, ios_base::app);
	string line;
	if(output_file.is_open())
	{
		while(getline(input_file, line))
		{
			if(!exclude_line(line))
			{
				output_file << line;
				output_file << endl;
			}
		}
		output_file.close();
	}
	else
	{
		cout << "Unable to open the file." << endl;
	}
}

int main()
{
	clear_file();
	copy_directives();

	for(int i = 0; i < FILES_QUANTITY; i++)
	{
		ifstream input_file(INPUT_FILES[i]);
		if(input_file.is_open())
		{
			copy_file(input_file);
			input_file.close();
		}
		else
		{
			cout << "Unable to open file" << endl;
		}
	}
	return 0;
}