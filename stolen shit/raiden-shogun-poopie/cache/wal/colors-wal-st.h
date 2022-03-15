const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#161319", /* black   */
  [1] = "#6C5891", /* red     */
  [2] = "#614FA0", /* green   */
  [3] = "#976E99", /* yellow  */
  [4] = "#BC74A8", /* blue    */
  [5] = "#BDA3AD", /* magenta */
  [6] = "#D89DAC", /* cyan    */
  [7] = "#e7cddc", /* white   */

  /* 8 bright colors */
  [8]  = "#a18f9a",  /* black   */
  [9]  = "#6C5891",  /* red     */
  [10] = "#614FA0", /* green   */
  [11] = "#976E99", /* yellow  */
  [12] = "#BC74A8", /* blue    */
  [13] = "#BDA3AD", /* magenta */
  [14] = "#D89DAC", /* cyan    */
  [15] = "#e7cddc", /* white   */

  /* special colors */
  [256] = "#161319", /* background */
  [257] = "#e7cddc", /* foreground */
  [258] = "#e7cddc",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
