const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0b0708", /* black   */
  [1] = "#D2A077", /* red     */
  [2] = "#58548D", /* green   */
  [3] = "#916F90", /* yellow  */
  [4] = "#7C8198", /* blue    */
  [5] = "#DBAE90", /* magenta */
  [6] = "#D5BFBF", /* cyan    */
  [7] = "#efdfc0", /* white   */

  /* 8 bright colors */
  [8]  = "#a79c86",  /* black   */
  [9]  = "#D2A077",  /* red     */
  [10] = "#58548D", /* green   */
  [11] = "#916F90", /* yellow  */
  [12] = "#7C8198", /* blue    */
  [13] = "#DBAE90", /* magenta */
  [14] = "#D5BFBF", /* cyan    */
  [15] = "#efdfc0", /* white   */

  /* special colors */
  [256] = "#0b0708", /* background */
  [257] = "#efdfc0", /* foreground */
  [258] = "#efdfc0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
