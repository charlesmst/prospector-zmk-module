#include <lvgl.h>

#if defined(CONFIG_PROSPECTOR_STATUS_SCREEN_CLASSIC)
#include "layouts/classic/status_screen.c"
#elif defined(CONFIG_PROSPECTOR_STATUS_SCREEN_RADII)
#include "layouts/radii/status_screen.c"
#elif defined(CONFIG_PROSPECTOR_STATUS_SCREEN_FIELD)
#include "layouts/field/status_screen.c"
#elif defined(CONFIG_PROSPECTOR_STATUS_SCREEN_OPERATOR)
#include "layouts/operator/status_screen.c"
#elif defined(CONFIG_PROSPECTOR_STATUS_SCREEN_NONE)
/*
 * Deliberately empty. The application supplies zmk_display_status_screen()
 * itself, so defining one here too would be a duplicate symbol at link time.
 * Everything else the shield provides -- panel, backlight, rotation, fonts --
 * is unaffected and still built.
 */
#else
#error "No status screen layout selected"
#endif
