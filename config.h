/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "???";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
	/* function format          argument */
	{ datetime, " %s",           "%H:%M" },
	{ datetime, " |  %s",           "%F" },
    { run_command, " | %s ",     "sh ~/.config/slstatus/commands/battery.sh" },
};
