static const char norm_fg[] = "#ecdfd0";
static const char norm_bg[] = "#160d0d";
static const char norm_border[] = "#a59c91";

static const char sel_fg[] = "#ecdfd0";
static const char sel_bg[] = "#9E6A59";
static const char sel_border[] = "#ecdfd0";

static const char urg_fg[] = "#ecdfd0";
static const char urg_bg[] = "#B05943";
static const char urg_border[] = "#B05943";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
