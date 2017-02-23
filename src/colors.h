#ifndef	_COLORS_H_
#define	_COLORS_H_

#include <windows.h>

#define RESET_COLORS                    0

#define FOREGROUND_GRAY                 ( FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED )
#define FOREGROUND_WHITE                ( FOREGROUND_GRAY | FOREGROUND_INTENSITY )

#define FOREGROUND_YELLOW               ( FOREGROUND_GREEN | FOREGROUND_RED )
#define FOREGROUND_CYAN                 ( FOREGROUND_BLUE | FOREGROUND_GREEN )
#define FOREGROUND_MAGENTA              ( FOREGROUND_RED | FOREGROUND_BLUE )

#define FOREGROUND_BLUE_INTENSE         ( FOREGROUND_BLUE | FOREGROUND_INTENSITY )
#define FOREGROUND_GREEN_INTENSE        ( FOREGROUND_GREEN | FOREGROUND_INTENSITY )
#define FOREGROUND_RED_INTENSE          ( FOREGROUND_RED | FOREGROUND_INTENSITY )
#define FOREGROUND_YELLOW_INTENSE       ( FOREGROUND_YELLOW | FOREGROUND_INTENSITY )
#define FOREGROUND_CYAN_INTENSE         ( FOREGROUND_CYAN | FOREGROUND_INTENSITY )
#define FOREGROUND_MAGENTA_INTENSE      ( FOREGROUND_MAGENTA | FOREGROUND_INTENSITY )

#define BACKGROUND_GRAY                 ( BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED )
#define BACKGROUND_WHITE                ( BACKGROUND_GRAY | BACKGROUND_INTENSITY )

#define BACKGROUND_YELLOW               ( BACKGROUND_GREEN | BACKGROUND_RED )
#define BACKGROUND_CYAN                 ( BACKGROUND_BLUE | BACKGROUND_GREEN )
#define BACKGROUND_MAGENTA              ( BACKGROUND_RED | BACKGROUND_BLUE )

#define BACKGROUND_BLUE_INTENSE         ( BACKGROUND_BLUE | BACKGROUND_INTENSITY )
#define BACKGROUND_GREEN_INTENSE        ( BACKGROUND_GREEN | BACKGROUND_INTENSITY )
#define BACKGROUND_RED_INTENSE          ( BACKGROUND_RED | BACKGROUND_INTENSITY )
#define BACKGROUND_YELLOW_INTENSE       ( BACKGROUND_YELLOW | BACKGROUND_INTENSITY )
#define BACKGROUND_CYAN_INTENSE         ( BACKGROUND_CYAN | BACKGROUND_INTENSITY )
#define BACKGROUND_MAGENTA_INTENSE      ( BACKGROUND_MAGENTA | BACKGROUND_INTENSITY )

#endif	/* Not _COLORS_H_ */