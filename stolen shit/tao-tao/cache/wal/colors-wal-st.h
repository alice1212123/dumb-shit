const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#160d0d", /* black   */
  [1] = "#B05943", /* red     */
  [2] = "#9E6A59", /* green   */
  [3] = "#BC916F", /* yellow  */
  [4] = "#E49970", /* blue    */
  [5] = "#65648A", /* magenta */
  [6] = "#D8AA95", /* cyan    */
  [7] = "#ecdfd0", /* white   */

  /* 8 bright colors */
  [8]  = "#a59c91",  /* black   */
  [9]  = "#B05943",  /* red     */
  [10] = "#9E6A59", /* green   */
  [11] = "#BC916F", /* yellow  */
  [12] = "#E49970", /* blue    */
  [13] = "#65648A", /* magenta */
  [14] = "#D8AA95", /* cyan    */
  [15] = "#ecdfd0", /* white   */

  /* special colors */
  [256] = "#160d0d", /* background */
  [257] = "#ecdfd0", /* foreground */
  [258] = "#ecdfd0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
