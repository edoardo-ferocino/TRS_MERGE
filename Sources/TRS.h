/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File              */
/*                                                                        */
/* WARNING: Do not add to, delete from, or otherwise modify the contents  */
/*          of this include file.                                         */
/**************************************************************************/

#include <userint.h>

#ifdef __cplusplus
    extern "C" {
#endif

     /* Panels and Controls: */

#define  DISPLAY                          1       /* callback function: ClosePanel */
#define  DISPLAY_CONTPAUSE                2       /* control type: textButton, callback function: GetCommand */
#define  DISPLAY_ABORT                    3       /* control type: command, callback function: GetCommand */
#define  DISPLAY_T_OSCILL                 4       /* control type: table, callback function: Setting */
#define  DISPLAY_T_TRIS                   5       /* control type: table, callback function: (none) */
#define  DISPLAY_T_BOARD                  6       /* control type: table, callback function: (none) */
#define  DISPLAY_T_LOOP                   7       /* control type: table, callback function: (none) */
#define  DISPLAY_T_BANK                   8       /* control type: table, callback function: (none) */
#define  DISPLAY_T_VALUE                  9       /* control type: table, callback function: Setting */
#define  DISPLAY_T_ROI                    10      /* control type: table, callback function: Setting */
#define  DISPLAY_PLOT_PAGE_1              11      /* control type: numeric, callback function: Setting */
#define  DISPLAY_PLOT_PAGE_2              12      /* control type: numeric, callback function: Setting */
#define  DISPLAY_PLOT_PAGE_3              13      /* control type: numeric, callback function: Setting */
#define  DISPLAY_PLOT_PAGE_4              14      /* control type: numeric, callback function: Setting */
#define  DISPLAY_PLOT_PAGE_5              15      /* control type: numeric, callback function: Setting */
#define  DISPLAY_PLOT_PAGE_6              16      /* control type: numeric, callback function: Setting */
#define  DISPLAY_PLOT_PAGE_7              17      /* control type: numeric, callback function: Setting */
#define  DISPLAY_PLOT_PAGE_8              18      /* control type: numeric, callback function: Setting */
#define  DISPLAY_PLOT_PAGE_9              19      /* control type: numeric, callback function: Setting */
#define  DISPLAY_PLOT_PAGE_10             20      /* control type: numeric, callback function: Setting */
#define  DISPLAY_PLOT_PAGE_11             21      /* control type: numeric, callback function: Setting */
#define  DISPLAY_PLOT_PAGE_12             22      /* control type: numeric, callback function: Setting */
#define  DISPLAY_PLOT_PAGE_13             23      /* control type: numeric, callback function: Setting */
#define  DISPLAY_PLOT_PAGE_14             24      /* control type: numeric, callback function: Setting */
#define  DISPLAY_PLOT_PAGE_15             25      /* control type: numeric, callback function: Setting */
#define  DISPLAY_PLOT_PAGE_16             26      /* control type: numeric, callback function: Setting */
#define  DISPLAY_PLOT_PLOT_1              27      /* control type: radioButton, callback function: Setting */
#define  DISPLAY_PLOT_PLOT_2              28      /* control type: radioButton, callback function: Setting */
#define  DISPLAY_PLOT_PLOT_3              29      /* control type: radioButton, callback function: Setting */
#define  DISPLAY_PLOT_PLOT_4              30      /* control type: radioButton, callback function: Setting */
#define  DISPLAY_PLOT_PLOT_5              31      /* control type: radioButton, callback function: Setting */
#define  DISPLAY_PLOT_PLOT_6              32      /* control type: radioButton, callback function: Setting */
#define  DISPLAY_PLOT_PLOT_7              33      /* control type: radioButton, callback function: Setting */
#define  DISPLAY_PLOT_PLOT_8              34      /* control type: radioButton, callback function: Setting */
#define  DISPLAY_PLOT_PLOT_9              35      /* control type: radioButton, callback function: Setting */
#define  DISPLAY_PLOT_PLOT_10             36      /* control type: radioButton, callback function: Setting */
#define  DISPLAY_PLOT_PLOT_11             37      /* control type: radioButton, callback function: Setting */
#define  DISPLAY_PLOT_PLOT_12             38      /* control type: radioButton, callback function: Setting */
#define  DISPLAY_PLOT_PLOT_13             39      /* control type: radioButton, callback function: Setting */
#define  DISPLAY_PLOT_PLOT_14             40      /* control type: radioButton, callback function: Setting */
#define  DISPLAY_PLOT_PLOT_15             41      /* control type: radioButton, callback function: Setting */
#define  DISPLAY_PLOT_PLOT_16             42      /* control type: radioButton, callback function: Setting */
#define  DISPLAY_MEASURE                  43      /* control type: LED, callback function: (none) */
#define  DISPLAY_MOVE                     44      /* control type: LED, callback function: (none) */
#define  DISPLAY_TRIM                     45      /* control type: LED, callback function: (none) */
#define  DISPLAY_GRAPH_TYPE               46      /* control type: ring, callback function: Setting */
#define  DISPLAY_GRAPH_SCALE              47      /* control type: ring, callback function: Setting */
#define  DISPLAY_GRAPH_ROI                48      /* control type: graph, callback function: (none) */
#define  DISPLAY_GRAPH_PLOT               49      /* control type: graph, callback function: (none) */
#define  DISPLAY_MESSAGE                  50      /* control type: textBox, callback function: (none) */
#define  DISPLAY_ROI_WINDOW               51      /* control type: ring, callback function: Setting */
#define  DISPLAY_OSCILL_ZOOM_FIRST        52      /* control type: numeric, callback function: Setting */
#define  DISPLAY_OSCILL_ZOOM_LAST         53      /* control type: numeric, callback function: Setting */
#define  DISPLAY_ZOOM                     54      /* control type: textMsg, callback function: (none) */

#define  DO_STEP                          2       /* callback function: ClosePanel */
#define  DO_STEP_TITLE                    2       /* control type: textMsg, callback function: (none) */
#define  DO_STEP_TEXTMSG_1                3       /* control type: textMsg, callback function: (none) */
#define  DO_STEP_TEXTMSG_2                4       /* control type: textMsg, callback function: (none) */
#define  DO_STEP_TEXTMSG_3                5       /* control type: textMsg, callback function: (none) */
#define  DO_STEP_STEP_1                   6       /* control type: ring, callback function: Setting */
#define  DO_STEP_STEP_2                   7       /* control type: ring, callback function: Setting */
#define  DO_STEP_STEP_3                   8       /* control type: ring, callback function: Setting */
#define  DO_STEP_HOME_1                   9       /* control type: numeric, callback function: Setting */
#define  DO_STEP_HOME_2                   10      /* control type: numeric, callback function: Setting */
#define  DO_STEP_HOME_3                   11      /* control type: numeric, callback function: Setting */
#define  DO_STEP_GOAL_1                   12      /* control type: numeric, callback function: Setting */
#define  DO_STEP_GOAL_2                   13      /* control type: numeric, callback function: Setting */
#define  DO_STEP_GOAL_3                   14      /* control type: numeric, callback function: Setting */
#define  DO_STEP_OSCILL_1                 15      /* control type: binary, callback function: Setting */
#define  DO_STEP_OSCILL_2                 16      /* control type: binary, callback function: Setting */
#define  DO_STEP_OSCILL_3                 17      /* control type: binary, callback function: Setting */
#define  DO_STEP_BREAK_1                  18      /* control type: binary, callback function: Setting */
#define  DO_STEP_BREAK_2                  19      /* control type: binary, callback function: Setting */
#define  DO_STEP_BREAK_3                  20      /* control type: binary, callback function: Setting */
#define  DO_STEP_RETURN_1                 21      /* control type: binary, callback function: Setting */
#define  DO_STEP_RETURN_2                 22      /* control type: binary, callback function: Setting */
#define  DO_STEP_RETURN_3                 23      /* control type: binary, callback function: Setting */
#define  DO_STEP_EXECUTE_1                24      /* control type: command, callback function: RunDoStep */
#define  DO_STEP_EXECUTE_2                25      /* control type: command, callback function: RunDoStep */
#define  DO_STEP_EXECUTE_3                26      /* control type: command, callback function: RunDoStep */

#define  GEOMETRY                         3       /* callback function: ClosePanel */
#define  GEOMETRY_RING_PAD_1              2       /* control type: ring, callback function: CreatePad */
#define  GEOMETRY_RING_PAD_2              3       /* control type: ring, callback function: CreatePad */
#define  GEOMETRY_RING_PAD_3              4       /* control type: ring, callback function: CreatePad */
#define  GEOMETRY_RING_PAD_4              5       /* control type: ring, callback function: CreatePad */
#define  GEOMETRY_RING_PAD_5              6       /* control type: ring, callback function: CreatePad */
#define  GEOMETRY_RING_PAD_6              7       /* control type: ring, callback function: CreatePad */
#define  GEOMETRY_RING_PAD_7              8       /* control type: ring, callback function: CreatePad */
#define  GEOMETRY_RING_PAD_8              9       /* control type: ring, callback function: CreatePad */
#define  GEOMETRY_RING_PAD_9              10      /* control type: ring, callback function: CreatePad */
#define  GEOMETRY_RING_PAD_10             11      /* control type: ring, callback function: CreatePad */
#define  GEOMETRY_RING_PAD_11             12      /* control type: ring, callback function: CreatePad */
#define  GEOMETRY_RING_PAD_12             13      /* control type: ring, callback function: CreatePad */
#define  GEOMETRY_RING_PAD_13             14      /* control type: ring, callback function: CreatePad */
#define  GEOMETRY_RING_PAD_14             15      /* control type: ring, callback function: CreatePad */
#define  GEOMETRY_RING_PAD_15             16      /* control type: ring, callback function: CreatePad */
#define  GEOMETRY_RING_PAD_16             17      /* control type: ring, callback function: CreatePad */
#define  GEOMETRY_PAD_LABEL_1             18      /* control type: string, callback function: (none) */
#define  GEOMETRY_PAD_LABEL_2             19      /* control type: string, callback function: (none) */
#define  GEOMETRY_PAD_LABEL_3             20      /* control type: string, callback function: (none) */
#define  GEOMETRY_PAD_LABEL_4             21      /* control type: string, callback function: (none) */
#define  GEOMETRY_PAD_LABEL_5             22      /* control type: string, callback function: (none) */
#define  GEOMETRY_PAD_LABEL_6             23      /* control type: string, callback function: (none) */
#define  GEOMETRY_PAD_LABEL_7             24      /* control type: string, callback function: (none) */
#define  GEOMETRY_PAD_LABEL_8             25      /* control type: string, callback function: (none) */
#define  GEOMETRY_PAD_LABEL_9             26      /* control type: string, callback function: (none) */
#define  GEOMETRY_PAD_LABEL_10            27      /* control type: string, callback function: (none) */
#define  GEOMETRY_PAD_LABEL_11            28      /* control type: string, callback function: (none) */
#define  GEOMETRY_PAD_LABEL_12            29      /* control type: string, callback function: (none) */
#define  GEOMETRY_PAD_LABEL_13            30      /* control type: string, callback function: (none) */
#define  GEOMETRY_PAD_LABEL_14            31      /* control type: string, callback function: (none) */
#define  GEOMETRY_PAD_LABEL_15            32      /* control type: string, callback function: (none) */
#define  GEOMETRY_PAD_LABEL_16            33      /* control type: string, callback function: (none) */
#define  GEOMETRY_BS_PAD_1                34      /* control type: binary, callback function: ShowPad */
#define  GEOMETRY_BS_PAD_2                35      /* control type: binary, callback function: ShowPad */
#define  GEOMETRY_BS_PAD_3                36      /* control type: binary, callback function: ShowPad */
#define  GEOMETRY_BS_PAD_4                37      /* control type: binary, callback function: ShowPad */
#define  GEOMETRY_BS_PAD_5                38      /* control type: binary, callback function: ShowPad */
#define  GEOMETRY_BS_PAD_6                39      /* control type: binary, callback function: ShowPad */
#define  GEOMETRY_BS_PAD_7                40      /* control type: binary, callback function: ShowPad */
#define  GEOMETRY_BS_PAD_8                41      /* control type: binary, callback function: ShowPad */
#define  GEOMETRY_BS_PAD_9                42      /* control type: binary, callback function: ShowPad */
#define  GEOMETRY_BS_PAD_10               43      /* control type: binary, callback function: ShowPad */
#define  GEOMETRY_BS_PAD_11               44      /* control type: binary, callback function: ShowPad */
#define  GEOMETRY_BS_PAD_12               45      /* control type: binary, callback function: ShowPad */
#define  GEOMETRY_BS_PAD_13               46      /* control type: binary, callback function: ShowPad */
#define  GEOMETRY_BS_PAD_14               47      /* control type: binary, callback function: ShowPad */
#define  GEOMETRY_BS_PAD_15               48      /* control type: binary, callback function: ShowPad */
#define  GEOMETRY_BS_PAD_16               49      /* control type: binary, callback function: ShowPad */
#define  GEOMETRY_NEIGH_1                 50      /* control type: radioButton, callback function: PropPad */
#define  GEOMETRY_NEIGH_2                 51      /* control type: radioButton, callback function: PropPad */
#define  GEOMETRY_NEIGH_3                 52      /* control type: radioButton, callback function: PropPad */
#define  GEOMETRY_NEIGH_4                 53      /* control type: radioButton, callback function: PropPad */
#define  GEOMETRY_TABLE_PAD               54      /* control type: table, callback function: (none) */
#define  GEOMETRY_LATTICE_CTRL            55      /* control type: ring, callback function: PropPad */
#define  GEOMETRY_NUMPAD                  56      /* control type: numeric, callback function: SetType */
#define  GEOMETRY_NUMSOURCE               57      /* control type: numeric, callback function: SetType */
#define  GEOMETRY_NUMFIBER                58      /* control type: numeric, callback function: SetType */
#define  GEOMETRY_CM_TEXT_5               59      /* control type: textMsg, callback function: (none) */
#define  GEOMETRY_CM_TEXT_4               60      /* control type: textMsg, callback function: (none) */
#define  GEOMETRY_CM_TEXT_3               61      /* control type: textMsg, callback function: (none) */
#define  GEOMETRY_CM_TEXT_2               62      /* control type: textMsg, callback function: (none) */
#define  GEOMETRY_PAD_LABEL_TXT           63      /* control type: textMsg, callback function: (none) */
#define  GEOMETRY_PAD_ACTIVE_TXT          64      /* control type: textMsg, callback function: (none) */
#define  GEOMETRY_CM_TEXT_1               65      /* control type: textMsg, callback function: (none) */
#define  GEOMETRY_LATTCTRL_TEXT           66      /* control type: textMsg, callback function: (none) */
#define  GEOMETRY_PAD_REFINDEX            67      /* control type: numeric, callback function: PropPad */
#define  GEOMETRY_NEIGH_TEXT              68      /* control type: textMsg, callback function: (none) */
#define  GEOMETRY_SOURCE_RADIUS           69      /* control type: numeric, callback function: PropPad */
#define  GEOMETRY_GEO_FNAME               70      /* control type: string, callback function: Setting */
#define  GEOMETRY_FIBER_RADIUS            71      /* control type: numeric, callback function: PropPad */
#define  GEOMETRY_LOAD_GEO                72      /* control type: command, callback function: LoadGeom */
#define  GEOMETRY_SAVE_GEO                73      /* control type: command, callback function: SaveGeom */
#define  GEOMETRY_PAD_DIAG                74      /* control type: numeric, callback function: PropPad */
#define  GEOMETRY_PAD_STEP_COL            75      /* control type: numeric, callback function: PropPad */
#define  GEOMETRY_PAD_STEP_ROW            76      /* control type: numeric, callback function: PropPad */
#define  GEOMETRY_PADACTUAL               77      /* control type: numeric, callback function: ShowPad */
#define  GEOMETRY_TITLE                   78      /* control type: textMsg, callback function: (none) */

#define  LABEL                            4       /* callback function: ClosePanel */
#define  LABEL_TITLE                      2       /* control type: textMsg, callback function: (none) */
#define  LABEL_TITLE_2                    3       /* control type: textMsg, callback function: (none) */
#define  LABEL_TITLE_3                    4       /* control type: textMsg, callback function: (none) */
#define  LABEL_TITLE_4                    5       /* control type: textMsg, callback function: (none) */
#define  LABEL_NAME_1                     6       /* control type: string, callback function: Setting */
#define  LABEL_NAME_2                     7       /* control type: string, callback function: Setting */
#define  LABEL_NAME_3                     8       /* control type: string, callback function: Setting */
#define  LABEL_NAME_4                     9       /* control type: string, callback function: Setting */
#define  LABEL_NAME_5                     10      /* control type: string, callback function: Setting */
#define  LABEL_NAME_6                     11      /* control type: string, callback function: Setting */
#define  LABEL_NAME_7                     12      /* control type: string, callback function: Setting */
#define  LABEL_NAME_8                     13      /* control type: string, callback function: Setting */
#define  LABEL_NAME_9                     14      /* control type: string, callback function: Setting */
#define  LABEL_NAME_10                    15      /* control type: string, callback function: Setting */
#define  LABEL_NAME_11                    16      /* control type: string, callback function: Setting */
#define  LABEL_NAME_12                    17      /* control type: string, callback function: Setting */
#define  LABEL_NAME_13                    18      /* control type: string, callback function: Setting */
#define  LABEL_NAME_14                    19      /* control type: string, callback function: Setting */
#define  LABEL_NAME_15                    20      /* control type: string, callback function: Setting */
#define  LABEL_NAME_16                    21      /* control type: string, callback function: Setting */
#define  LABEL_CONTENT_1                  22      /* control type: string, callback function: Setting */
#define  LABEL_CONTENT_2                  23      /* control type: string, callback function: Setting */
#define  LABEL_CONTENT_3                  24      /* control type: string, callback function: Setting */
#define  LABEL_CONTENT_4                  25      /* control type: string, callback function: Setting */
#define  LABEL_CONTENT_5                  26      /* control type: string, callback function: Setting */
#define  LABEL_CONTENT_6                  27      /* control type: string, callback function: Setting */
#define  LABEL_CONTENT_7                  28      /* control type: string, callback function: Setting */
#define  LABEL_CONTENT_8                  29      /* control type: string, callback function: Setting */
#define  LABEL_CONTENT_9                  30      /* control type: string, callback function: Setting */
#define  LABEL_CONTENT_10                 31      /* control type: string, callback function: Setting */
#define  LABEL_CONTENT_11                 32      /* control type: string, callback function: Setting */
#define  LABEL_CONTENT_12                 33      /* control type: string, callback function: Setting */
#define  LABEL_CONTENT_13                 34      /* control type: string, callback function: Setting */
#define  LABEL_CONTENT_14                 35      /* control type: string, callback function: Setting */
#define  LABEL_CONTENT_15                 36      /* control type: string, callback function: Setting */
#define  LABEL_CONTENT_16                 37      /* control type: string, callback function: Setting */
#define  LABEL_AUTO_1                     38      /* control type: radioButton, callback function: Setting */
#define  LABEL_AUTO_2                     39      /* control type: radioButton, callback function: Setting */
#define  LABEL_AUTO_3                     40      /* control type: radioButton, callback function: Setting */
#define  LABEL_AUTO_4                     41      /* control type: radioButton, callback function: Setting */
#define  LABEL_AUTO_5                     42      /* control type: radioButton, callback function: Setting */
#define  LABEL_AUTO_6                     43      /* control type: radioButton, callback function: Setting */
#define  LABEL_AUTO_7                     44      /* control type: radioButton, callback function: Setting */
#define  LABEL_AUTO_8                     45      /* control type: radioButton, callback function: Setting */
#define  LABEL_AUTO_9                     46      /* control type: radioButton, callback function: Setting */
#define  LABEL_AUTO_10                    47      /* control type: radioButton, callback function: Setting */
#define  LABEL_AUTO_11                    48      /* control type: radioButton, callback function: Setting */
#define  LABEL_AUTO_12                    49      /* control type: radioButton, callback function: Setting */
#define  LABEL_AUTO_13                    50      /* control type: radioButton, callback function: Setting */
#define  LABEL_AUTO_14                    51      /* control type: radioButton, callback function: Setting */
#define  LABEL_AUTO_15                    52      /* control type: radioButton, callback function: Setting */
#define  LABEL_AUTO_16                    53      /* control type: radioButton, callback function: Setting */

#define  LAYOUT                           5       /* callback function: ClosePanel */
#define  LAYOUT_T_SOURCE                  2       /* control type: table, callback function: Setting */
#define  LAYOUT_T_FIBER                   3       /* control type: table, callback function: Setting */
#define  LAYOUT_T_PROT                    4       /* control type: table, callback function: Setting */
#define  LAYOUT_TITLE                     5       /* control type: textMsg, callback function: (none) */
#define  LAYOUT_ORDER                     6       /* control type: ring, callback function: Setting */

#define  MAMM                             6       /* callback function: ClosePanel */
#define  MAMM_LOOP_X                      2       /* control type: ring, callback function: Setting */
#define  MAMM_STEP_X                      3       /* control type: ring, callback function: Setting */
#define  MAMM_LOOP_Y                      4       /* control type: ring, callback function: Setting */
#define  MAMM_STEP_Y                      5       /* control type: ring, callback function: Setting */
#define  MAMM_LAMBDA_1                    6       /* control type: numeric, callback function: Setting */
#define  MAMM_LAMBDA_2                    7       /* control type: numeric, callback function: Setting */
#define  MAMM_LAMBDA_3                    8       /* control type: numeric, callback function: Setting */
#define  MAMM_LAMBDA_4                    9       /* control type: numeric, callback function: Setting */
#define  MAMM_LAMBDA_5                    10      /* control type: numeric, callback function: Setting */
#define  MAMM_LAMBDA_6                    11      /* control type: numeric, callback function: Setting */
#define  MAMM_LAMBDA_7                    12      /* control type: numeric, callback function: Setting */
#define  MAMM_STEP_VIS                    13      /* control type: ring, callback function: Setting */
#define  MAMM_IDXMIN_VIS                  14      /* control type: numeric, callback function: Setting */
#define  MAMM_IDXMAX_VIS                  15      /* control type: numeric, callback function: Setting */
#define  MAMM_STEP_NIR                    16      /* control type: ring, callback function: Setting */
#define  MAMM_IDXMIN_NIR                  17      /* control type: numeric, callback function: Setting */
#define  MAMM_IDXMAX_NIR                  18      /* control type: numeric, callback function: Setting */
#define  MAMM_RATE_HIGH_VIS               19      /* control type: numeric, callback function: Setting */
#define  MAMM_RATE_LOW_VIS                20      /* control type: numeric, callback function: Setting */
#define  MAMM_RATE_MID_VIS                21      /* control type: numeric, callback function: Setting */
#define  MAMM_RATE_HIGH_NIR               22      /* control type: numeric, callback function: Setting */
#define  MAMM_RATE_LOW_NIR                23      /* control type: numeric, callback function: Setting */
#define  MAMM_RATE_MID_NIR                24      /* control type: numeric, callback function: Setting */
#define  MAMM_AUTOLABEL                   25      /* control type: binary, callback function: Setting */
#define  MAMM_FINDTOP                     26      /* control type: binary, callback function: Setting */
#define  MAMM_SHRINK_X                    27      /* control type: binary, callback function: Setting */
#define  MAMM_SHRINK_Y                    28      /* control type: binary, callback function: Setting */
#define  MAMM_ITERBORD                    29      /* control type: numeric, callback function: Setting */
#define  MAMM_BACKTOP_NIR                 30      /* control type: numeric, callback function: Setting */
#define  MAMM_FREQOPEN_NIR                31      /* control type: numeric, callback function: Setting */
#define  MAMM_TITLE                       32      /* control type: textMsg, callback function: (none) */
#define  MAMM_TITLE_6                     33      /* control type: textMsg, callback function: (none) */
#define  MAMM_TITLE_2                     34      /* control type: textMsg, callback function: (none) */
#define  MAMM_TITLE_3                     35      /* control type: textMsg, callback function: (none) */
#define  MAMM_TITLE_4                     36      /* control type: textMsg, callback function: (none) */
#define  MAMM_TITLE_5                     37      /* control type: textMsg, callback function: (none) */
#define  MAMM_TITLE_7                     38      /* control type: textMsg, callback function: (none) */
#define  MAMM_TITLE_8                     39      /* control type: textMsg, callback function: (none) */
#define  MAMM_TITLE_14                    40      /* control type: textMsg, callback function: (none) */
#define  MAMM_TITLE_9                     41      /* control type: textMsg, callback function: (none) */
#define  MAMM_TITLE_10                    42      /* control type: textMsg, callback function: (none) */
#define  MAMM_TITLE_16                    43      /* control type: textMsg, callback function: (none) */
#define  MAMM_TITLE_15                    44      /* control type: textMsg, callback function: (none) */
#define  MAMM_TITLE_11                    45      /* control type: textMsg, callback function: (none) */
#define  MAMM_TITLE_12                    46      /* control type: textMsg, callback function: (none) */
#define  MAMM_TITLE_17                    47      /* control type: textMsg, callback function: (none) */
#define  MAMM_TITLE_13                    48      /* control type: textMsg, callback function: (none) */
#define  MAMM_PHYSICAL_BORDER             49      /* control type: numeric, callback function: Setting */
#define  MAMM_MARGIN                      50      /* control type: numeric, callback function: Setting */
#define  MAMM_STATUS                      51      /* control type: binary, callback function: Setting */
#define  MAMM_SHIFT_BACK                  52      /* control type: numeric, callback function: Setting */

#define  MOXY                             7       /* callback function: ClosePanel */
#define  MOXY_TITLE                       2       /* control type: textMsg, callback function: (none) */
#define  MOXY_DISP_DIV                    3       /* control type: numeric, callback function: Setting */
#define  MOXY_EXT_TRIG                    4       /* control type: ring, callback function: Setting */
#define  MOXY_PRES_EDGE                   5       /* control type: ring, callback function: Setting */

#define  PARM                             8       /* callback function: ClosePanel */
#define  PARM_LOOP_HOME_1                 2       /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_HOME_2                 3       /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_HOME_3                 4       /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_HOME_4                 5       /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_HOME_5                 6       /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_FIRST_1                7       /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_FIRST_2                8       /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_FIRST_3                9       /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_FIRST_4                10      /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_FIRST_5                11      /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_LAST_1                 12      /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_LAST_2                 13      /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_LAST_3                 14      /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_LAST_4                 15      /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_LAST_5                 16      /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_DELTA_1                17      /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_DELTA_2                18      /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_DELTA_3                19      /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_DELTA_4                20      /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_DELTA_5                21      /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_NUM_1                  22      /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_NUM_2                  23      /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_NUM_3                  24      /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_NUM_4                  25      /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_NUM_5                  26      /* control type: numeric, callback function: Setting */
#define  PARM_LOOP_FNAME_1                27      /* control type: string, callback function: Setting */
#define  PARM_LOOP_FNAME_2                28      /* control type: string, callback function: Setting */
#define  PARM_LOOP_FNAME_3                29      /* control type: string, callback function: Setting */
#define  PARM_LOOP_FNAME_4                30      /* control type: string, callback function: Setting */
#define  PARM_LOOP_FNAME_5                31      /* control type: string, callback function: Setting */
#define  PARM_LOOP_BREAK_1                32      /* control type: binary, callback function: Setting */
#define  PARM_LOOP_BREAK_2                33      /* control type: binary, callback function: Setting */
#define  PARM_LOOP_BREAK_3                34      /* control type: binary, callback function: Setting */
#define  PARM_LOOP_BREAK_4                35      /* control type: binary, callback function: Setting */
#define  PARM_LOOP_BREAK_5                36      /* control type: binary, callback function: Setting */
#define  PARM_LOOP_INVERT_1               37      /* control type: binary, callback function: Setting */
#define  PARM_LOOP_INVERT_2               38      /* control type: binary, callback function: Setting */
#define  PARM_LOOP_INVERT_3               39      /* control type: binary, callback function: Setting */
#define  PARM_LOOP_INVERT_4               40      /* control type: binary, callback function: Setting */
#define  PARM_LOOP_INVERT_5               41      /* control type: binary, callback function: Setting */
#define  PARM_LOOP_CONT_1                 42      /* control type: ring, callback function: Setting */
#define  PARM_LOOP_CONT_2                 43      /* control type: ring, callback function: Setting */
#define  PARM_LOOP_CONT_3                 44      /* control type: ring, callback function: Setting */
#define  PARM_LOOP_CONT_4                 45      /* control type: ring, callback function: Setting */
#define  PARM_LOOP_CONT_5                 46      /* control type: ring, callback function: Setting */
#define  PARM_SPC_TYPE                    47      /* control type: ring, callback function: Setting */
#define  PARM_SPC_WAIT                    48      /* control type: ring, callback function: Setting */
#define  PARM_SPC_TIME                    49      /* control type: numeric, callback function: Setting */
#define  PARM_SPC_COUNT                   50      /* control type: numeric, callback function: Setting */
#define  PARM_CHRONO_DELTA                51      /* control type: numeric, callback function: Setting */
#define  PARM_SPC_INIFILE_1               52      /* control type: string, callback function: Setting */
#define  PARM_SPC_INIFILE_2               53      /* control type: string, callback function: Setting */
#define  PARM_SPC_INIFILE_3               54      /* control type: string, callback function: Setting */
#define  PARM_SPC_INIFILE_4               55      /* control type: string, callback function: Setting */
#define  PARM_SPC_SCALE                   56      /* control type: numeric, callback function: Setting */
#define  PARM_SPC_CALIB                   57      /* control type: numeric, callback function: Setting */
#define  PARM_SPC_FACTOR                  58      /* control type: numeric, callback function: (none) */
#define  PARM_SPC_BOARDS                  59      /* control type: numeric, callback function: Setting */
#define  PARM_SPC_ROUTINGBITS             60      /* control type: numeric, callback function: Setting */
#define  PARM_SPC_REFOLDING               61      /* control type: numeric, callback function: Setting */
#define  PARM_SPC_REPRATE                 62      /* control type: numeric, callback function: Setting */
#define  PARM_CHANN_FIRST                 63      /* control type: numeric, callback function: Setting */
#define  PARM_CHANN_LAST                  64      /* control type: numeric, callback function: Setting */
#define  PARM_CHANN_NUM                   65      /* control type: numeric, callback function: (none) */
#define  PARM_INFO_KIND                   66      /* control type: ring, callback function: Setting */
#define  PARM_INFO_APPL                   67      /* control type: ring, callback function: Setting */
#define  PARM_INFO_GEOM                   68      /* control type: ring, callback function: Setting */
#define  PARM_JUMP_LOOP                   69      /* control type: ring, callback function: Setting */
#define  PARM_JUMP_BOARD                  70      /* control type: ring, callback function: Setting */
#define  PARM_OSCILL_TIME                 71      /* control type: numeric, callback function: Setting */
#define  PARM_JUMP_MAX                    72      /* control type: numeric, callback function: Setting */
#define  PARM_POWER_STEP                  73      /* control type: ring, callback function: Setting */
#define  PARM_SYNC_SYNC                   74      /* control type: binary, callback function: Setting */
#define  PARM_SYNC_TYPE                   75      /* control type: ring, callback function: Setting */
#define  PARM_SYNC_LOOP                   76      /* control type: ring, callback function: Setting */
#define  PARM_SYNC_PATTERN                77      /* control type: ring, callback function: Setting */
#define  PARM_SYNC_DIR                    78      /* control type: ring, callback function: Setting */
#define  PARM_SYNC_WIDTH                  79      /* control type: numeric, callback function: Setting */
#define  PARM_FILE_DIR                    80      /* control type: string, callback function: Setting */
#define  PARM_FILE_EXT                    81      /* control type: string, callback function: Setting */
#define  PARM_FILE_PREFIX                 82      /* control type: string, callback function: Setting */
#define  PARM_FILE_TAG                    83      /* control type: numeric, callback function: Setting */
#define  PARM_FILE_TYPE                   84      /* control type: ring, callback function: Setting */
#define  PARM_INFO_MONITOR                85      /* control type: binary, callback function: Setting */
#define  PARM_INFO_SUBHEADER              86      /* control type: binary, callback function: Setting */
#define  PARM_LAYOUT                      87      /* control type: binary, callback function: Setting */
#define  PARM_FLAGPRESENT                 88      /* control type: binary, callback function: Setting */
#define  PARM_OMA_LOOP                    89      /* control type: ring, callback function: Setting */
#define  PARM_OPHIR_LOOP                  90      /* control type: ring, callback function: Setting */
#define  PARM_COMMENTS_TITLE              91      /* control type: textMsg, callback function: (none) */
#define  PARM_COMMENT_DATE                92      /* control type: string, callback function: (none) */
#define  PARM_COMMENT_TIME                93      /* control type: string, callback function: (none) */
#define  PARM_MEAS_STATUS                 94      /* control type: numeric, callback function: Setting */
#define  PARM_MEAS_DISPLAY                95      /* control type: numeric, callback function: Setting */
#define  PARM_MEAS_MEM                    96      /* control type: numeric, callback function: Setting */
#define  PARM_MEAS_ROI                    97      /* control type: numeric, callback function: Setting */
#define  PARM_MEAS_CLEAR                  98      /* control type: binary, callback function: Setting */
#define  PARM_MEAS_STOP                   99      /* control type: binary, callback function: Setting */
#define  PARM_MEAS_SKIPOSCILL             100     /* control type: binary, callback function: Setting */
#define  PARM_MEAS_AUTORUN                101     /* control type: binary, callback function: Setting */
#define  PARM_CONST_RHO                   102     /* control type: numeric, callback function: Setting */
#define  PARM_CONST_THICK                 103     /* control type: numeric, callback function: Setting */
#define  PARM_CONST_N                     104     /* control type: numeric, callback function: Setting */
#define  PARM_TIME_BASE                   105     /* control type: ring, callback function: Setting */
#define  PARM_READ_UIR                    106     /* control type: binary, callback function: Setting */
#define  PARM_TEXTMSG_5                   107     /* control type: textMsg, callback function: (none) */
#define  PARM_TEXTMSG_4                   108     /* control type: textMsg, callback function: (none) */
#define  PARM_TEXTMSG_3                   109     /* control type: textMsg, callback function: (none) */
#define  PARM_TEXTMSG_2                   110     /* control type: textMsg, callback function: (none) */
#define  PARM_TIME_BASE_TEXT              111     /* control type: textMsg, callback function: (none) */
#define  PARM_TITLE                       112     /* control type: textMsg, callback function: (none) */
#define  PARM_LOOP_TITLE                  113     /* control type: textMsg, callback function: (none) */
#define  PARM_TEXTMSG_1                   114     /* control type: textMsg, callback function: (none) */
#define  PARM_TEXTMSG                     115     /* control type: textMsg, callback function: (none) */
#define  PARM_MEAS_TITLE                  116     /* control type: textMsg, callback function: (none) */
#define  PARM_POWER_TITLE                 117     /* control type: textMsg, callback function: (none) */
#define  PARM_SYNC_TITLE                  118     /* control type: textMsg, callback function: (none) */
#define  PARM_OSCILL_TITLE                119     /* control type: textMsg, callback function: (none) */
#define  PARM_FILE_TITLE                  120     /* control type: textMsg, callback function: (none) */
#define  PARM_JUMP_TITLE                  121     /* control type: textMsg, callback function: (none) */
#define  PARM_INFO_TITLE                  122     /* control type: textMsg, callback function: (none) */
#define  PARM_CHANN_TITLE                 123     /* control type: textMsg, callback function: (none) */
#define  PARM_SPC_TITLE                   124     /* control type: textMsg, callback function: (none) */
#define  PARM_DCR_FILE_ROOT_TDC           125     /* control type: string, callback function: Setting */
#define  PARM_SC_SEL_REP_NUM              126     /* control type: numeric, callback function: Setting */
#define  PARM_SC1000_FIRST                127     /* control type: numeric, callback function: Setting */
#define  PARM_SC1000_LAST                 128     /* control type: numeric, callback function: Setting */

#define  PRESENT                          9       /* callback function: ClosePanel */
#define  PRESENT_TBLOCK_DEF               2       /* control type: table, callback function: Setting */
#define  PRESENT_TBLOCK_SEQUENCE          3       /* control type: table, callback function: Setting */
#define  PRESENT_ALIGN                    4       /* control type: radioButton, callback function: Setting */
#define  PRESENT_SHUFFLE                  5       /* control type: radioButton, callback function: Setting */
#define  PRESENT_TLOOP_PARTITION          6       /* control type: table, callback function: Setting */
#define  PRESENT_FSTIMULI                 7       /* control type: string, callback function: Setting */
#define  PRESENT_DSTIMULI                 8       /* control type: string, callback function: Setting */
#define  PRESENT_FPRESENT                 9       /* control type: string, callback function: Setting */
#define  PRESENT_DPRESENT                 10      /* control type: string, callback function: Setting */
#define  PRESENT_TITLE                    11      /* control type: textMsg, callback function: (none) */
#define  PRESENT_PRES_INIT_FILETEXT       12      /* control type: textMsg, callback function: (none) */
#define  PRESENT_PRES_INIT_FILETEXT_2     13      /* control type: textMsg, callback function: (none) */

#define  STEP                             10      /* callback function: ClosePanel */
#define  STEP_TEXTMSG_1                   2       /* control type: textMsg, callback function: (none) */
#define  STEP_TEXTMSG_2                   3       /* control type: textMsg, callback function: (none) */
#define  STEP_TEXTMSG_3                   4       /* control type: textMsg, callback function: (none) */
#define  STEP_TEXTMSG_4                   5       /* control type: textMsg, callback function: (none) */
#define  STEP_TEXTMSG_5                   6       /* control type: textMsg, callback function: (none) */
#define  STEP_TEXTMSG_6                   7       /* control type: textMsg, callback function: (none) */
#define  STEP_TEXTMSG_7                   8       /* control type: textMsg, callback function: (none) */
#define  STEP_TEXTMSG_8                   9       /* control type: textMsg, callback function: (none) */
#define  STEP_TEXTMSG_9                   10      /* control type: textMsg, callback function: (none) */
#define  STEP_TEXTMSG_10                  11      /* control type: textMsg, callback function: (none) */
#define  STEP_TEXTMSG_11                  12      /* control type: textMsg, callback function: (none) */
#define  STEP_TYPE_1                      13      /* control type: ring, callback function: Setting */
#define  STEP_TYPE_2                      14      /* control type: ring, callback function: Setting */
#define  STEP_TYPE_3                      15      /* control type: ring, callback function: Setting */
#define  STEP_TYPE_4                      16      /* control type: ring, callback function: Setting */
#define  STEP_TYPE_5                      17      /* control type: ring, callback function: Setting */
#define  STEP_TYPE_6                      18      /* control type: ring, callback function: Setting */
#define  STEP_TYPE_7                      19      /* control type: ring, callback function: Setting */
#define  STEP_TYPE_8                      20      /* control type: ring, callback function: Setting */
#define  STEP_TYPE_9                      21      /* control type: ring, callback function: Setting */
#define  STEP_TYPE_10                     22      /* control type: ring, callback function: Setting */
#define  STEP_TYPE_11                     23      /* control type: ring, callback function: Setting */
#define  STEP_COM_1                       24      /* control type: numeric, callback function: Setting */
#define  STEP_COM_2                       25      /* control type: numeric, callback function: Setting */
#define  STEP_COM_3                       26      /* control type: numeric, callback function: Setting */
#define  STEP_COM_4                       27      /* control type: numeric, callback function: Setting */
#define  STEP_COM_5                       28      /* control type: numeric, callback function: Setting */
#define  STEP_COM_6                       29      /* control type: numeric, callback function: Setting */
#define  STEP_COM_7                       30      /* control type: numeric, callback function: Setting */
#define  STEP_COM_8                       31      /* control type: numeric, callback function: Setting */
#define  STEP_COM_9                       32      /* control type: numeric, callback function: Setting */
#define  STEP_COM_10                      33      /* control type: numeric, callback function: Setting */
#define  STEP_COM_11                      34      /* control type: numeric, callback function: Setting */
#define  STEP_AXIS_1                      35      /* control type: ring, callback function: Setting */
#define  STEP_AXIS_2                      36      /* control type: ring, callback function: Setting */
#define  STEP_AXIS_3                      37      /* control type: ring, callback function: Setting */
#define  STEP_AXIS_4                      38      /* control type: ring, callback function: Setting */
#define  STEP_AXIS_5                      39      /* control type: ring, callback function: Setting */
#define  STEP_AXIS_6                      40      /* control type: ring, callback function: Setting */
#define  STEP_AXIS_7                      41      /* control type: ring, callback function: Setting */
#define  STEP_AXIS_8                      42      /* control type: ring, callback function: Setting */
#define  STEP_AXIS_9                      43      /* control type: ring, callback function: Setting */
#define  STEP_AXIS_10                     44      /* control type: ring, callback function: Setting */
#define  STEP_AXIS_11                     45      /* control type: ring, callback function: Setting */
#define  STEP_MODE_1                      46      /* control type: ring, callback function: Setting */
#define  STEP_MODE_2                      47      /* control type: ring, callback function: Setting */
#define  STEP_MODE_3                      48      /* control type: ring, callback function: Setting */
#define  STEP_MODE_4                      49      /* control type: ring, callback function: Setting */
#define  STEP_MODE_5                      50      /* control type: ring, callback function: Setting */
#define  STEP_MODE_6                      51      /* control type: ring, callback function: Setting */
#define  STEP_MODE_7                      52      /* control type: ring, callback function: Setting */
#define  STEP_MODE_8                      53      /* control type: ring, callback function: Setting */
#define  STEP_MODE_9                      54      /* control type: ring, callback function: Setting */
#define  STEP_MODE_10                     55      /* control type: ring, callback function: Setting */
#define  STEP_MODE_11                     56      /* control type: ring, callback function: Setting */
#define  STEP_SIGN_1                      57      /* control type: ring, callback function: Setting */
#define  STEP_SIGN_2                      58      /* control type: ring, callback function: Setting */
#define  STEP_SIGN_3                      59      /* control type: ring, callback function: Setting */
#define  STEP_SIGN_4                      60      /* control type: ring, callback function: Setting */
#define  STEP_SIGN_5                      61      /* control type: ring, callback function: Setting */
#define  STEP_SIGN_6                      62      /* control type: ring, callback function: Setting */
#define  STEP_SIGN_7                      63      /* control type: ring, callback function: Setting */
#define  STEP_SIGN_8                      64      /* control type: ring, callback function: Setting */
#define  STEP_SIGN_9                      65      /* control type: ring, callback function: Setting */
#define  STEP_SIGN_10                     66      /* control type: ring, callback function: Setting */
#define  STEP_SIGN_11                     67      /* control type: ring, callback function: Setting */
#define  STEP_LOOP_1                      68      /* control type: ring, callback function: Setting */
#define  STEP_LOOP_2                      69      /* control type: ring, callback function: Setting */
#define  STEP_LOOP_3                      70      /* control type: ring, callback function: Setting */
#define  STEP_LOOP_4                      71      /* control type: ring, callback function: Setting */
#define  STEP_LOOP_5                      72      /* control type: ring, callback function: Setting */
#define  STEP_LOOP_6                      73      /* control type: ring, callback function: Setting */
#define  STEP_LOOP_7                      74      /* control type: ring, callback function: Setting */
#define  STEP_LOOP_8                      75      /* control type: ring, callback function: Setting */
#define  STEP_LOOP_9                      76      /* control type: ring, callback function: Setting */
#define  STEP_LOOP_10                     77      /* control type: ring, callback function: Setting */
#define  STEP_LOOP_11                     78      /* control type: ring, callback function: Setting */
#define  STEP_HOLD_1                      79      /* control type: ring, callback function: Setting */
#define  STEP_HOLD_2                      80      /* control type: ring, callback function: Setting */
#define  STEP_HOLD_3                      81      /* control type: ring, callback function: Setting */
#define  STEP_HOLD_4                      82      /* control type: ring, callback function: Setting */
#define  STEP_HOLD_5                      83      /* control type: ring, callback function: Setting */
#define  STEP_HOLD_6                      84      /* control type: ring, callback function: Setting */
#define  STEP_HOLD_7                      85      /* control type: ring, callback function: Setting */
#define  STEP_HOLD_8                      86      /* control type: ring, callback function: Setting */
#define  STEP_HOLD_9                      87      /* control type: ring, callback function: Setting */
#define  STEP_HOLD_10                     88      /* control type: ring, callback function: Setting */
#define  STEP_HOLD_11                     89      /* control type: ring, callback function: Setting */
#define  STEP_LCD_1                       90      /* control type: ring, callback function: Setting */
#define  STEP_LCD_2                       91      /* control type: ring, callback function: Setting */
#define  STEP_LCD_3                       92      /* control type: ring, callback function: Setting */
#define  STEP_LCD_4                       93      /* control type: ring, callback function: Setting */
#define  STEP_LCD_5                       94      /* control type: ring, callback function: Setting */
#define  STEP_LCD_6                       95      /* control type: ring, callback function: Setting */
#define  STEP_LCD_7                       96      /* control type: ring, callback function: Setting */
#define  STEP_LCD_8                       97      /* control type: ring, callback function: Setting */
#define  STEP_LCD_9                       98      /* control type: ring, callback function: Setting */
#define  STEP_LCD_10                      99      /* control type: ring, callback function: Setting */
#define  STEP_LCD_11                      100     /* control type: ring, callback function: Setting */
#define  STEP_FNAME_1                     101     /* control type: string, callback function: Setting */
#define  STEP_FNAME_2                     102     /* control type: string, callback function: Setting */
#define  STEP_FNAME_3                     103     /* control type: string, callback function: Setting */
#define  STEP_FNAME_4                     104     /* control type: string, callback function: Setting */
#define  STEP_FNAME_5                     105     /* control type: string, callback function: Setting */
#define  STEP_FNAME_6                     106     /* control type: string, callback function: Setting */
#define  STEP_FNAME_7                     107     /* control type: string, callback function: Setting */
#define  STEP_FNAME_8                     108     /* control type: string, callback function: Setting */
#define  STEP_FNAME_9                     109     /* control type: string, callback function: Setting */
#define  STEP_FNAME_10                    110     /* control type: string, callback function: Setting */
#define  STEP_FNAME_11                    111     /* control type: string, callback function: Setting */
#define  STEP_FREQMIN_1                   112     /* control type: numeric, callback function: Setting */
#define  STEP_FREQMIN_2                   113     /* control type: numeric, callback function: Setting */
#define  STEP_FREQMIN_3                   114     /* control type: numeric, callback function: Setting */
#define  STEP_FREQMIN_4                   115     /* control type: numeric, callback function: Setting */
#define  STEP_FREQMIN_5                   116     /* control type: numeric, callback function: Setting */
#define  STEP_FREQMIN_6                   117     /* control type: numeric, callback function: Setting */
#define  STEP_FREQMIN_7                   118     /* control type: numeric, callback function: Setting */
#define  STEP_FREQMIN_8                   119     /* control type: numeric, callback function: Setting */
#define  STEP_FREQMIN_9                   120     /* control type: numeric, callback function: Setting */
#define  STEP_FREQMIN_10                  121     /* control type: numeric, callback function: Setting */
#define  STEP_FREQMIN_11                  122     /* control type: numeric, callback function: Setting */
#define  STEP_FREQMAX_1                   123     /* control type: numeric, callback function: Setting */
#define  STEP_FREQMAX_2                   124     /* control type: numeric, callback function: Setting */
#define  STEP_FREQMAX_3                   125     /* control type: numeric, callback function: Setting */
#define  STEP_FREQMAX_4                   126     /* control type: numeric, callback function: Setting */
#define  STEP_FREQMAX_5                   127     /* control type: numeric, callback function: Setting */
#define  STEP_FREQMAX_6                   128     /* control type: numeric, callback function: Setting */
#define  STEP_FREQMAX_7                   129     /* control type: numeric, callback function: Setting */
#define  STEP_FREQMAX_8                   130     /* control type: numeric, callback function: Setting */
#define  STEP_FREQMAX_9                   131     /* control type: numeric, callback function: Setting */
#define  STEP_FREQMAX_10                  132     /* control type: numeric, callback function: Setting */
#define  STEP_FREQMAX_11                  133     /* control type: numeric, callback function: Setting */
#define  STEP_FREQ_1                      134     /* control type: numeric, callback function: Setting */
#define  STEP_FREQ_2                      135     /* control type: numeric, callback function: Setting */
#define  STEP_FREQ_3                      136     /* control type: numeric, callback function: Setting */
#define  STEP_FREQ_4                      137     /* control type: numeric, callback function: Setting */
#define  STEP_FREQ_5                      138     /* control type: numeric, callback function: Setting */
#define  STEP_FREQ_6                      139     /* control type: numeric, callback function: Setting */
#define  STEP_FREQ_7                      140     /* control type: numeric, callback function: Setting */
#define  STEP_FREQ_8                      141     /* control type: numeric, callback function: Setting */
#define  STEP_FREQ_9                      142     /* control type: numeric, callback function: Setting */
#define  STEP_FREQ_10                     143     /* control type: numeric, callback function: Setting */
#define  STEP_FREQ_11                     144     /* control type: numeric, callback function: Setting */
#define  STEP_FREQDELTA_1                 145     /* control type: numeric, callback function: Setting */
#define  STEP_FREQDELTA_2                 146     /* control type: numeric, callback function: Setting */
#define  STEP_FREQDELTA_3                 147     /* control type: numeric, callback function: Setting */
#define  STEP_FREQDELTA_4                 148     /* control type: numeric, callback function: Setting */
#define  STEP_FREQDELTA_5                 149     /* control type: numeric, callback function: Setting */
#define  STEP_FREQDELTA_6                 150     /* control type: numeric, callback function: Setting */
#define  STEP_FREQDELTA_7                 151     /* control type: numeric, callback function: Setting */
#define  STEP_FREQDELTA_8                 152     /* control type: numeric, callback function: Setting */
#define  STEP_FREQDELTA_9                 153     /* control type: numeric, callback function: Setting */
#define  STEP_FREQDELTA_10                154     /* control type: numeric, callback function: Setting */
#define  STEP_FREQDELTA_11                155     /* control type: numeric, callback function: Setting */
#define  STEP_FACTOR_1                    156     /* control type: numeric, callback function: Setting */
#define  STEP_FACTOR_2                    157     /* control type: numeric, callback function: Setting */
#define  STEP_FACTOR_3                    158     /* control type: numeric, callback function: Setting */
#define  STEP_FACTOR_4                    159     /* control type: numeric, callback function: Setting */
#define  STEP_FACTOR_5                    160     /* control type: numeric, callback function: Setting */
#define  STEP_FACTOR_6                    161     /* control type: numeric, callback function: Setting */
#define  STEP_FACTOR_7                    162     /* control type: numeric, callback function: Setting */
#define  STEP_FACTOR_8                    163     /* control type: numeric, callback function: Setting */
#define  STEP_FACTOR_9                    164     /* control type: numeric, callback function: Setting */
#define  STEP_FACTOR_10                   165     /* control type: numeric, callback function: Setting */
#define  STEP_FACTOR_11                   166     /* control type: numeric, callback function: Setting */
#define  STEP_SORT_1                      167     /* control type: binary, callback function: Setting */
#define  STEP_SORT_2                      168     /* control type: binary, callback function: Setting */
#define  STEP_SORT_3                      169     /* control type: binary, callback function: Setting */
#define  STEP_SORT_4                      170     /* control type: binary, callback function: Setting */
#define  STEP_SORT_5                      171     /* control type: binary, callback function: Setting */
#define  STEP_SORT_6                      172     /* control type: binary, callback function: Setting */
#define  STEP_SORT_7                      173     /* control type: binary, callback function: Setting */
#define  STEP_SORT_8                      174     /* control type: binary, callback function: Setting */
#define  STEP_SORT_9                      175     /* control type: binary, callback function: Setting */
#define  STEP_SORT_10                     176     /* control type: binary, callback function: Setting */
#define  STEP_SORT_11                     177     /* control type: binary, callback function: Setting */
#define  STEP_TITLE                       178     /* control type: textMsg, callback function: (none) */

#define  SWITCH                           11      /* callback function: ClosePanel */
#define  SWITCH_SWITCH_1                  2       /* control type: binary, callback function: Setting */
#define  SWITCH_SWITCH_2                  3       /* control type: binary, callback function: Setting */
#define  SWITCH_SWITCH_3                  4       /* control type: binary, callback function: Setting */
#define  SWITCH_SWITCH_4                  5       /* control type: binary, callback function: Setting */
#define  SWITCH_SWITCH_5                  6       /* control type: binary, callback function: Setting */
#define  SWITCH_SWITCH_6                  7       /* control type: binary, callback function: Setting */
#define  SWITCH_SWITCH_7                  8       /* control type: binary, callback function: Setting */
#define  SWITCH_SWITCH_8                  9       /* control type: binary, callback function: Setting */
#define  SWITCH_SWITCH_9                  10      /* control type: binary, callback function: Setting */
#define  SWITCH_SWITCH_10                 11      /* control type: binary, callback function: Setting */
#define  SWITCH_DEVICE_1                  12      /* control type: ring, callback function: Setting */
#define  SWITCH_DEVICE_2                  13      /* control type: ring, callback function: Setting */
#define  SWITCH_DEVICE_3                  14      /* control type: ring, callback function: Setting */
#define  SWITCH_DEVICE_4                  15      /* control type: ring, callback function: Setting */
#define  SWITCH_DEVICE_5                  16      /* control type: ring, callback function: Setting */
#define  SWITCH_DEVICE_6                  17      /* control type: ring, callback function: Setting */
#define  SWITCH_DEVICE_7                  18      /* control type: ring, callback function: Setting */
#define  SWITCH_DEVICE_8                  19      /* control type: ring, callback function: Setting */
#define  SWITCH_DEVICE_9                  20      /* control type: ring, callback function: Setting */
#define  SWITCH_DEVICE_10                 21      /* control type: ring, callback function: Setting */
#define  SWITCH_TYPE_1                    22      /* control type: ring, callback function: Setting */
#define  SWITCH_TYPE_2                    23      /* control type: ring, callback function: Setting */
#define  SWITCH_TYPE_3                    24      /* control type: ring, callback function: Setting */
#define  SWITCH_TYPE_4                    25      /* control type: ring, callback function: Setting */
#define  SWITCH_TYPE_5                    26      /* control type: ring, callback function: Setting */
#define  SWITCH_TYPE_6                    27      /* control type: ring, callback function: Setting */
#define  SWITCH_TYPE_7                    28      /* control type: ring, callback function: Setting */
#define  SWITCH_TYPE_8                    29      /* control type: ring, callback function: Setting */
#define  SWITCH_TYPE_9                    30      /* control type: ring, callback function: Setting */
#define  SWITCH_TYPE_10                   31      /* control type: ring, callback function: Setting */
#define  SWITCH_BOARD_1                   32      /* control type: ring, callback function: Setting */
#define  SWITCH_BOARD_2                   33      /* control type: ring, callback function: Setting */
#define  SWITCH_BOARD_3                   34      /* control type: ring, callback function: Setting */
#define  SWITCH_BOARD_4                   35      /* control type: ring, callback function: Setting */
#define  SWITCH_BOARD_5                   36      /* control type: ring, callback function: Setting */
#define  SWITCH_BOARD_6                   37      /* control type: ring, callback function: Setting */
#define  SWITCH_BOARD_7                   38      /* control type: ring, callback function: Setting */
#define  SWITCH_BOARD_8                   39      /* control type: ring, callback function: Setting */
#define  SWITCH_BOARD_9                   40      /* control type: ring, callback function: Setting */
#define  SWITCH_BOARD_10                  41      /* control type: ring, callback function: Setting */
#define  SWITCH_PORT_1                    42      /* control type: ring, callback function: Setting */
#define  SWITCH_PORT_2                    43      /* control type: ring, callback function: Setting */
#define  SWITCH_PORT_3                    44      /* control type: ring, callback function: Setting */
#define  SWITCH_PORT_4                    45      /* control type: ring, callback function: Setting */
#define  SWITCH_PORT_5                    46      /* control type: ring, callback function: Setting */
#define  SWITCH_PORT_6                    47      /* control type: ring, callback function: Setting */
#define  SWITCH_PORT_7                    48      /* control type: ring, callback function: Setting */
#define  SWITCH_PORT_8                    49      /* control type: ring, callback function: Setting */
#define  SWITCH_PORT_9                    50      /* control type: ring, callback function: Setting */
#define  SWITCH_PORT_10                   51      /* control type: ring, callback function: Setting */
#define  SWITCH_LINE0_1                   52      /* control type: ring, callback function: Setting */
#define  SWITCH_LINE0_2                   53      /* control type: ring, callback function: Setting */
#define  SWITCH_LINE0_3                   54      /* control type: ring, callback function: Setting */
#define  SWITCH_LINE0_4                   55      /* control type: ring, callback function: Setting */
#define  SWITCH_LINE0_5                   56      /* control type: ring, callback function: Setting */
#define  SWITCH_LINE0_6                   57      /* control type: ring, callback function: Setting */
#define  SWITCH_LINE0_7                   58      /* control type: ring, callback function: Setting */
#define  SWITCH_LINE0_8                   59      /* control type: ring, callback function: Setting */
#define  SWITCH_LINE0_9                   60      /* control type: ring, callback function: Setting */
#define  SWITCH_LINE0_10                  61      /* control type: ring, callback function: Setting */
#define  SWITCH_MODE_1                    62      /* control type: ring, callback function: Setting */
#define  SWITCH_MODE_4                    63      /* control type: ring, callback function: Setting */
#define  SWITCH_MODE_6                    64      /* control type: ring, callback function: Setting */
#define  SWITCH_MODE_8                    65      /* control type: ring, callback function: Setting */
#define  SWITCH_MODE_10                   66      /* control type: ring, callback function: Setting */
#define  SWITCH_MODE_12                   67      /* control type: ring, callback function: Setting */
#define  SWITCH_MODE_14                   68      /* control type: ring, callback function: Setting */
#define  SWITCH_MODE_16                   69      /* control type: ring, callback function: Setting */
#define  SWITCH_MODE_18                   70      /* control type: ring, callback function: Setting */
#define  SWITCH_MODE_20                   71      /* control type: ring, callback function: Setting */
#define  SWITCH_LOOP_1                    72      /* control type: ring, callback function: Setting */
#define  SWITCH_LOOP_2                    73      /* control type: ring, callback function: Setting */
#define  SWITCH_LOOP_3                    74      /* control type: ring, callback function: Setting */
#define  SWITCH_LOOP_4                    75      /* control type: ring, callback function: Setting */
#define  SWITCH_LOOP_5                    76      /* control type: ring, callback function: Setting */
#define  SWITCH_LOOP_6                    77      /* control type: ring, callback function: Setting */
#define  SWITCH_LOOP_7                    78      /* control type: ring, callback function: Setting */
#define  SWITCH_LOOP_8                    79      /* control type: ring, callback function: Setting */
#define  SWITCH_LOOP_9                    80      /* control type: ring, callback function: Setting */
#define  SWITCH_LOOP_10                   81      /* control type: ring, callback function: Setting */
#define  SWITCH_FNAME_1                   82      /* control type: string, callback function: Setting */
#define  SWITCH_FNAME_2                   83      /* control type: string, callback function: Setting */
#define  SWITCH_FNAME_3                   84      /* control type: string, callback function: Setting */
#define  SWITCH_FNAME_4                   85      /* control type: string, callback function: Setting */
#define  SWITCH_FNAME_5                   86      /* control type: string, callback function: Setting */
#define  SWITCH_FNAME_6                   87      /* control type: string, callback function: Setting */
#define  SWITCH_FNAME_7                   88      /* control type: string, callback function: Setting */
#define  SWITCH_FNAME_8                   89      /* control type: string, callback function: Setting */
#define  SWITCH_FNAME_9                   90      /* control type: string, callback function: Setting */
#define  SWITCH_FNAME_10                  91      /* control type: string, callback function: Setting */
#define  SWITCH_TEXTMSG_1                 92      /* control type: textMsg, callback function: (none) */
#define  SWITCH_TEXTMSG_2                 93      /* control type: textMsg, callback function: (none) */
#define  SWITCH_TEXTMSG_4                 94      /* control type: textMsg, callback function: (none) */
#define  SWITCH_TEXTMSG_5                 95      /* control type: textMsg, callback function: (none) */
#define  SWITCH_TEXTMSG_6                 96      /* control type: textMsg, callback function: (none) */
#define  SWITCH_TEXTMSG_7                 97      /* control type: textMsg, callback function: (none) */
#define  SWITCH_TEXTMSG_8                 98      /* control type: textMsg, callback function: (none) */
#define  SWITCH_TEXTMSG_10                99      /* control type: textMsg, callback function: (none) */
#define  SWITCH_TEXTMSG_9                 100     /* control type: textMsg, callback function: (none) */
#define  SWITCH_TEXTMSG_3                 101     /* control type: textMsg, callback function: (none) */
#define  SWITCH_TITLE                     102     /* control type: textMsg, callback function: (none) */

#define  TRIM                             12      /* callback function: ClosePanel */
#define  TRIM_STEP_1                      2       /* control type: ring, callback function: Setting */
#define  TRIM_STEP_2                      3       /* control type: ring, callback function: Setting */
#define  TRIM_STEP_3                      4       /* control type: ring, callback function: Setting */
#define  TRIM_STEP_4                      5       /* control type: ring, callback function: Setting */
#define  TRIM_STEP_5                      6       /* control type: ring, callback function: Setting */
#define  TRIM_STEP_6                      7       /* control type: ring, callback function: Setting */
#define  TRIM_STEP_7                      8       /* control type: ring, callback function: Setting */
#define  TRIM_STEP_8                      9       /* control type: ring, callback function: Setting */
#define  TRIM_STEP_9                      10      /* control type: ring, callback function: Setting */
#define  TRIM_STEP_10                     11      /* control type: ring, callback function: Setting */
#define  TRIM_TYPE_1                      12      /* control type: ring, callback function: Setting */
#define  TRIM_TYPE_2                      13      /* control type: ring, callback function: Setting */
#define  TRIM_TYPE_3                      14      /* control type: ring, callback function: Setting */
#define  TRIM_TYPE_4                      15      /* control type: ring, callback function: Setting */
#define  TRIM_TYPE_5                      16      /* control type: ring, callback function: Setting */
#define  TRIM_TYPE_6                      17      /* control type: ring, callback function: Setting */
#define  TRIM_TYPE_7                      18      /* control type: ring, callback function: Setting */
#define  TRIM_TYPE_8                      19      /* control type: ring, callback function: Setting */
#define  TRIM_TYPE_9                      20      /* control type: ring, callback function: Setting */
#define  TRIM_TYPE_10                     21      /* control type: ring, callback function: Setting */
#define  TRIM_TARGET_1                    22      /* control type: ring, callback function: Setting */
#define  TRIM_TARGET_2                    23      /* control type: ring, callback function: Setting */
#define  TRIM_TARGET_3                    24      /* control type: ring, callback function: Setting */
#define  TRIM_TARGET_4                    25      /* control type: ring, callback function: Setting */
#define  TRIM_TARGET_5                    26      /* control type: ring, callback function: Setting */
#define  TRIM_TARGET_6                    27      /* control type: ring, callback function: Setting */
#define  TRIM_TARGET_7                    28      /* control type: ring, callback function: Setting */
#define  TRIM_TARGET_8                    29      /* control type: ring, callback function: Setting */
#define  TRIM_TARGET_9                    30      /* control type: ring, callback function: Setting */
#define  TRIM_TARGET_10                   31      /* control type: ring, callback function: Setting */
#define  TRIM_GOAL_1                      32      /* control type: numeric, callback function: Setting */
#define  TRIM_GOAL_2                      33      /* control type: numeric, callback function: Setting */
#define  TRIM_GOAL_3                      34      /* control type: numeric, callback function: Setting */
#define  TRIM_GOAL_4                      35      /* control type: numeric, callback function: Setting */
#define  TRIM_GOAL_5                      36      /* control type: numeric, callback function: Setting */
#define  TRIM_GOAL_6                      37      /* control type: numeric, callback function: Setting */
#define  TRIM_GOAL_7                      38      /* control type: numeric, callback function: Setting */
#define  TRIM_GOAL_8                      39      /* control type: numeric, callback function: Setting */
#define  TRIM_GOAL_9                      40      /* control type: numeric, callback function: Setting */
#define  TRIM_GOAL_10                     41      /* control type: numeric, callback function: Setting */
#define  TRIM_SIGN_1                      42      /* control type: ring, callback function: Setting */
#define  TRIM_SIGN_2                      43      /* control type: ring, callback function: Setting */
#define  TRIM_SIGN_3                      44      /* control type: ring, callback function: Setting */
#define  TRIM_SIGN_4                      45      /* control type: ring, callback function: Setting */
#define  TRIM_SIGN_5                      46      /* control type: ring, callback function: Setting */
#define  TRIM_SIGN_6                      47      /* control type: ring, callback function: Setting */
#define  TRIM_SIGN_7                      48      /* control type: ring, callback function: Setting */
#define  TRIM_SIGN_8                      49      /* control type: ring, callback function: Setting */
#define  TRIM_SIGN_9                      50      /* control type: ring, callback function: Setting */
#define  TRIM_SIGN_10                     51      /* control type: ring, callback function: Setting */
#define  TRIM_REGION_1                    52      /* control type: ring, callback function: Setting */
#define  TRIM_REGION_2                    53      /* control type: ring, callback function: Setting */
#define  TRIM_REGION_3                    54      /* control type: ring, callback function: Setting */
#define  TRIM_REGION_4                    55      /* control type: ring, callback function: Setting */
#define  TRIM_REGION_5                    56      /* control type: ring, callback function: Setting */
#define  TRIM_REGION_6                    57      /* control type: ring, callback function: Setting */
#define  TRIM_REGION_7                    58      /* control type: ring, callback function: Setting */
#define  TRIM_REGION_8                    59      /* control type: ring, callback function: Setting */
#define  TRIM_REGION_9                    60      /* control type: ring, callback function: Setting */
#define  TRIM_REGION_10                   61      /* control type: ring, callback function: Setting */
#define  TRIM_FRACT_1                     62      /* control type: numeric, callback function: Setting */
#define  TRIM_FRACT_2                     63      /* control type: numeric, callback function: Setting */
#define  TRIM_FRACT_3                     64      /* control type: numeric, callback function: Setting */
#define  TRIM_FRACT_4                     65      /* control type: numeric, callback function: Setting */
#define  TRIM_FRACT_5                     66      /* control type: numeric, callback function: Setting */
#define  TRIM_FRACT_6                     67      /* control type: numeric, callback function: Setting */
#define  TRIM_FRACT_7                     68      /* control type: numeric, callback function: Setting */
#define  TRIM_FRACT_8                     69      /* control type: numeric, callback function: Setting */
#define  TRIM_FRACT_9                     70      /* control type: numeric, callback function: Setting */
#define  TRIM_FRACT_10                    71      /* control type: numeric, callback function: Setting */
#define  TRIM_TIME_1                      72      /* control type: numeric, callback function: Setting */
#define  TRIM_TIME_2                      73      /* control type: numeric, callback function: Setting */
#define  TRIM_TIME_3                      74      /* control type: numeric, callback function: Setting */
#define  TRIM_TIME_4                      75      /* control type: numeric, callback function: Setting */
#define  TRIM_TIME_5                      76      /* control type: numeric, callback function: Setting */
#define  TRIM_TIME_6                      77      /* control type: numeric, callback function: Setting */
#define  TRIM_TIME_7                      78      /* control type: numeric, callback function: Setting */
#define  TRIM_TIME_8                      79      /* control type: numeric, callback function: Setting */
#define  TRIM_TIME_9                      80      /* control type: numeric, callback function: Setting */
#define  TRIM_TIME_10                     81      /* control type: numeric, callback function: Setting */
#define  TRIM_DELTA_1                     82      /* control type: numeric, callback function: Setting */
#define  TRIM_DELTA_2                     83      /* control type: numeric, callback function: Setting */
#define  TRIM_DELTA_3                     84      /* control type: numeric, callback function: Setting */
#define  TRIM_DELTA_4                     85      /* control type: numeric, callback function: Setting */
#define  TRIM_DELTA_5                     86      /* control type: numeric, callback function: Setting */
#define  TRIM_DELTA_6                     87      /* control type: numeric, callback function: Setting */
#define  TRIM_DELTA_7                     88      /* control type: numeric, callback function: Setting */
#define  TRIM_DELTA_8                     89      /* control type: numeric, callback function: Setting */
#define  TRIM_DELTA_9                     90      /* control type: numeric, callback function: Setting */
#define  TRIM_DELTA_10                    91      /* control type: numeric, callback function: Setting */
#define  TRIM_NUM_1                       92      /* control type: numeric, callback function: Setting */
#define  TRIM_NUM_2                       93      /* control type: numeric, callback function: Setting */
#define  TRIM_NUM_3                       94      /* control type: numeric, callback function: Setting */
#define  TRIM_NUM_4                       95      /* control type: numeric, callback function: Setting */
#define  TRIM_NUM_5                       96      /* control type: numeric, callback function: Setting */
#define  TRIM_NUM_6                       97      /* control type: numeric, callback function: Setting */
#define  TRIM_NUM_7                       98      /* control type: numeric, callback function: Setting */
#define  TRIM_NUM_8                       99      /* control type: numeric, callback function: Setting */
#define  TRIM_NUM_9                       100     /* control type: numeric, callback function: Setting */
#define  TRIM_NUM_10                      101     /* control type: numeric, callback function: Setting */
#define  TRIM_DIR_1                       102     /* control type: ring, callback function: Setting */
#define  TRIM_DIR_2                       103     /* control type: ring, callback function: Setting */
#define  TRIM_DIR_3                       104     /* control type: ring, callback function: Setting */
#define  TRIM_DIR_4                       105     /* control type: ring, callback function: Setting */
#define  TRIM_DIR_5                       106     /* control type: ring, callback function: Setting */
#define  TRIM_DIR_6                       107     /* control type: ring, callback function: Setting */
#define  TRIM_DIR_7                       108     /* control type: ring, callback function: Setting */
#define  TRIM_DIR_8                       109     /* control type: ring, callback function: Setting */
#define  TRIM_DIR_9                       110     /* control type: ring, callback function: Setting */
#define  TRIM_DIR_10                      111     /* control type: ring, callback function: Setting */
#define  TRIM_BREAK_1                     112     /* control type: ring, callback function: Setting */
#define  TRIM_BREAK_2                     113     /* control type: ring, callback function: Setting */
#define  TRIM_BREAK_3                     114     /* control type: ring, callback function: Setting */
#define  TRIM_BREAK_4                     115     /* control type: ring, callback function: Setting */
#define  TRIM_BREAK_5                     116     /* control type: ring, callback function: Setting */
#define  TRIM_BREAK_6                     117     /* control type: ring, callback function: Setting */
#define  TRIM_BREAK_7                     118     /* control type: ring, callback function: Setting */
#define  TRIM_BREAK_8                     119     /* control type: ring, callback function: Setting */
#define  TRIM_BREAK_9                     120     /* control type: ring, callback function: Setting */
#define  TRIM_BREAK_10                    121     /* control type: ring, callback function: Setting */
#define  TRIM_DISPLAY_1                   122     /* control type: binary, callback function: Setting */
#define  TRIM_DISPLAY_2                   123     /* control type: binary, callback function: Setting */
#define  TRIM_DISPLAY_3                   124     /* control type: binary, callback function: Setting */
#define  TRIM_DISPLAY_4                   125     /* control type: binary, callback function: Setting */
#define  TRIM_DISPLAY_5                   126     /* control type: binary, callback function: Setting */
#define  TRIM_DISPLAY_6                   127     /* control type: binary, callback function: Setting */
#define  TRIM_DISPLAY_7                   128     /* control type: binary, callback function: Setting */
#define  TRIM_DISPLAY_8                   129     /* control type: binary, callback function: Setting */
#define  TRIM_DISPLAY_9                   130     /* control type: binary, callback function: Setting */
#define  TRIM_DISPLAY_10                  131     /* control type: binary, callback function: Setting */
#define  TRIM_STATUS_1                    132     /* control type: binary, callback function: Setting */
#define  TRIM_STATUS_2                    133     /* control type: binary, callback function: Setting */
#define  TRIM_STATUS_3                    134     /* control type: binary, callback function: Setting */
#define  TRIM_STATUS_4                    135     /* control type: binary, callback function: Setting */
#define  TRIM_STATUS_5                    136     /* control type: binary, callback function: Setting */
#define  TRIM_STATUS_6                    137     /* control type: binary, callback function: Setting */
#define  TRIM_STATUS_7                    138     /* control type: binary, callback function: Setting */
#define  TRIM_STATUS_8                    139     /* control type: binary, callback function: Setting */
#define  TRIM_STATUS_9                    140     /* control type: binary, callback function: Setting */
#define  TRIM_STATUS_10                   141     /* control type: binary, callback function: Setting */
#define  TRIM_PROMPT_1                    142     /* control type: binary, callback function: Setting */
#define  TRIM_PROMPT_2                    143     /* control type: binary, callback function: Setting */
#define  TRIM_PROMPT_3                    144     /* control type: binary, callback function: Setting */
#define  TRIM_PROMPT_4                    145     /* control type: binary, callback function: Setting */
#define  TRIM_PROMPT_5                    146     /* control type: binary, callback function: Setting */
#define  TRIM_PROMPT_6                    147     /* control type: binary, callback function: Setting */
#define  TRIM_PROMPT_7                    148     /* control type: binary, callback function: Setting */
#define  TRIM_PROMPT_8                    149     /* control type: binary, callback function: Setting */
#define  TRIM_PROMPT_9                    150     /* control type: binary, callback function: Setting */
#define  TRIM_PROMPT_10                   151     /* control type: binary, callback function: Setting */
#define  TRIM_FNAME_1                     152     /* control type: string, callback function: Setting */
#define  TRIM_FNAME_2                     153     /* control type: string, callback function: Setting */
#define  TRIM_FNAME_3                     154     /* control type: string, callback function: Setting */
#define  TRIM_FNAME_4                     155     /* control type: string, callback function: Setting */
#define  TRIM_FNAME_5                     156     /* control type: string, callback function: Setting */
#define  TRIM_FNAME_6                     157     /* control type: string, callback function: Setting */
#define  TRIM_FNAME_7                     158     /* control type: string, callback function: Setting */
#define  TRIM_FNAME_8                     159     /* control type: string, callback function: Setting */
#define  TRIM_FNAME_9                     160     /* control type: string, callback function: Setting */
#define  TRIM_FNAME_10                    161     /* control type: string, callback function: Setting */
#define  TRIM_TEXTMSG_1                   162     /* control type: textMsg, callback function: (none) */
#define  TRIM_TEXTMSG_2                   163     /* control type: textMsg, callback function: (none) */
#define  TRIM_TEXTMSG_3                   164     /* control type: textMsg, callback function: (none) */
#define  TRIM_TEXTMSG_4                   165     /* control type: textMsg, callback function: (none) */
#define  TRIM_TEXTMSG_5                   166     /* control type: textMsg, callback function: (none) */
#define  TRIM_TEXTMSG_6                   167     /* control type: textMsg, callback function: (none) */
#define  TRIM_TEXTMSG_7                   168     /* control type: textMsg, callback function: (none) */
#define  TRIM_TEXTMSG_8                   169     /* control type: textMsg, callback function: (none) */
#define  TRIM_TEXTMSG_9                   170     /* control type: textMsg, callback function: (none) */
#define  TRIM_TEXTMSG_10                  171     /* control type: textMsg, callback function: (none) */
#define  TRIM_TITLE                       172     /* control type: textMsg, callback function: (none) */

#define  TRS                              13      /* callback function: ClosePanel */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

#define  MENU                             1
#define  MENU_FILE                        2
#define  MENU_FILE_SAVE                   3
#define  MENU_FILE_SAVE_SUBMENU           4
#define  MENU_FILE_SAVE_ALL               5       /* callback function: SaveSetting */
#define  MENU_FILE_SAVE_SEPARATOR_3       6
#define  MENU_FILE_SAVE_DISPLAY           7       /* callback function: SaveSetting */
#define  MENU_FILE_SAVE_DOSTEP            8       /* callback function: SaveSetting */
#define  MENU_FILE_SAVE_LABEL             9       /* callback function: SaveSetting */
#define  MENU_FILE_SAVE_LAYOUT            10      /* callback function: SaveSetting */
#define  MENU_FILE_SAVE_MAMM              11      /* callback function: SaveSetting */
#define  MENU_FILE_SAVE_PARM              12      /* callback function: SaveSetting */
#define  MENU_FILE_SAVE_PRESENT           13      /* callback function: SaveSetting */
#define  MENU_FILE_SAVE_Moxy              14      /* callback function: SaveSetting */
#define  MENU_FILE_SAVE_TRIM              15      /* callback function: SaveSetting */
#define  MENU_FILE_SAVE_STEP              16      /* callback function: SaveSetting */
#define  MENU_FILE_SAVE_SWITCH            17      /* callback function: SaveSetting */
#define  MENU_FILE_SAVE_GEOMETRY          18      /* callback function: SaveSetting */
#define  MENU_FILE_LOAD                   19
#define  MENU_FILE_LOAD_SUBMENU           20
#define  MENU_FILE_LOAD_ALL               21      /* callback function: LoadSetting */
#define  MENU_FILE_LOAD_SEPARATOR_4       22
#define  MENU_FILE_LOAD_DISPLAY           23      /* callback function: LoadSetting */
#define  MENU_FILE_LOAD_DOSTEP            24      /* callback function: LoadSetting */
#define  MENU_FILE_LOAD_LABEL             25      /* callback function: LoadSetting */
#define  MENU_FILE_LOAD_LAYOUT            26      /* callback function: LoadSetting */
#define  MENU_FILE_LOAD_MAMM              27      /* callback function: LoadSetting */
#define  MENU_FILE_LOAD_PARM              28      /* callback function: LoadSetting */
#define  MENU_FILE_LOAD_PRESENT           29      /* callback function: LoadSetting */
#define  MENU_FILE_LOAD_MOXY              30      /* callback function: LoadSetting */
#define  MENU_FILE_LOAD_TRIM              31      /* callback function: LoadSetting */
#define  MENU_FILE_LOAD_STEP              32      /* callback function: LoadSetting */
#define  MENU_FILE_LOAD_SWITCH            33      /* callback function: LoadSetting */
#define  MENU_FILE_LOAD_GEOMETRY          34      /* callback function: LoadSetting */
#define  MENU_FILE_SEPARATOR              35
#define  MENU_FILE_PRINT                  36      /* callback function: Print */
#define  MENU_FILE_SEPARATOR_2            37
#define  MENU_FILE_QUIT                   38      /* callback function: Quit */
#define  MENU_WINDOW                      39
#define  MENU_WINDOW_PARM                 40      /* callback function: ShowPanel */
#define  MENU_WINDOW_DISPLAY              41      /* callback function: ShowPanel */
#define  MENU_WINDOW_TRIM                 42      /* callback function: ShowPanel */
#define  MENU_WINDOW_STEP                 43      /* callback function: ShowPanel */
#define  MENU_WINDOW_SWITCH               44      /* callback function: ShowPanel */
#define  MENU_WINDOW_GEOMETRY             45      /* callback function: ShowPanel */
#define  MENU_WINDOW_LAYOUT               46      /* callback function: ShowPanel */
#define  MENU_WINDOW_PRESENT              47      /* callback function: ShowPanel */
#define  MENU_WINDOW_MOXY                 48      /* callback function: ShowPanel */
#define  MENU_WINDOW_MAMM                 49      /* callback function: ShowPanel */
#define  MENU_WINDOW_LABEL                50      /* callback function: ShowPanel */
#define  MENU_WINDOW_DO_STEP              51      /* callback function: ShowPanel */
#define  MENU_RUN                         52
#define  MENU_RUN_MEASURE                 53      /* callback function: Measure */
#define  MENU_RUN_OSCILLOSCOPE            54      /* callback function: RunOscilloscope */
#define  MENU_HELP                        55
#define  MENU_HELP_ABOUT                  56      /* callback function: About */


     /* Callback Prototypes: */

void CVICALLBACK About(int menubar, int menuItem, void *callbackData, int panel);
int  CVICALLBACK ClosePanel(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK CreatePad(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK GetCommand(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK LoadGeom(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
void CVICALLBACK LoadSetting(int menubar, int menuItem, void *callbackData, int panel);
void CVICALLBACK Measure(int menubar, int menuItem, void *callbackData, int panel);
void CVICALLBACK Print(int menubar, int menuItem, void *callbackData, int panel);
int  CVICALLBACK PropPad(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
void CVICALLBACK Quit(int menubar, int menuItem, void *callbackData, int panel);
int  CVICALLBACK RunDoStep(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
void CVICALLBACK RunOscilloscope(int menubar, int menuItem, void *callbackData, int panel);
int  CVICALLBACK SaveGeom(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
void CVICALLBACK SaveSetting(int menubar, int menuItem, void *callbackData, int panel);
int  CVICALLBACK Setting(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK SetType(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK ShowPad(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
void CVICALLBACK ShowPanel(int menubar, int menuItem, void *callbackData, int panel);


#ifdef __cplusplus
    }
#endif
