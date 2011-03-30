/* pdp11_xq_bootrom.h: DEQNA/DELQA bootrom data
  ------------------------------------------------------------------------------

   Copyright (c) 2003-2008, David T. Hittner

   Permission is hereby granted, free of charge, to any person obtaining a
   copy of this software and associated documentation files (the "Software"),
   to deal in the Software without restriction, including without limitation
   the rights to use, copy, modify, merge, publish, distribute, sublicense,
   and/or sell copies of the Software, and to permit persons to whom the
   Software is furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in
   all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
   THE AUTHOR BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
   IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
   CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

   Except as contained in this notice, the name of the author shall not be
   used in advertising or otherwise to promote the sale, use or other dealings
   in this Software without prior written authorization from the author.

  ------------------------------------------------------------------------------

  Modification history:

  26-Mar-03  DTH  Removed 'static' declaration
  23-Mar-03  DTH  Created by extracting from merged DEQNA bootrom dumps

  ------------------------------------------------------------------------------
*/

#ifndef _PDP11_XQ_BOOTROM_H
#define _PDP11_XQ_BOOTROM_H

#ifdef VM_PDP11
  /*
  Bootrom code is from merged file 23-334e5.bin, offset 050000, for 4096. bytes.

  Word 0: NOP
  Word 1: Branch to extended primary boot
  Word 2: Branch/Vector to Citizenship tests
  Word 3: Offset from beginning to checksum word

  See INIQNA.MAR for further information on format and contents.
  */

  uint16 xq_bootrom[] = {
    0000240,0000423,0000546,0007776,0000520,0000000,0100000,0100000,
    0002000,0176000,0000000,0000000,0100000,0100000,0006000,0176000,
    0000000,0000000,0100000,0020000,0140000,0012706,0001776,0010046,
    0012761,0000014,0000004,0005061,0000006,0012761,0001010,0000016,
    0005000,0005300,0001376,0005061,0000016,0005000,0005300,0001376,
    0012761,0000002,0000016,0005061,0000016,0042767,0037777,0177664,
    0026767,0177660,0177702,0001057,0042767,0037777,0177652,0026767,
    0177646,0177664,0001050,0042767,0037777,0177650,0026767,0177644,
    0177646,0001041,0012704,0007776,0005003,0005002,0116200,0002000,
    0005202,0042700,0177400,0060003,0005304,0001370,0013700,0000006,
    0026003,0002000,0001020,0000137,0002010,0012702,0012000,0004767,
    0000040,0005700,0001010,0011602,0001002,0000167,0004530,0022702,
    0000777,0103001,0000112,0013703,0000012,0001401,0000113,0000000,
    0000776,0010637,0000764,0062701,0000016,0032761,0100000,0177776,
    0001421,0052761,0020000,0177776,0012703,0000777,0005000,0005300,
    0001376,0032761,0016000,0177776,0001405,0005303,0001370,0012700,
    0000200,0000454,0004767,0000136,0052711,0000002,0042711,0000002,
    0012703,0017777,0005303,0001376,0004567,0003514,0177700,0001014,
    0005712,0001014,0032762,0002000,0000050,0001402,0052711,0002000,
    0004567,0003464,0177622,0001402,0052712,0000100,0012711,0000002,
    0005011,0012703,0017777,0005303,0001376,0011100,0042700,0064000,
    0022700,0010060,0001402,0052712,0000100,0011200,0162701,0000016,
    0000207,0052400,0177652,0013746,0000034,0013746,0000036,0010703,
    0062703,0000210,0010337,0000034,0012737,0000340,0000036,0104400,
    0012637,0000036,0012637,0000034,0013700,0000762,0052700,0000340,
    0062703,0000010,0010337,0000004,0010037,0000006,0010637,0000766,
    0010137,0000772,0010237,0000770,0062703,0000012,0010337,0000024,
    0010037,0000026,0062703,0000022,0012761,0000774,0177776,0052761,
    0100000,0177776,0010337,0000774,0010037,0000776,0005062,0000002,
    0005012,0012700,0000162,0060200,0012704,0000112,0005020,0005304,
    0001375,0004567,0003202,0177666,0001434,0005262,0000002,0022762,
    0000002,0000002,0003355,0000207,0016637,0000002,0000762,0000006,
    0052712,0002000,0013706,0000764,0000207,0052712,0020000,0013706,
    0000766,0013701,0000772,0013702,0000770,0000207,0052712,0004000,
    0000002,0106427,0000000,0010103,0162703,0000016,0010204,0062704,
    0000012,0012705,0000006,0012300,0110024,0005305,0001374,0010204,
    0062704,0000012,0010405,0005724,0001004,0005724,0001002,0005714,
    0001421,0010504,0012700,0177777,0020024,0001016,0020024,0001014,
    0020014,0001410,0001011,0010504,0022724,0000252,0001003,0122714,
    0000004,0103002,0052712,0000001,0012700,0177777,0004767,0003314,
    0013705,0000774,0010703,0062703,0000044,0010337,0000774,0052711,
    0000100,0010461,0177772,0005000,0010061,0177774,0012703,0010000,
    0005303,0001376,0052712,0004000,0000207,0062706,0000004,0010537,
    0000774,0005200,0001767,0011100,0032700,0000200,0001763,0011400,
    0042700,0037777,0022700,0140000,0001355,0005764,0000010,0001752,
    0005764,0000012,0001747,0052711,0000002,0042711,0000002,0012711,
    0002000,0106437,0000762,0004567,0002576,0177666,0001402,0000207,
    0010703,0062703,0177160,0010362,0000002,0010362,0000006,0062703,
    0000005,0010362,0000004,0005062,0000010,0010203,0062703,0000162,
    0012700,0000002,0012705,0000006,0105023,0012704,0000007,0026262,
    0000004,0000006,0003003,0016262,0000002,0000006,0117223,0000006,
    0005262,0000006,0005304,0001363,0005305,0001356,0012704,0000020,
    0105023,0005304,0001375,0005300,0001345,0004567,0002432,0177705,
    0001403,0052712,0000002,0000207,0005262,0000010,0022762,0000764,
    0000010,0003323,0042761,0100000,0177776,0005062,0000006,0010204,
    0062704,0000163,0010462,0000010,0005304,0012703,0000060,0105024,
    0005303,0001375,0062762,0000010,0000002,0016262,0000010,0000002,
    0012762,0000060,0000004,0105062,0000012,0000261,0106162,0000012,
    0103041,0106162,0000012,0062762,0000010,0000002,0000433,0016204,
    0000010,0005304,0012703,0000060,0112724,0000377,0005303,0001374,
    0012762,0000060,0000004,0016262,0000010,0000002,0112762,0000377,
    0000012,0000241,0106162,0000012,0103405,0106162,0000012,0062762,
    0000010,0000002,0016204,0000002,0012703,0000007,0105064,0177770,
    0116224,0000012,0005303,0001372,0004567,0002154,0177750,0001402,
    0000167,0000414,0005762,0000006,0001011,0000241,0106172,0000002,
    0103010,0106072,0000002,0106072,0000002,0000403,0000261,0106172,
    0000002,0016204,0000010,0010203,0062703,0004362,0012700,0000006,
    0111423,0062704,0000010,0005300,0001373,0012711,0000001,0012700,
    0177775,0004767,0002352,0010461,0177766,0005061,0177770,0004767,
    0002372,0010461,0177772,0005061,0177774,0012700,0077777,0032711,
    0100000,0001003,0005300,0001373,0000523,0005000,0004567,0002412,
    0000000,0040000,0001115,0016204,0000010,0005204,0010203,0062703,
    0004362,0012700,0000006,0111423,0062704,0000010,0005300,0001373,
    0042711,0100200,0012700,0177775,0004767,0002224,0010461,0177766,
    0005061,0177770,0012700,0177775,0004767,0002240,0010461,0177772,
    0005061,0177774,0012700,0077777,0032711,0100000,0001003,0005300,
    0001373,0000454,0005000,0004567,0002260,0000000,0000000,0001040,
    0042711,0000001,0010204,0062704,0001362,0010205,0062705,0004362,
    0012700,0000006,0122425,0001024,0005300,0001374,0005362,0000004,
    0001007,0005762,0000006,0001034,0005262,0000006,0000167,0177256,
    0005762,0000006,0001002,0000167,0177222,0000261,0000167,0177304,
    0052712,0000004,0000405,0052712,0004000,0000402,0052712,0001004,
    0052761,0100000,0177776,0000207,0000074,0001422,0002752,0177777,
    0052761,0100000,0177776,0052711,0001000,0010703,0062703,0176046,
    0010362,0000002,0010362,0000006,0062703,0000004,0010362,0000004,
    0010703,0062703,0177726,0010362,0000010,0010203,0062703,0004362,
    0017205,0000010,0026262,0000004,0000006,0003003,0016262,0000002,
    0000006,0117223,0000006,0005262,0000006,0005305,0001363,0017200,
    0000010,0004567,0001536,0103425,0017200,0000010,0004567,0001752,
    0000000,0020000,0001401,0000003,0010204,0062704,0001362,0010205,
    0062705,0004362,0017200,0000010,0122425,0001003,0005300,0001374,
    0000403,0052712,0000010,0000207,0062762,0000002,0000010,0022772,
    0177777,0000010,0001402,0000167,0177620,0012700,0177770,0004767,
    0001536,0010461,0177766,0005061,0177770,0010203,0062703,0000040,
    0010304,0012700,0000010,0012723,0100000,0012723,0100000,0010213,
    0062723,0000012,0012723,0177777,0005023,0005023,0005300,0001363,
    0010403,0052763,0000200,0000002,0052763,0000300,0000016,0012763,
    0177776,0000022,0052763,0000100,0000032,0062763,0000002,0000034,
    0062763,0000004,0000050,0012763,0040000,0000062,0010363,0000064,
    0062763,0000074,0000064,0010363,0000100,0062763,0000070,0000100,
    0012763,0177776,0000102,0012763,0120000,0000112,0012763,0177775,
    0000116,0012763,0020000,0000126,0010461,0177772,0005061,0177774,
    0012700,0077777,0032711,0100000,0001005,0005300,0001373,0052712,
    0001000,0000411,0012700,0000020,0004567,0001376,0100000,0020000,
    0001405,0052712,0040000,0052712,0000020,0000207,0010203,0062703,
    0000040,0012700,0000010,0016305,0000000,0042705,0037777,0022705,
    0140000,0001357,0022700,0000004,0001403,0022700,0000001,0001007,
    0005763,0000010,0001346,0005763,0000012,0001343,0000424,0022700,
    0000002,0001405,0032763,0100000,0000010,0001733,0000414,0016305,
    0000010,0042705,0026417,0022705,0000000,0001323,0016305,0000012,
    0042705,0176000,0001716,0062703,0000014,0005300,0001324,0010203,
    0062703,0000012,0010204,0062704,0001362,0010405,0022324,0001303,
    0022324,0001301,0022324,0001277,0005724,0001275,0005724,0001273,
    0022524,0001271,0022524,0001267,0022524,0001265,0010203,0062703,
    0000162,0010305,0012700,0000113,0005023,0005300,0001375,0010204,
    0062704,0000012,0004767,0000046,0062705,0000020,0004767,0000036,
    0004567,0000444,0177674,0001401,0000207,0012700,0177777,0032711,
    0020000,0001423,0005300,0001373,0052712,0100000,0000207,0010446,
    0012700,0000006,0005205,0012703,0000007,0111425,0005303,0001375,
    0005204,0005300,0001367,0012604,0000207,0005712,0001017,0052711,
    0001400,0012700,0000056,0004767,0000132,0012700,0000074,0004567,
    0000522,0103005,0042712,0001000,0052712,0100000,0000207,0012700,
    0000074,0004767,0000156,0001761,0001403,0052712,0000040,0000207,
    0012700,0000074,0004767,0000232,0001370,0012700,0002734,0004767,
    0000042,0012700,0002752,0004567,0000432,0103757,0012700,0002752,
    0004767,0000100,0001766,0001351,0012700,0002752,0004767,0000162,
    0001344,0000207,0010203,0062703,0004362,0010204,0062704,0000012,
    0010405,0012423,0012423,0012423,0012523,0012523,0012523,0012723,
    0000220,0005023,0012723,0000001,0110023,0005300,0001375,0005062,
    0000002,0000207,0004567,0000542,0000000,0020000,0001004,0062716,
    0000002,0005712,0000207,0016200,0000050,0042700,0137777,0001010,
    0016200,0000030,0032700,0137777,0001003,0042712,0040000,0000757,
    0005262,0000002,0022762,0000144,0000002,0003751,0042712,0040000,
    0000750,0010204,0062704,0001362,0010205,0062705,0004362,0122425,
    0001002,0005300,0001374,0000207,0010200,0062700,0000162,0010046,
    0011500,0005300,0004767,0000270,0010461,0177766,0005061,0177770,
    0012500,0004767,0000306,0012764,0130000,0000002,0011664,0000004,
    0010461,0177772,0005061,0177774,0012704,0017777,0032711,0100000,
    0001010,0005304,0001373,0052712,0001000,0005726,0052712,0010000,
    0000430,0016500,0177776,0006300,0005400,0004567,0000274,0000000,
    0020000,0001363,0016500,0177776,0006300,0005400,0010204,0062704,
    0001362,0012603,0122423,0001352,0005300,0001374,0022714,0051343,
    0001345,0000205,0005046,0006000,0005516,0061600,0005400,0004767,
    0000076,0010461,0177766,0005061,0177770,0004767,0000116,0005726,
    0001403,0052764,0000200,0000002,0010461,0177772,0005061,0177774,
    0012703,0000777,0005000,0032711,0100000,0001010,0005300,0001376,
    0005303,0001371,0052712,0001000,0000261,0000401,0000241,0000205,
    0010203,0062703,0001362,0012704,0000200,0012723,0051343,0005304,
    0001374,0004567,0000020,0000020,0001362,0000207,0004567,0000006,
    0000040,0004362,0000207,0012503,0060203,0010304,0012723,0100000,
    0012723,0120000,0012513,0060223,0010023,0012723,0100000,0012723,
    0100000,0012723,0100000,0005023,0000205,0010046,0005000,0011104,
    0052711,0100200,0042704,0077401,0022704,0100260,0001401,0010700,
    0016204,0000040,0042704,0037777,0022704,0140000,0001401,0010700,
    0016204,0000050,0100002,0042704,0077777,0042704,0076417,0022504,
    0001401,0010700,0016204,0000052,0042704,0176000,0001001,0010700,
    0016204,0000020,0042704,0037777,0022704,0140000,0001401,0010700,
    0016204,0000030,0010446,0042704,0007777,0022504,0001401,0010700,
    0012604,0042704,0174377,0022762,0177775,0000046,0001002,0005726,
    0000415,0032762,0010000,0000042,0001401,0005004,0016203,0000032,
    0042703,0177400,0060304,0022604,0001401,0010700,0010003,0001402,
    0052712,0040000,0000205,0000005,0012706,0017776,0010616,0011646,
    0162716,0003056,0010703,0062703,0000014,0010337,0000004,0011100,
    0000401,0000000,0004767,0000230,0011605,0012725,0022410,0012725,
    0000401,0105025,0105025,0012725,0000621,0112725,0000002,0012702,
    0002752,0110225,0000302,0110225,0012702,0000013,0005000,0004767,
    0000452,0001350,0012702,0002756,0004767,0000660,0001046,0011603,
    0112304,0005302,0120427,0000002,0001404,0105704,0001335,0162702,
    0000004,0105713,0001402,0121300,0001030,0112300,0105200,0005302,
    0003410,0012305,0005723,0162702,0000004,0003403,0112325,0005302,
    0003375,0105704,0001417,0005003,0011605,0112725,0000012,0110025,
    0110325,0005005,0012702,0000003,0000722,0105700,0001673,0012703,
    0000001,0000762,0004767,0001232,0112346,0112366,0000001,0000207,
    0042761,0000002,0000016,0016605,0000002,0010504,0062704,0177720,
    0010466,0000004,0012702,0000020,0005024,0077202,0010504,0062704,
    0177760,0005065,0177722,0010465,0177724,0005065,0177742,0010465,
    0177744,0052765,0100000,0177722,0012702,0002756,0006202,0005402,
    0010265,0177726,0052765,0120000,0177742,0016604,0000004,0010467,
    0001324,0005067,0001322,0062704,0000020,0010467,0001314,0005067,
    0001312,0116167,0000000,0001262,0116167,0000002,0001255,0116167,
    0000004,0001250,0116167,0000006,0001243,0116167,0000010,0001236,
    0116167,0000012,0001231,0105267,0001232,0042761,0000002,0000016,
    0052761,0000400,0000016,0004767,0001104,0005065,0000002,0016744,
    0001174,0016744,0001166,0016744,0001160,0012744,0000000,0012744,
    0001000,0012744,0000253,0004767,0000046,0000207,0016605,0000002,
    0010504,0010244,0012744,0000540,0016744,0001122,0016744,0001114,
    0016744,0001106,0016744,0001060,0016744,0001052,0016744,0001044,
    0062705,0177740,0062702,0000016,0020227,0000074,0002003,0012702,
    0000074,0000407,0032702,0000001,0001404,0052765,0000200,0000002,
    0005202,0006202,0005402,0010265,0000006,0005065,0000010,0005065,
    0000012,0016761,0001024,0000010,0016761,0001020,0000012,0012704,
    0000204,0004767,0000610,0103012,0001404,0032765,0001000,0000010,
    0001354,0042765,0000200,0000002,0000244,0000207,0042765,0000200,
    0000002,0032702,0040004,0001401,0000000,0000207,0016605,0000002,
    0062705,0177720,0005065,0000010,0005065,0000012,0016761,0000706,
    0000004,0016761,0000702,0000006,0052761,0000001,0000016,0012704,
    0100004,0004767,0000470,0103030,0001355,0052761,0000002,0000016,
    0012767,0000253,0000576,0012767,0000400,0000572,0012767,0000000,
    0000566,0105267,0000616,0005000,0042761,0000002,0000016,0052761,
    0000400,0000016,0000244,0000207,0042761,0000001,0000016,0052761,
    0000002,0000016,0016605,0000002,0016502,0177776,0042761,0000002,
    0000016,0052761,0000400,0000016,0022765,0000540,0177774,0001041,
    0105767,0000520,0001015,0026765,0000456,0177772,0001267,0026765,
    0000444,0177770,0001263,0026765,0000432,0177766,0001257,0000207,
    0122715,0000003,0001253,0016567,0177766,0000410,0016567,0177770,
    0000404,0016567,0177772,0000400,0105067,0000430,0000244,0005000,
    0000207,0022765,0000220,0177774,0001423,0022765,0001140,0177774,
    0001225,0122715,0000005,0001222,0004767,0000262,0016464,0177776,
    0177770,0016464,0177774,0177766,0016464,0177772,0177764,0000437,
    0010504,0060204,0010503,0062703,0177720,0016302,0000010,0042702,
    0174377,0156302,0000012,0062702,0000056,0022724,0000002,0001027,
    0062765,0000010,0177776,0032714,0000001,0001021,0010503,0062703,
    0177760,0012423,0012423,0012423,0010504,0062704,0177774,0016744,
    0000234,0016744,0000226,0016744,0000220,0004767,0177122,0000167,
    0177272,0016737,0000156,0000030,0016737,0000152,0000032,0016737,
    0000146,0000034,0052761,0000002,0000016,0000264,0000207,0012703,
    0037777,0000241,0012702,0000220,0030461,0000016,0001006,0005303,
    0001376,0005302,0001371,0000261,0000207,0016102,0000016,0010261,
    0000016,0032765,0040000,0000010,0001401,0000261,0000207,0010546,
    0010703,0062703,0000050,0012702,0000030,0012325,0005725,0112325,
    0005302,0001375,0012605,0010504,0012702,0000034,0010244,0012744,
    0001140,0000207,0000253,0000400,0000000,0000007,0000001,0001403,
    0000000,0000002,0000402,0003400,0003000,0000000,0000000,0000000,
    0000144,0022401,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0000000,
    0000000,0000000,0000000,0000000,0000000,0000000,0000000,0102206
  };
#endif                                                  /* VM_PDP11 */

#endif                                                  /* _PDP11_XQ_BOOTROM_H */
