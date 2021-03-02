//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"", "date '+%a %m/%d %I:%M%p'",					1,		0},
	{"", "battery.sh",					1,		0},
	{"", "echo SO: $(pamixer --get-volume)%",					1,		0},
	{"", "echo BRI: $(brightness.sh)",					1,		0},
	{"", "~/scripts/network.sh",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
