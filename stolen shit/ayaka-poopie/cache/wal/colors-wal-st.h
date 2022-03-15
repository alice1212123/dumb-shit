const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#2d2228", /* black   */
  [1] = "#D2A5AD", /* red     */
  [2] = "#ABA7CA", /* green   */
  [3] = "#E1B2D3", /* yellow  */
  [4] = "#C6C7D2", /* blue    */
  [5] = "#D4CBD4", /* magenta */
  [6] = "#E3D4D7", /* cyan    */
  [7] = "#f2e0ed", /* white   */

  /* 8 bright colors */
  [8]  = "#a99ca5",  /* black   */
  [9]  = "#D2A5AD",  /* red     */
  [10] = "#ABA7CA", /* green   */
  [11] = "#E1B2D3", /* yellow  */
  [12] = "#C6C7D2", /* blue    */
  [13] = "#D4CBD4", /* magenta */
  [14] = "#E3D4D7", /* cyan    */
  [15] = "#f2e0ed", /* white   */

  /* special colors */
  [256] = "#2d2228", /* background */
  [257] = "#f2e0ed", /* foreground */
  [258] = "#f2e0ed",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
