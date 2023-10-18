#include <cctype>
#include <iostream>
#include <vector>
#include <string>

int main (int argc, char* argv[])
{
    //Convert the cmd args into a easily usable form
    const std::vector<std::string> cmdLineArgs{argv, argv + argc};
    const std::size_t nCmdLineArgs{cmdLineArgs.size()};

    //Options that might be set by the cmd args
    bool help{false};
    bool version{false};
    bool inputfile{false};
    bool outputfile{false};
    std::string(input);
    std::string(output);

    //Process cmd line args to be the program name
    for (std::size_t i{1}; i < nCmdLineArgs; ++i)
    {
        if (cmdLineArgs[i] == "-h" || cmdLineArgs[i] == "--help")
        {
            help = true;
        }

        else if (cmdLineArgs[i] == "-v" || cmdLineArgs[i] == "--version")
        {
            version = true;
        }

        else if (cmdLineArgs[i] == "-i" || cmdLineArgs[i] == "--input_file")
        {
            inputfile = true;
            input = cmdLineArgs[i+1]; 
            i++;
        }

        else if (cmdLineArgs[i] == "-o" || cmdLineArgs[i] == "--output_file")
        {
        outputfile = true;
        output = cmdLineArgs[i+1];
         i++;
        }
    }

    // Handles the help if user requires
    if (help)
    {
        std::cout
            << "mpags-cipher week 1 program\n\n"
            << "Encryption and decryption of inputted alphabetic and numeric text using classical syphers\n\n"
            << "-h|--help help menu\n\n"
            << "-v|--version version number of program\n\n"
            << "-i|--input_file location of input file\n\n"
            << "-o|--output_file location of output file\n\n"
            << std::endl;
    }

    if (version)
    {
        std::cout
            << "version v1.0"
            << std::endl;
    }

    if (inputfile)
    {
        std::cout
            << "Input file name: \n\n"
            << input 
            << std::endl;
    }

    if (outputfile)
    {
        std::cout
            << "Output file name: \n\n"
            << output 
            << std::endl;
    }


        //initialise variables
    char c{'x'};
    std::string out_text;


    //loop over each char of input
    while (std::cin >> c)
    {
        //uppercase alphabetic chars
        {
            if (std::isalpha(c))
            {
                out_text += std::toupper(c);
                continue;
            }

            //Transliterate digits to english words
            switch(c)
        {
            case '0':
                out_text += "ZERO";
                break;
            
            case '1':
                out_text += "ONE";
                break;

            case '2':
                out_text += "TWO";
                break;

            case '3':
                out_text += "THREE";
                break;

            case '4':
                out_text += "FOUR";
                break;

            case '5':
                out_text += "FIVE";
                break;

            case '6':
                out_text += "SIX";
                break;

            case '7':
                out_text += "SEVEN";
                break;

            case '8':
                out_text += "EIGHT";
                break;

            case '9':
                out_text += "NINE";
                break;
        }

        }
    }

    std::cout << out_text << std::endl;

    exit(0);
}