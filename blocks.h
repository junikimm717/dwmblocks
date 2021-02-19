//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
	{"", "acpi | awk '{print $3,$4}' | sed s/\,//g",					10,		0},
	{"", "echo Sound: $(pamixer --get-volume)%",					1,		0},
	{"", "echo Screen: $(brightnessctl | grep % | awk '{print $4}' | sed 's/(//g' | sed 's/)//g')",					1,		0},
	{"", "~/scripts/network.sh",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
