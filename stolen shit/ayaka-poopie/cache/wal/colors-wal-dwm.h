static const char norm_fg[] = "#f2e0ed";
static const char norm_bg[] = "#2d2228";
static const char norm_border[] = "#a99ca5";

static const char sel_fg[] = "#f2e0ed";
static const char sel_bg[] = "#ABA7CA";
static const char sel_border[] = "#f2e0ed";

static const char urg_fg[] = "#f2e0ed";
static const char urg_bg[] = "#D2A5AD";
static const char urg_border[] = "#D2A5AD";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
