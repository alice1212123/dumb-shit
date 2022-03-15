const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#191319", /* black   */
  [1] = "#DEA061", /* red     */
  [2] = "#4C5896", /* green   */
  [3] = "#AAA19F", /* yellow  */
  [4] = "#8581AA", /* blue    */
  [5] = "#F0DBA3", /* magenta */
  [6] = "#C2B5C1", /* cyan    */
  [7] = "#e7e7e7", /* white   */

  /* 8 bright colors */
  [8]  = "#a1a1a1",  /* black   */
  [9]  = "#DEA061",  /* red     */
  [10] = "#4C5896", /* green   */
  [11] = "#AAA19F", /* yellow  */
  [12] = "#8581AA", /* blue    */
  [13] = "#F0DBA3", /* magenta */
  [14] = "#C2B5C1", /* cyan    */
  [15] = "#e7e7e7", /* white   */

  /* special colors */
  [256] = "#191319", /* background */
  [257] = "#e7e7e7", /* foreground */
  [258] = "#e7e7e7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
