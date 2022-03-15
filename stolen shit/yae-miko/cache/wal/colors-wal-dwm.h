static const char norm_fg[] = "#dddbea";
static const char norm_bg[] = "#211214";
static const char norm_border[] = "#9a99a3";

static const char sel_fg[] = "#dddbea";
static const char sel_bg[] = "#C3837E";
static const char sel_border[] = "#dddbea";

static const char urg_fg[] = "#dddbea";
static const char urg_bg[] = "#D86766";
static const char urg_border[] = "#D86766";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
