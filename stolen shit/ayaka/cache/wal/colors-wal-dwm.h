static const char norm_fg[] = "#efdfc0";
static const char norm_bg[] = "#0b0708";
static const char norm_border[] = "#a79c86";

static const char sel_fg[] = "#efdfc0";
static const char sel_bg[] = "#58548D";
static const char sel_border[] = "#efdfc0";

static const char urg_fg[] = "#efdfc0";
static const char urg_bg[] = "#D2A077";
static const char urg_border[] = "#D2A077";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
