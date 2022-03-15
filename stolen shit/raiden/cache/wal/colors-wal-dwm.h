static const char norm_fg[] = "#ebe0e1";
static const char norm_bg[] = "#19101e";
static const char norm_border[] = "#a49c9d";

static const char sel_fg[] = "#ebe0e1";
static const char sel_bg[] = "#CD7B92";
static const char sel_border[] = "#ebe0e1";

static const char urg_fg[] = "#ebe0e1";
static const char urg_bg[] = "#96688C";
static const char urg_border[] = "#96688C";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
