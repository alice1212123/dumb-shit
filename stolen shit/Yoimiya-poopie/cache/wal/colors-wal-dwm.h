static const char norm_fg[] = "#c0b0c5";
static const char norm_bg[] = "#170f11";
static const char norm_border[] = "#867b89";

static const char sel_fg[] = "#c0b0c5";
static const char sel_bg[] = "#A26857";
static const char sel_border[] = "#c0b0c5";

static const char urg_fg[] = "#c0b0c5";
static const char urg_bg[] = "#AC583B";
static const char urg_border[] = "#AC583B";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
