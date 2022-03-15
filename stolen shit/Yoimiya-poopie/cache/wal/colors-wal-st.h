const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#170f11", /* black   */
  [1] = "#AC583B", /* red     */
  [2] = "#A26857", /* green   */
  [3] = "#BF8A6D", /* yellow  */
  [4] = "#D8936C", /* blue    */
  [5] = "#3E44A3", /* magenta */
  [6] = "#685788", /* cyan    */
  [7] = "#c0b0c5", /* white   */

  /* 8 bright colors */
  [8]  = "#867b89",  /* black   */
  [9]  = "#AC583B",  /* red     */
  [10] = "#A26857", /* green   */
  [11] = "#BF8A6D", /* yellow  */
  [12] = "#D8936C", /* blue    */
  [13] = "#3E44A3", /* magenta */
  [14] = "#685788", /* cyan    */
  [15] = "#c0b0c5", /* white   */

  /* special colors */
  [256] = "#170f11", /* background */
  [257] = "#c0b0c5", /* foreground */
  [258] = "#c0b0c5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
