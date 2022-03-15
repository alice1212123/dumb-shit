const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#15070f", /* black   */
  [1] = "#A67491", /* red     */
  [2] = "#A88C97", /* green   */
  [3] = "#A293A7", /* yellow  */
  [4] = "#E3A3A8", /* blue    */
  [5] = "#9FABCF", /* magenta */
  [6] = "#D7C1C9", /* cyan    */
  [7] = "#e9e1e4", /* white   */

  /* 8 bright colors */
  [8]  = "#a39d9f",  /* black   */
  [9]  = "#A67491",  /* red     */
  [10] = "#A88C97", /* green   */
  [11] = "#A293A7", /* yellow  */
  [12] = "#E3A3A8", /* blue    */
  [13] = "#9FABCF", /* magenta */
  [14] = "#D7C1C9", /* cyan    */
  [15] = "#e9e1e4", /* white   */

  /* special colors */
  [256] = "#15070f", /* background */
  [257] = "#e9e1e4", /* foreground */
  [258] = "#e9e1e4",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
