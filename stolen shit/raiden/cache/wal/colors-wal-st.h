const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#19101e", /* black   */
  [1] = "#96688C", /* red     */
  [2] = "#CD7B92", /* green   */
  [3] = "#B092A1", /* yellow  */
  [4] = "#CFA7B1", /* blue    */
  [5] = "#D8BAC4", /* magenta */
  [6] = "#E0CED2", /* cyan    */
  [7] = "#ebe0e1", /* white   */

  /* 8 bright colors */
  [8]  = "#a49c9d",  /* black   */
  [9]  = "#96688C",  /* red     */
  [10] = "#CD7B92", /* green   */
  [11] = "#B092A1", /* yellow  */
  [12] = "#CFA7B1", /* blue    */
  [13] = "#D8BAC4", /* magenta */
  [14] = "#E0CED2", /* cyan    */
  [15] = "#ebe0e1", /* white   */

  /* special colors */
  [256] = "#19101e", /* background */
  [257] = "#ebe0e1", /* foreground */
  [258] = "#ebe0e1",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
