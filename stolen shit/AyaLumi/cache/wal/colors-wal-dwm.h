static const char norm_fg[] = "#e7e7e7";
static const char norm_bg[] = "#191319";
static const char norm_border[] = "#a1a1a1";

static const char sel_fg[] = "#e7e7e7";
static const char sel_bg[] = "#4C5896";
static const char sel_border[] = "#e7e7e7";

static const char urg_fg[] = "#e7e7e7";
static const char urg_bg[] = "#DEA061";
static const char urg_border[] = "#DEA061";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
