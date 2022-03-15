const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#211214", /* black   */
  [1] = "#D86766", /* red     */
  [2] = "#C3837E", /* green   */
  [3] = "#BEA6BF", /* yellow  */
  [4] = "#E09C9E", /* blue    */
  [5] = "#C8BBDA", /* magenta */
  [6] = "#E4D3DF", /* cyan    */
  [7] = "#dddbea", /* white   */

  /* 8 bright colors */
  [8]  = "#9a99a3",  /* black   */
  [9]  = "#D86766",  /* red     */
  [10] = "#C3837E", /* green   */
  [11] = "#BEA6BF", /* yellow  */
  [12] = "#E09C9E", /* blue    */
  [13] = "#C8BBDA", /* magenta */
  [14] = "#E4D3DF", /* cyan    */
  [15] = "#dddbea", /* white   */

  /* special colors */
  [256] = "#211214", /* background */
  [257] = "#dddbea", /* foreground */
  [258] = "#dddbea",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
